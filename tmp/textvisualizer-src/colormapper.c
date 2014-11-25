#include "colormapper.h"

int mapColor(int code){
	int step = COLOR / KEYCOUNT;
	int color = code * step;
	return color;
}
