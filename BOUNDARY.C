#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd =DETECT, gm = 0;
	int x,y;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	rectangle(100,100,150,150);
	fillalgo(105,105,5,15);
	getch();
	closegraph();
}
int fillalgo(int x, int y, int fill, int back)
{
	if(getpixel(x,y)!=back && getpixel(x,y)!=fill)
	{
		putpixel(x,y,fill);
		fillalgo(x+1,y,fill,back);
fillalgo(x+1,y,fill,back);
		fillalgo(x-1,y,fill,back);
		fillalgo(x,y+1,fill,back);
		fillalgo(x,y-1,fill,back);
	}
}