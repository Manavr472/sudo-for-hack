#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd =DETECT, gm = 0;
	int x,y;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	rectangle(100,100,200,150);
	flood(105,105,10,0);
	getch();
	closegraph();
}
int flood(int x, int y, int fill, int back)
{
	if(getpixel(x,y)==back)
	{
		putpixel(x,y,fill);
		flood(x+1,y,fill,back);
		flood(x-1,y,fill,back);
		flood(x,y+1,fill,back);
		flood(x,y-1,fill,back);
	}
}
