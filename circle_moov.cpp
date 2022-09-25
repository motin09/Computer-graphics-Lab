#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
 
int main() {
    int gd = DETECT, gm;
    int i, maxx, midy;
 
    /* initialize graphic mode */
    initgraph(&gd, &gm, (char*)"");
    /* maximum pixel in horizontal axis */
    maxx = getmaxx();
    /* mid pixel in vertical axis */
    midy = getmaxy()/2;
 
    for (i=0; i <=550; i=i+5) {
        delay(100);
        /* clears screen */
        cleardevice();
 
  
        circle(i,130,100);
        /* draw a white road */
        setcolor(GREEN);
        line(0, midy , maxx, midy );
 
        /* Add delay of 0.1 milli seconds */
    }
 
    getch();
    closegraph();
    return 0;
}