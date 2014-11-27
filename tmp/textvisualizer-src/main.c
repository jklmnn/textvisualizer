#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <X11/Xlib.h>

#include "colormapper.h"
#include "keytable.h"

int main(){
	Display *dsp0 = XOpenDisplay( NULL );
	if(!dsp0){
		return 1;
	}

	int screenNumber = DefaultScreen(dsp0);
	Screen *scrn = DefaultScreenOfDisplay(dsp0);
	int height = scrn->height;
	int width = scrn->width;

	unsigned long white = WhitePixel(dsp0, screenNumber);
	unsigned long black = BlackPixel(dsp0, screenNumber);

	Window mainWindow = XCreateSimpleWindow(dsp0, DefaultRootWindow(dsp0), 0, 0, width, height, 0, black, white);
	XMapWindow(dsp0, mainWindow);
	long eventMask = StructureNotifyMask;
	XSelectInput( dsp0, mainWindow, eventMask );

	XEvent evt;
	do{
		XNextEvent( dsp0, &evt );
	}while( evt.type != MapNotify);

	eventMask = KeyPressMask;
	XSelectInput(dsp0, mainWindow, eventMask);

	int i = 0;
	GC gc = XCreateGC(dsp0, mainWindow,0, NULL);
	XSetForeground(dsp0, gc, black);
	XKeyEvent xke;
	long int keycode;
	FILE *log;
	char *home = getenv("HOME");
	int pathlen;
	for(pathlen = 0; home[pathlen] != 0; pathlen++);
	char *path = (char*)malloc(pathlen + 9);
	const char filename[8] = "/tvx.log";
	memcpy(path, home, pathlen);
	memcpy(&path[pathlen], filename, 8);
	log=fopen(path, "a");
	do{
		XNextEvent (dsp0, &evt );
		xke = evt.xkey;
		keycode = keytable[xke.keycode - 1];
		if(keycode == -3){
			XSetForeground(dsp0, gc, white);
			XDrawPoint(dsp0, mainWindow, gc, i, 0);
			if(i > 0){
				i--;
			}
		}else if(keycode >= 0){
			unsigned long color = mapColor(keycode);
			XSetForeground(dsp0, gc, color);
			XDrawPoint(dsp0, mainWindow, gc, i, 0);
			i++;
			fprintf(log, "%c", (char)chartable[keycode]);
		}
	}while(keycode != -2);

	fclose(log);
	XDestroyWindow(dsp0, mainWindow);
	XCloseDisplay(dsp0);

	return 0;
}
