#include "stdio.h"
#include "bsp.h"

struct _IntArray
{
int *pIntArray;
size_t count; 
};
	
unsigned char gdata=0;
//static unsigned char bspdata;
unsigned char bspdata;

unsigned char basp(void)
{
	gdata++;
	return gdata;
}

