#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
void main()
{
	int gd=DETECT,gm;
	int x,y,r,x1,y1,p;
	initgraph(&gd,&gm,"C://TC//BGI");
	printf("Enter center points for circle: ");
	scanf("%d %d",&x1,&y1);
	printf("Enter radius of the circle: ");
	scanf("%d",&r);
	x=0; y=r;
	p=5/4-r;
	while(x<y)
	{
		putpixel(x1+x,y1+y,WHITE);
		putpixel(x1+x,y1-y,WHITE);
		putpixel(x1-x,y1+y,WHITE);
		putpixel(x1-x,y1-y,WHITE);
		putpixel(x1+y,y1+x,WHITE);
		putpixel(x1+y,y1-x,WHITE);
		putpixel(x1-y,y1+x,WHITE);
		putpixel(x1-y,y1-x,WHITE);
		if(p<0)
		{
			p=p+2*x+3;
		}else{
			y--;
			p=p+2*(x-y)+5;
		}
		x=x+1;
	}
	getch();
	closegraph();
}


