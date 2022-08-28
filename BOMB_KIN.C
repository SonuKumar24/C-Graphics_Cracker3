#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
 int gd=DETECT,gm;
 int x,i=0;
 float a=0;
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
 cleardevice();
 setcolor(BROWN);
// rectangle(0,0,500,500);
// setfillstyle(1,BLUE);
// floodfill(5,5,BROWN);
 for(i=0;i<100;i++)
 {
 // setcolor(RED);
 // arc(200,200,0,360,i);


   setcolor(BLUE);

   ellipse(200,200,0,360,i,i);
   setfillstyle(1,BLACK);
   floodfill(200,200,BLUE);


   ellipse(200,200,0,360,i,i);
   setfillstyle(3,BLUE);
   floodfill(200,200,BLUE);


  delay(100);
 }
 getch();
}