#ifndef KEYTABLE_H
#define KEYTABLE_H

const short int keytable[133] = {
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-2, //escape
	1, //1
	2, //2
	3, //3
	4, //4
	5, //5
	6, //6
	7, //7
	8, //8
	9, //9
	0, //0
	43, //ß
	-1, //´
	-3, //backspace
	-1, //tab
	10, //q
	11, //w
	12, //e
	13, //r
	14, //t
	15, //z
	16, //u
	17, //i
	18, //o
	19, //p
	20, //ü
	44, //+
	45, //enter
	-4, //lctrl
	21, //a
	22, //s
	23, //d
	24, //f
	25, //g
	26, //h
	27, //j
	28, //k
	29, //l
	30, //ö
	31, //ä
	-1, 
	-1, //lshift
	-1, //#
	32, //y
	33, //x
	34, //c
	35, //v
	36, //b
	37, //n
	38, //m
	39, //,
	40, //.
	41, //-
	-1, //rshift
	-1,
	-1, //lalt
	42, //space
	-1, //capslock
	-1, //f1
	-1, //f2
	-1, //f3
	-1, //f4
	-1, //f5
	-1, //f6
	-1, //f7
	-1, //f8
	-1, //f9
	-1, //f10
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1, //<
	-1, //f11
	-1, //f12
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1, //rctrl
	-1,
	-1,
	-1, //ralt
	-1,
	-1, //home
	-1, //up
	-1, //pgup
	-1, //left
	-1, //right
	-1, //end
	-1, //down
	-1, //pgdown
	-1, //ins
	-1, //del
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
 	-1,
	-1,
	-1,
	-1,
	-1, //win
};

const unsigned short int chartable[46] = {
	0x0030,
	0x0031,
	0x0032,
	0x0033,
	0x0034,
	0x0035,
	0x0036,
	0x0037,
	0x0038,
	0x0039,
	0x0071,
	0x0077,
	0x0065,
	0x0072,
	0x0074,
	0x007a,
	0x0075,
	0x0069,
	0x006f,
	0x0070,
	0xc3bc,
	0x0061,
	0x0073,
	0x0064,
	0x0066,
	0x0067,
	0x0068,
	0x006a,
	0x006b,
	0x006c,
	0xc3b6,
	0xc3a4,
	0x0079,
	0x0078,
	0x0063,
	0x0076,
	0x0062,
	0x006e,
	0x006d,
	0x002c,
	0x002e,
	0x002d,
	0x0020,
	0xc39f,
	0x002b,
	0x000a
};


#endif
