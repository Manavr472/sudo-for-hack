#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd = DETECT, gm=0;
	int x,y,x1,y1,p,r;
	initgraph(&gd,&gm,"C://TC//BGI");
	printf("Enter center of the cirle: ");
	scanf("%d %d",&x1,&y1);
	printf("Enter radius of circle: ");
	scanf("%d",&r);
	y=r;
	x=0;
	p=5/4*r;

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
			x++;
			p=p+4*x+6;
		}
		else{
			x++;
			y--;
			p=p+4*(x-y)+10;
		}
	}
	getch();
	closegraph();
}