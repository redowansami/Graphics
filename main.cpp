#include <iostream>
#include <graphics.h>
using namespace std;

int main(){

    initwindow(500,500,"THE WINDOWS");
    setcolor(BLUE);
    setfillstyle(SOLID_FILL,BLUE);
    //0
    circle(100,250,15);
    floodfill(100,250,BLUE);
    //1
    circle(150,200,15);
    floodfill(150,200,BLUE);
    //2
    circle(250,200,15);
    floodfill(250,200,BLUE);
    //3
    circle(300,250,15);
    floodfill(300,250,BLUE);
    //4
    circle(200,300,15);
    floodfill(200,300,BLUE);

    line(100,250,150,200);
    line(150,200,250,200);
    line(250,200,300,250);
    line(150,200,300,250);
    line(100,250,300,250);
    line(300,250,200,300);
    line(100,250,200,300);

    getch();
    closegraph();
    return 0;
}
