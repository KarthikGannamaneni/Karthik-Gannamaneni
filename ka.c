#include<stdio.h>
#include <graphics.h>




int ddal(int x1,int y1,int x2,int y2)
{
    float m =(y2-y1)/(x2-x1);
    if(m<=1)
    {
        putpixel(x1,y1,11);
        //int dx=1;
        for(int i=x1;i<=x2;i++)
        {
            x1=x1+1;
            y1=y1+m;
            putpixel(x1,y1,11);
        }
    }
    else
    {
        putpixel(x1,y1,11);
        //int dy=1;
        for(int i=y1;i<=y2;i++)
        {
            y1=y1+1;
            x1=x1+1;
            putpixel(x1,y1,11);
        }
    }
    return 0;
}

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL)
//--------FACE_SQUARE-------
ddal(150,150,154,150);
ddal(154,150,154,154);
ddal(154,154,150,154);
ddal(150,154,150,150);
//--------BODY_SQUARE--------
ddal(149,155,155,155);
ddal(155,155,155,161);
ddal(155,161,149,161);
ddal(149,161,149,155);
//--------INNERBODY_SQUARE--------
ddal(148,154,154,154);
ddal(154,154,153,)



















return 0;

}
