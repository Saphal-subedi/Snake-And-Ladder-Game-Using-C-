#include<graphics.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<MMSystem.h>
#include<windowsx.h>
using namespace std;
void menu();
int randomfun()
{
  int upper=6,lower=1,a;
a=(rand()%(upper-lower+1))+lower;
return(a);
}
void dicered(int a)
{
    setcolor(RED);//starting point for dice
    setfillstyle(SOLID_FILL,4);
    rectangle(460,20,510,55);
    floodfill(465,25,4);
    if(a==1)
    {
         setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(485,37,5);
         floodfill(485,37,WHITE);

    }
    if(a==2)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(476,37,5);
         circle(495,37,5);
         floodfill(476,37,WHITE);
         floodfill(495,37,WHITE);


    }
    if(a==3)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(472,37,5);
         circle(486,37,5);
         circle(499,37,5);
         floodfill(472,37,WHITE);
         floodfill(486,37,WHITE);
         floodfill(499,37,WHITE);



    }
    if(a==4)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(476,30,5);
         circle(495,30,5);
         circle(476,47,5);
         circle(495,47,5);
         floodfill(476,30,WHITE);
         floodfill(495,30,WHITE);
         floodfill(476,47,WHITE);
         floodfill(495,47,WHITE);

    }
    if(a==5)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(472,30,5);
         circle(500,30,5);
         circle(472,47,5);
         circle(500,47,5);
         circle(486,37,5);
         floodfill(486,37,WHITE);
         floodfill(472,30,WHITE);
         floodfill(500,30,WHITE);
         floodfill(472,47,WHITE);
         floodfill(500,47,WHITE);

    }
    if(a==6)
    {

        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(472,30,5);
         circle(486,30,5);
         circle(499,30,5);
         circle(472,47,5);
         circle(486,47,5);
         circle(499,47,5);

         floodfill(472,30,WHITE);
         floodfill(486,30,WHITE);
         floodfill(499,30,WHITE);
         floodfill(472,47,WHITE);
         floodfill(486,47,WHITE);
         floodfill(499,47,WHITE);


    }//for dice


}
void dicegreen(int a)
{
    setcolor(GREEN);//starting point for dice
    setfillstyle(SOLID_FILL,2);
    rectangle(460,20,510,55);
    floodfill(465,25,2);
    if(a==1)
    {
         setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(485,37,5);
         floodfill(485,37,WHITE);

    }
    if(a==2)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(476,37,5);
         circle(495,37,5);
         floodfill(476,37,WHITE);
         floodfill(495,37,WHITE);


    }
    if(a==3)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(472,37,5);
         circle(486,37,5);
         circle(499,37,5);
         floodfill(472,37,WHITE);
         floodfill(486,37,WHITE);
         floodfill(499,37,WHITE);



    }
    if(a==4)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(476,30,5);
         circle(495,30,5);
         circle(476,47,5);
         circle(495,47,5);
         floodfill(476,30,WHITE);
         floodfill(495,30,WHITE);
         floodfill(476,47,WHITE);
         floodfill(495,47,WHITE);

    }
    if(a==5)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(472,30,5);
         circle(500,30,5);
         circle(472,47,5);
         circle(500,47,5);
         circle(486,37,5);
         floodfill(486,37,WHITE);
         floodfill(472,30,WHITE);
         floodfill(500,30,WHITE);
         floodfill(472,47,WHITE);
         floodfill(500,47,WHITE);

    }
    if(a==6)
    {

        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(472,30,5);
         circle(486,30,5);
         circle(499,30,5);
         circle(472,47,5);
         circle(486,47,5);
         circle(499,47,5);

         floodfill(472,30,WHITE);
         floodfill(486,30,WHITE);
         floodfill(499,30,WHITE);
         floodfill(472,47,WHITE);
         floodfill(486,47,WHITE);
         floodfill(499,47,WHITE);


    }//for dice


}
void diceblue(int a)
{
    setcolor(BLUE);//starting point for dice
    setfillstyle(SOLID_FILL,1);
    rectangle(460,20,510,55);
    floodfill(465,25,1);
    if(a==1)
    {
         setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(485,37,5);
         floodfill(485,37,WHITE);

    }
    if(a==2)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(476,37,5);
         circle(495,37,5);
         floodfill(476,37,WHITE);
         floodfill(495,37,WHITE);


    }
    if(a==3)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(472,37,5);
         circle(486,37,5);
         circle(499,37,5);
         floodfill(472,37,WHITE);
         floodfill(486,37,WHITE);
         floodfill(499,37,WHITE);



    }
    if(a==4)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(476,30,5);
         circle(495,30,5);
         circle(476,47,5);
         circle(495,47,5);
         floodfill(476,30,WHITE);
         floodfill(495,30,WHITE);
         floodfill(476,47,WHITE);
         floodfill(495,47,WHITE);

    }
    if(a==5)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(472,30,5);
         circle(500,30,5);
         circle(472,47,5);
         circle(500,47,5);
         circle(486,37,5);
         floodfill(486,37,WHITE);
         floodfill(472,30,WHITE);
         floodfill(500,30,WHITE);
         floodfill(472,47,WHITE);
         floodfill(500,47,WHITE);

    }
    if(a==6)
    {

        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(472,30,5);
         circle(486,30,5);
         circle(499,30,5);
         circle(472,47,5);
         circle(486,47,5);
         circle(499,47,5);

         floodfill(472,30,WHITE);
         floodfill(486,30,WHITE);
         floodfill(499,30,WHITE);
         floodfill(472,47,WHITE);
         floodfill(486,47,WHITE);
         floodfill(499,47,WHITE);


    }//for dice


}
void diceblack(int a)
{
    setcolor(BLACK);//starting point for dice
    setfillstyle(SOLID_FILL,0);
    rectangle(460,20,510,55);
    floodfill(465,25,0);
    if(a==1)
    {
         setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(485,37,5);
         floodfill(485,37,WHITE);

    }
    if(a==2)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(476,37,5);
         circle(495,37,5);
         floodfill(476,37,WHITE);
         floodfill(495,37,WHITE);


    }
    if(a==3)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(472,37,5);
         circle(486,37,5);
         circle(499,37,5);
         floodfill(472,37,WHITE);
         floodfill(486,37,WHITE);
         floodfill(499,37,WHITE);



    }
    if(a==4)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(476,30,5);
         circle(495,30,5);
         circle(476,47,5);
         circle(495,47,5);
         floodfill(476,30,WHITE);
         floodfill(495,30,WHITE);
         floodfill(476,47,WHITE);
         floodfill(495,47,WHITE);

    }
    if(a==5)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(472,30,5);
         circle(500,30,5);
         circle(472,47,5);
         circle(500,47,5);
         circle(486,37,5);
         floodfill(486,37,WHITE);
         floodfill(472,30,WHITE);
         floodfill(500,30,WHITE);
         floodfill(472,47,WHITE);
         floodfill(500,47,WHITE);

    }
    if(a==6)
    {

        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(472,30,5);
         circle(486,30,5);
         circle(499,30,5);
         circle(472,47,5);
         circle(486,47,5);
         circle(499,47,5);

         floodfill(472,30,WHITE);
         floodfill(486,30,WHITE);
         floodfill(499,30,WHITE);
         floodfill(472,47,WHITE);
         floodfill(486,47,WHITE);
         floodfill(499,47,WHITE);


    }//for dice


}
void menu1()

{
int a,c=40,d=0,e=1;


    SAPHAL:
        cleardevice();


        settextstyle(0, HORIZ_DIR,3);
    outtextxy(120,120,"START");
    settextstyle(0, HORIZ_DIR,3);
    outtextxy(120,160,"INSTRUCTION");
    settextstyle(0, HORIZ_DIR,3);
    outtextxy(120,200,"EXIT");
    settextstyle(0, HORIZ_DIR,3);
    outtextxy(60,120+d,"=>");
    a=getch();
     PlaySoundA(TEXT("E:\\menu sound.wav"), NULL, SND_ASYNC);

    if(a==80)
    {
        d=d+40;
        e=e+1;
    }
    else if(a==72)
    {
        d=d-40;
        e=e-1;
    }
    else if(a==13)
    {
        if(e==1)
        {
goto subedi;
        }
        else if(e==2)
        {
           cleardevice();
          settextstyle(0, HORIZ_DIR,2);
    outtextxy(0,120,"In the game there is one moving object");
    outtextxy(0,140,"of different 4 color which is moven by dice ");
    outtextxy(0,160,"and if it is in the ladder the it reach the ");
    outtextxy(0,180,"ladder top position and if object meet snake ");
    outtextxy(0,200,"head then it reach to snake tail position .");
    outtextxy(0,220,"The first color which rechaches to position  ");
    outtextxy(0,240,"100 will be a winner one   ");
    getch();
        }
        else{

exit(0);

        }

    }
    else
    {

        d=d;
    }

    if(e>3)
    {
        d=0;
        e=1;


    }
    if(e<1)
    {
        d=80;
        e=3;

    }


    goto SAPHAL;
    subedi:;


}



int gati(int b)
{

   static int a=0,c;
   a=a+b;
   c=a;
   if(c>100)
   {
       a=a-b;
   }

   if(a==1)
   {
       setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
       circle(23,437,17);
       floodfill(23,437,RED);

   }
  else if(a==2)
   {
       setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
       circle(69,437,17);
       floodfill(69,437,RED);

   }
    else if(a==3)
   {
       setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
       circle(69,299,17);
       floodfill(69,299,RED);

   }

        else if(a==4)
    {
       setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
       circle(161,437,17);
       floodfill(161,437,RED);

   }
   else if(a==5)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(207,437,17);
       floodfill(207,437,RED);
   }
   else if(a==6)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(253,437,17);
       floodfill(253,437,RED);
   }
   else if(a==7)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(299,437,17);
       floodfill(299,437,RED);
   }
   else if(a==8)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(345,437,17);

       floodfill(342,437,RED);
   }
   else if(a==9)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(391,437,17);
       floodfill(391,437,RED);
   }
else if(a==10)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(391,391,17);
       floodfill(391,391,RED);
   }
   else if(a==11)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(437,391,17);
       floodfill(437,391,RED);
   }
   else if(a==12)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(391,391,17);
       floodfill(391,391,RED);
   }
   else if(a==13)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(345,391,17);
       floodfill(345,391,RED);
   }
   else if(a==14)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(299,391,17);

       floodfill(299,391,RED);
   }
   else if(a==15)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(253,391,17);
       floodfill(253,391,RED);
   }
   else if(a==16)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(345,391,17);
       floodfill(345,391,RED);
   }
   else if(a==17)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(161,391,17);
       floodfill(161,391,RED);
   }
   else if(a==18)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(115,391,17);
       floodfill(115,391,RED);

   }
   else if(a==19)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(69,391,17);
       floodfill(69,391,RED);
   }
   else if(a==20)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(23,391,17);
       floodfill(23,391,RED);
   }
   else if(a==21)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(23,345,17);
       floodfill(23,345,RED);
   }
   else if(a==22)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(69,345,17);
       floodfill(69,345,RED);
   }
   else if(a==23)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(115,345,17);
       floodfill(115,345,RED);
   }
   else if(a==24)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(161,345,17);
       floodfill(161,345,RED);
   }
   else if(a==25)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(207,345,17);
       floodfill(207,345,RED);
   }
   else if(a==26)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(253,345,17);
       floodfill(253,345,RED);
   }
   else if(a==27)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(345,207,17);
       floodfill(345,207,RED);
   }
   else if(a==28)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(345,345,17);
       floodfill(345,345,RED);
   }
   else if(a==29)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(391,345,17);
       floodfill(391,345,RED);
   }
   else if(a==30)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(437,345,17);
       floodfill(437,345,RED);
   }
   else if(a==31)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(161,437,17);
       floodfill(161,437,RED);
   }
   else if(a==32)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(391,299,17);
       floodfill(391,299,RED);
   }
   else if(a==33)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(345,299,17);
       floodfill(345,299,RED);
   }
   else if(a==34)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(299,299,17);
       floodfill(299,299,RED);
   }
   else if(a==35)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(253,299,17);
       floodfill(253,299,RED);
   }
   else if(a==36)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(207,299,17);
       floodfill(207,299,RED);
   }
   else if(a==37)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(161,299,17);
       floodfill(161,299,RED);
   }
   else if(a==38)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(115,299,17);
       floodfill(115,299,RED);
   }
   else if(a==39)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(69,299,17);
       floodfill(69,299,RED);
   }
   else if(a==40)

   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(23,299,17);
       floodfill(23,299,RED);
   }
    else if(a==41)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(23,253,17);
       floodfill(23,253,RED);
   }
    else if(a==42)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(69,253,17);
       floodfill(69,253,RED);
   }
   else if(a==43)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(115,253,17);
       floodfill(115,253,RED);
   }
   else if(a==44)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(161,253,17);
       floodfill(161,253,RED);
   }
   else if(a==45)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(207,253,17);
       floodfill(207,253,RED);
   }
   else if(a==46)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(253,253,17);
       floodfill(253,253,RED);
   }
   else if(a==47)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(207,345,17);
       floodfill(207,345,RED);
   }
   else if(a==48)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(345,253,17);
       floodfill(345,253,RED);
   }
   else if(a==49)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(391,253,17);
       floodfill(391,253,RED);
   }
   else if(a==50)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(437,253,17);
       floodfill(437,253,RED);
   }
   else if(a==51)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(437,207,17);
       floodfill(437,207,RED);
   }
   else if(a==52)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(391,207,17);
       floodfill(391,207,RED);
   }
   else if(a==53)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(345,207,17);
       floodfill(345,207,RED);
   }
   else if(a==54)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(299,207,17);
       floodfill(299,207,RED);
   }
   else if(a==55)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(253,207,17);
       floodfill(253,207,RED);
   }
   else if(a==56)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(161,69,17);
       floodfill(161,269,RED);
   }
   else if(a==57)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(161,207,17);
       floodfill(161,207,RED);
   }
   else if(a==58)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(115,207,17);
       floodfill(115,207,RED);
   }
   else if(a==59)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(69,207,17);
       floodfill(69,207,RED);
   }
   else if(a==60)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(23,207,17);
       floodfill(23,207,RED);
   }
   else if(a==61)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(69,23,17);
       floodfill(69,23,RED);
   }
   else if(a==62)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(69,161,17);
       floodfill(69,161,RED);
   }
   else if(a==63)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(23,207,17);
       floodfill(23,207,RED);
   }
   else if(a==64)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(161,161,17);
       floodfill(161,161,RED);
   }
   else if(a==65)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(207,161,17);
       floodfill(207,161,RED);
   }
   else if(a==66)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(391,207,17);
       floodfill(391,207,RED);
   }
   else if(a==67)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(299,161,17);
       floodfill(299,161,RED);
   }
   else if(a==68)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(345,161,17);
       floodfill(345,161,RED);
   }
   else if(a==69)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(391,161,17);
       floodfill(391,161,RED);
   }
   else if(a==70)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(437,161,17);
       floodfill(437,161,RED);
   }
   else if(a==71)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(437,115,17);
       floodfill(437,115,RED);
   }
   else if(a==72)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(437,69,17);
       floodfill(437,69,RED);
   }
    else if(a==73)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(345,115,17);
       floodfill(345,115,RED);
   }
    else if(a==74)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(299,115,17);
       floodfill(299,115,RED);
   }
    else if(a==75)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(253,115,17);
       floodfill(253,115,RED);
   }
    else if(a==76)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(207,115,17);
       floodfill(207,115,RED);
   }
    else if(a==77)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(161,115,17);
       floodfill(161,115,RED);
   }
    else if(a==78)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(115,115,17);
       floodfill(115,115,RED);
   }
    else if(a==79)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(69,115,17);
       floodfill(69,115,RED);
   }
    else if(a==80)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(23,115,17);
       floodfill(23,115,RED);
   }
    else if(a==81)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(23,69,17);
       floodfill(23,69,RED);
   }
   else if(a==82)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(69,69,17);
       floodfill(69,69,RED);
   }
   else if(a==83)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(115,69,17);
       floodfill(115,69,RED);
   }
   else if(a==84)

   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(161,69,17);
       floodfill(161,69,RED);
   }
   else if(a==85)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);

       circle(207,69,17);
       floodfill(207,69,RED);
   }
   else if(a==86)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(253,69,17);
       floodfill(253,69,RED);
   }
   else if(a==87)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(299,69,17);
       floodfill(299,69,RED);
   }
   else if(a==88)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(345,69,17);
       floodfill(345,69,RED);
   }
   else if(a==89)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(391,69,17);
       floodfill(391,69,RED);
   }
   else if(a==90)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(437,69,17);
       floodfill(437,69,RED);
   }
   else if(a==91)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(437,23,17);
       floodfill(437,23,RED);
   }
   else if(a==92)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(391,23,17);
       floodfill(391,23,RED);
   }
   else if(a==93)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(345,23,17);
       floodfill(345,23,RED);
   }
   else if(a==94)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(299,23,17);
       floodfill(299,23,RED);
   }
   else if(a==95)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(253,23,17);
       floodfill(253,23,RED);
   }
   else if(a==96)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(207,23,17);
       floodfill(207,23,RED);
   }
   else if(a==97)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(253,115,17);
       floodfill(253,115,RED);
   }
   else if(a==98)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(115,23,17);
       floodfill(115,23,RED);
   }
   else if(a==99)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(69,23,17);
       floodfill(69,23,RED);
   }
   else if(a==100)
   {
       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);
       circle(23,23,17);
       floodfill(23,23,RED);
       exit(0);
   }
   return a;


}
int gati2(int t )
{
static int g=0,h;
   g=g+t;
   h=g;
   if(h>100)
   {
       g=g-t;
   }
    if(g==1)
   {
       setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
       circle(23,437,17);
       floodfill(23,437,GREEN);

   }
  else if(g==2)
   {
       setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
       circle(69,437,17);
       floodfill(69,437,GREEN);

   }
    else if(g==3)
   {
       setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
       circle(69,299,17);
       floodfill(69,299,GREEN);

   }

        else if(g==4)
    {
       setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
       circle(161,437,17);
       floodfill(161,437,GREEN);

   }
   else if(g==5)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(207,437,17);
       floodfill(207,437,GREEN);
   }
   else if(g==6)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(253,437,17);
       floodfill(253,437,GREEN);
   }
   else if(g==7)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(299,437,17);
       floodfill(299,437,GREEN);
   }
   else if(g==8)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(345,437,17);

       floodfill(342,437,GREEN);
   }
   else if(g==9)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(391,437,17);
       floodfill(391,437,GREEN);
   }
else if(g==10)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(391,391,17);
       floodfill(391,391,GREEN);
   }
   else if(g==11)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(437,391,17);
       floodfill(437,391,GREEN);
   }
   else if(g==12)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(391,391,17);
       floodfill(391,391,GREEN);
   }
   else if(g==13)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(345,391,17);
       floodfill(345,391,GREEN);
   }
   else if(g==14)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(299,391,17);

       floodfill(299,391,GREEN);
   }
   else if(g==15)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(253,391,17);
       floodfill(253,391,GREEN);
   }
   else if(g==16)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(345,391,17);
       floodfill(345,391,GREEN);
   }
   else if(g==17)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(161,391,17);
       floodfill(161,391,GREEN);
   }
   else if(g==18)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(115,391,17);
       floodfill(115,391,GREEN);

   }
   else if(g==19)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(69,391,17);
       floodfill(69,391,GREEN);
   }
   else if(g==20)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(23,391,17);
       floodfill(23,391,GREEN);
   }
   else if(g==21)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(23,345,17);
       floodfill(23,345,GREEN);
   }
   else if(g==22)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(69,345,17);
       floodfill(69,345,GREEN);
   }
   else if(g==23)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(115,345,17);
       floodfill(115,345,GREEN);
   }
   else if(g==24)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(161,345,17);
       floodfill(161,345,GREEN);
   }
   else if(g==25)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(207,345,17);
       floodfill(207,345,GREEN);
   }
   else if(g==26)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(253,345,17);
       floodfill(253,345,GREEN);
   }
   else if(g==27)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(345,207,17);
       floodfill(345,207,GREEN);
   }
   else if(g==28)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(345,345,17);
       floodfill(345,345,GREEN);
   }
   else if(g==29)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(391,345,17);
       floodfill(391,345,GREEN);
   }
   else if(g==30)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(437,345,17);
       floodfill(437,345,GREEN);
   }
   else if(g==31)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(161,437,17);
       floodfill(161,437,GREEN);
   }
   else if(g==32)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(391,299,17);
       floodfill(391,299,GREEN);
   }
   else if(g==33)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(345,299,17);
       floodfill(345,299,GREEN);
   }
   else if(g==34)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(299,299,17);
       floodfill(299,299,GREEN);
   }
   else if(g==35)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(253,299,17);
       floodfill(253,299,GREEN);
   }
   else if(g==36)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(207,299,17);
       floodfill(207,299,GREEN);
   }
   else if(g==37)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(161,299,17);
       floodfill(161,299,GREEN);
   }
   else if(g==38)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(115,299,17);
       floodfill(115,299,GREEN);
   }
   else if(g==39)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(69,299,17);
       floodfill(69,299,GREEN);
   }
   else if(g==40)

   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(23,299,17);
       floodfill(23,299,GREEN);
   }
    else if(g==41)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(23,253,17);
       floodfill(23,253,GREEN);
   }
    else if(g==42)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(69,253,17);
       floodfill(69,253,GREEN);
   }
   else if(g==43)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(115,253,17);
       floodfill(115,253,GREEN);
   }
   else if(g==44)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(161,253,17);
       floodfill(161,253,GREEN);
   }
   else if(g==45)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(207,253,17);
       floodfill(207,253,GREEN);
   }
   else if(g==46)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(253,253,17);
       floodfill(253,253,GREEN);
   }
   else if(g==47)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(207,345,17);
       floodfill(207,345,GREEN);
   }
   else if(g==48)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(345,253,17);
       floodfill(345,253,GREEN);
   }
   else if(g==49)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(391,253,17);
       floodfill(391,253,GREEN);
   }
   else if(g==50)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(437,253,17);
       floodfill(437,253,GREEN);
   }
   else if(g==51)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(437,207,17);
       floodfill(437,207,GREEN);
   }
   else if(g==52)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(391,207,17);
       floodfill(391,207,GREEN);
   }
   else if(g==53)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(345,207,17);
       floodfill(345,207,GREEN);
   }
   else if(g==54)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(299,207,17);
       floodfill(299,207,GREEN);
   }
   else if(g==55)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(253,207,17);
       floodfill(253,207,GREEN);
   }
   else if(g==56)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(161,69,17);
       floodfill(161,269,GREEN);
   }
   else if(g==57)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(161,207,17);
       floodfill(161,207,GREEN);
   }
   else if(g==58)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(115,207,17);
       floodfill(115,207,GREEN);
   }
   else if(g==59)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(69,207,17);
       floodfill(69,207,GREEN);
   }
   else if(g==60)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(23,207,17);
       floodfill(23,207,GREEN);
   }
   else if(g==61)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(69,23,17);
       floodfill(69,23,GREEN);
   }
   else if(g==62)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(69,161,17);
       floodfill(69,161,GREEN);
   }
   else if(g==63)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(23,207,17);
       floodfill(23,207,GREEN);
   }
   else if(g==64)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(161,161,17);
       floodfill(161,161,GREEN);
   }
   else if(g==65)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(207,161,17);
       floodfill(207,161,GREEN);
   }
   else if(g==66)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(391,207,17);
       floodfill(391,207,GREEN);
   }
   else if(g==67)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(299,161,17);
       floodfill(299,161,GREEN);
   }
   else if(g==68)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(345,161,17);
       floodfill(345,161,GREEN);
   }
   else if(g==69)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(391,161,17);
       floodfill(391,161,GREEN);
   }
   else if(g==70)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(437,161,17);
       floodfill(437,161,GREEN);
   }
   else if(g==71)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(437,115,17);
       floodfill(437,115,GREEN);
   }
   else if(g==72)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(437,69,17);
       floodfill(437,69,GREEN);
   }
    else if(g==73)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(345,115,17);
       floodfill(345,115,GREEN);
   }
    else if(g==74)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(299,115,17);
       floodfill(299,115,GREEN);
   }
    else if(g==75)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(253,115,17);
       floodfill(253,115,GREEN);
   }
    else if(g==76)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(207,115,17);
       floodfill(207,115,GREEN);
   }
    else if(g==77)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(161,115,17);
       floodfill(161,115,GREEN);
   }
    else if(g==78)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(115,115,17);
       floodfill(115,115,GREEN);
   }
    else if(g==79)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(69,115,17);
       floodfill(69,115,GREEN);
   }
    else if(g==80)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(23,115,17);
       floodfill(23,115,GREEN);
   }
    else if(g==81)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(23,69,17);
       floodfill(23,69,GREEN);
   }
   else if(g==82)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(69,69,17);
       floodfill(69,69,GREEN);
   }
   else if(g==83)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(115,69,17);
       floodfill(115,69,GREEN);
   }
   else if(g==84)

   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(161,69,17);
       floodfill(161,69,GREEN);
   }
   else if(g==85)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);

       circle(207,69,17);
       floodfill(207,69,GREEN);
   }
   else if(g==86)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(253,69,17);
       floodfill(253,69,GREEN);
   }
   else if(g==87)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(299,69,17);
       floodfill(299,69,GREEN);
   }
   else if(g==88)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(345,69,17);
       floodfill(345,69,GREEN);
   }
   else if(g==89)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(391,69,17);
       floodfill(391,69,GREEN);
   }
   else if(g==90)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(437,69,17);
       floodfill(437,69,GREEN);
   }
   else if(g==91)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(437,23,17);
       floodfill(437,23,GREEN);
   }
   else if(g==92)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(391,23,17);
       floodfill(391,23,GREEN);
   }
   else if(g==93)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(345,23,17);
       floodfill(345,23,GREEN);
   }
   else if(g==94)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(299,23,17);
       floodfill(299,23,GREEN);
   }
   else if(g==95)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(253,23,17);
       floodfill(253,23,GREEN);
   }
   else if(g==96)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(207,23,17);
       floodfill(207,23,GREEN);
   }
   else if(g==97)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(253,115,17);
       floodfill(253,115,GREEN);
   }
   else if(g==98)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(115,23,17);
       floodfill(115,23,GREEN);
   }
   else if(g==99)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(69,23,17);
       floodfill(69,23,GREEN);
   }
   else if(g==100)
   {
       setcolor(GREEN);
       setfillstyle(SOLID_FILL,GREEN);
       circle(23,23,17);
       floodfill(23,23,GREEN);
       exit(0);
   }
   return g;
}
int gati3(int u )
{
static int r=0,s;
   r=r+u;
   s=r;
   if(s>100)
   {
       r=r-u;
   }
    if(r==1)
   {
       setcolor(BLUE);
    setfillstyle(SOLID_FILL,BLUE);
       circle(23,437,17);
       floodfill(23,437,BLUE);

   }
  else if(r==2)
   {
       setcolor(BLUE);
    setfillstyle(SOLID_FILL,BLUE);
       circle(69,437,17);
       floodfill(69,437,BLUE);

   }
    else if(r==3)
   {
       setcolor(BLUE);
    setfillstyle(SOLID_FILL,BLUE);
       circle(69,299,17);
       floodfill(69,299,BLUE);

   }

        else if(r==4)
    {
       setcolor(BLUE);
    setfillstyle(SOLID_FILL,BLUE);
       circle(161,437,17);
       floodfill(161,437,BLUE);

   }
   else if(r==5)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(207,437,17);
       floodfill(207,437,BLUE);
   }
   else if(r==6)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(253,437,17);
       floodfill(253,437,BLUE);
   }
   else if(r==7)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(299,437,17);
       floodfill(299,437,BLUE);
   }
   else if(r==8)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(345,437,17);

       floodfill(342,437,BLUE);
   }
   else if(r==9)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(391,437,17);
       floodfill(391,437,BLUE);
   }
else if(r==10)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(391,391,17);
       floodfill(391,391,BLUE);
   }
   else if(r==11)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(437,391,17);
       floodfill(437,391,BLUE);
   }
   else if(r==12)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(391,391,17);
       floodfill(391,391,BLUE);
   }
   else if(r==13)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(345,391,17);
       floodfill(345,391,BLUE);
   }
   else if(r==14)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(299,391,17);

       floodfill(299,391,BLUE);
   }
   else if(r==15)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(253,391,17);
       floodfill(253,391,BLUE);
   }
   else if(r==16)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(345,391,17);
       floodfill(345,391,BLUE);
   }
   else if(r==17)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(161,391,17);
       floodfill(161,391,BLUE);
   }
   else if(r==18)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(115,391,17);
       floodfill(115,391,BLUE);

   }
   else if(r==19)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(69,391,17);
       floodfill(69,391,BLUE);
   }
   else if(r==20)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(23,391,17);
       floodfill(23,391,BLUE);
   }
   else if(r==21)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(23,345,17);
       floodfill(23,345,BLUE);
   }
   else if(r==22)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(69,345,17);
       floodfill(69,345,BLUE);
   }
   else if(r==23)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(115,345,17);
       floodfill(115,345,BLUE);
   }
   else if(r==24)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(161,345,17);
       floodfill(161,345,BLUE);
   }
   else if(r==25)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(207,345,17);
       floodfill(207,345,BLUE);
   }
   else if(r==26)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(253,345,17);
       floodfill(253,345,BLUE);
   }
   else if(r==27)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(345,207,17);
       floodfill(345,207,BLUE);
   }
   else if(r==28)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(345,345,17);
       floodfill(345,345,BLUE);
   }
   else if(r==29)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(391,345,17);
       floodfill(391,345,BLUE);
   }
   else if(r==30)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(437,345,17);
       floodfill(437,345,BLUE);
   }
   else if(r==31)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(161,437,17);
       floodfill(161,437,BLUE);
   }
   else if(r==32)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(391,299,17);
       floodfill(391,299,BLUE);
   }
   else if(r==33)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(345,299,17);
       floodfill(345,299,BLUE);
   }
   else if(r==34)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(299,299,17);
       floodfill(299,299,BLUE);
   }
   else if(r==35)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(253,299,17);
       floodfill(253,299,BLUE);
   }
   else if(r==36)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(207,299,17);
       floodfill(207,299,BLUE);
   }
   else if(r==37)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(161,299,17);
       floodfill(161,299,BLUE);
   }
   else if(r==38)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(115,299,17);
       floodfill(115,299,BLUE);
   }
   else if(r==39)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(69,299,17);
       floodfill(69,299,BLUE);
   }
   else if(r==40)

   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(23,299,17);
       floodfill(23,299,BLUE);
   }
    else if(r==41)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(23,253,17);
       floodfill(23,253,BLUE);
   }
    else if(r==42)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(69,253,17);
       floodfill(69,253,BLUE);
   }
   else if(r==43)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(115,253,17);
       floodfill(115,253,BLUE);
   }
   else if(r==44)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(161,253,17);
       floodfill(161,253,BLUE);
   }
   else if(r==45)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(207,253,17);
       floodfill(207,253,BLUE);
   }
   else if(r==46)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(253,253,17);
       floodfill(253,253,BLUE);
   }
   else if(r==47)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(207,345,17);
       floodfill(207,345,BLUE);
   }
   else if(r==48)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(345,253,17);
       floodfill(345,253,BLUE);
   }
   else if(r==49)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(391,253,17);
       floodfill(391,253,BLUE);
   }
   else if(r==50)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(437,253,17);
       floodfill(437,253,BLUE);
   }
   else if(r==51)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(437,207,17);
       floodfill(437,207,BLUE);
   }
   else if(r==52)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(391,207,17);
       floodfill(391,207,BLUE);
   }
   else if(r==53)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(345,207,17);
       floodfill(345,207,BLUE);
   }
   else if(r==54)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(299,207,17);
       floodfill(299,207,BLUE);
   }
   else if(r==55)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(253,207,17);
       floodfill(253,207,BLUE);
   }
   else if(r==56)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(161,69,17);
       floodfill(161,269,BLUE);
   }
   else if(r==57)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(161,207,17);
       floodfill(161,207,BLUE);
   }
   else if(r==58)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(115,207,17);
       floodfill(115,207,BLUE);
   }
   else if(r==59)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(69,207,17);
       floodfill(69,207,BLUE);
   }
   else if(r==60)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(23,207,17);
       floodfill(23,207,BLUE);
   }
   else if(r==61)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(69,23,17);
       floodfill(69,23,BLUE);
   }
   else if(r==62)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(69,161,17);
       floodfill(69,161,BLUE);
   }
   else if(r==63)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(23,207,17);
       floodfill(23,207,BLUE);
   }
   else if(r==64)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(161,161,17);
       floodfill(161,161,BLUE);
   }
   else if(r==65)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(207,161,17);
       floodfill(207,161,BLUE);
   }
   else if(r==66)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(391,207,17);
       floodfill(391,207,BLUE);
   }
   else if(r==67)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(299,161,17);
       floodfill(299,161,BLUE);
   }
   else if(r==68)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(345,161,17);
       floodfill(345,161,BLUE);
   }
   else if(r==69)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(391,161,17);
       floodfill(391,161,BLUE);
   }
   else if(r==70)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(437,161,17);
       floodfill(437,161,BLUE);
   }
   else if(r==71)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(437,115,17);
       floodfill(437,115,BLUE);
   }
   else if(r==72)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(437,69,17);
       floodfill(437,69,BLUE);
   }
    else if(r==73)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(345,115,17);
       floodfill(345,115,BLUE);
   }
    else if(r==74)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(299,115,17);
       floodfill(299,115,BLUE);
   }
    else if(r==75)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(253,115,17);
       floodfill(253,115,BLUE);
   }
    else if(r==76)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(207,115,17);
       floodfill(207,115,BLUE);
   }
    else if(r==77)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(161,115,17);
       floodfill(161,115,BLUE);
   }
    else if(r==78)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(115,115,17);
       floodfill(115,115,BLUE);
   }
    else if(r==79)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(69,115,17);
       floodfill(69,115,BLUE);
   }
    else if(r==80)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(23,115,17);
       floodfill(23,115,BLUE);
   }
    else if(r==81)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(23,69,17);
       floodfill(23,69,BLUE);
   }
   else if(r==82)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(69,69,17);
       floodfill(69,69,BLUE);
   }
   else if(r==83)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(115,69,17);
       floodfill(115,69,BLUE);
   }
   else if(r==84)

   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(161,69,17);
       floodfill(161,69,BLUE);
   }
   else if(r==85)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);

       circle(207,69,17);
       floodfill(207,69,BLUE);
   }
   else if(r==86)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(253,69,17);
       floodfill(253,69,BLUE);
   }
   else if(r==87)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(299,69,17);
       floodfill(299,69,BLUE);
   }
   else if(r==88)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(345,69,17);
       floodfill(345,69,BLUE);
   }
   else if(r==89)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(391,69,17);
       floodfill(391,69,BLUE);
   }
   else if(r==90)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(437,69,17);
       floodfill(437,69,BLUE);
   }
   else if(r==91)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(437,23,17);
       floodfill(437,23,BLUE);
   }
   else if(r==92)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(391,23,17);
       floodfill(391,23,BLUE);
   }
   else if(r==93)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(345,23,17);
       floodfill(345,23,BLUE);
   }
   else if(r==94)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(299,23,17);
       floodfill(299,23,BLUE);
   }
   else if(r==95)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(253,23,17);
       floodfill(253,23,BLUE);
   }
   else if(r==96)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(207,23,17);
       floodfill(207,23,BLUE);
   }
   else if(r==97)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(253,115,17);
       floodfill(253,115,BLUE);
   }
   else if(r==98)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(115,23,17);
       floodfill(115,23,BLUE);
   }
   else if(r==99)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(69,23,17);
       floodfill(69,23,BLUE);
   }
   else if(r==100)
   {
       setcolor(BLUE);
       setfillstyle(SOLID_FILL,BLUE);
       circle(23,23,17);
       floodfill(23,23,BLUE);
       exit(0);
   }
   return r;
}
int gati4(int y)
{

   static int w=0,x;
   w=w+y;
   x=w;
   if(x>100)
   {
       w=w-y;
   }
   if(w==1)
   {
       setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
       circle(23,437,17);
       floodfill(23,437,BLACK);

   }
  else if(w==2)
   {
       setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
       circle(69,437,17);
       floodfill(69,437,BLACK);

   }
    else if(w==3)
   {
       setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
       circle(69,299,17);
       floodfill(69,299,BLACK);

   }

        else if(w==4)
    {
       setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
       circle(161,437,17);
       floodfill(161,437,BLACK);

   }
   else if(w==5)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(207,437,17);
       floodfill(207,437,BLACK);
   }
   else if(w==6)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(253,437,17);
       floodfill(253,437,BLACK);
   }
   else if(w==7)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(299,437,17);
       floodfill(299,437,BLACK);
   }
   else if(w==8)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(345,437,17);

       floodfill(342,437,BLACK);
   }
   else if(w==9)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(391,437,17);
       floodfill(391,437,BLACK);
   }
else if(w==10)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(391,391,17);
       floodfill(391,391,BLACK);
   }
   else if(w==11)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(437,391,17);
       floodfill(437,391,BLACK);
   }
   else if(w==12)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(391,391,17);
       floodfill(391,391,BLACK);
   }
   else if(w==13)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(345,391,17);
       floodfill(345,391,BLACK);
   }
   else if(w==14)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(299,391,17);

       floodfill(299,391,BLACK);
   }
   else if(w==15)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(253,391,17);
       floodfill(253,391,BLACK);
   }
   else if(w==16)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(345,391,17);
       floodfill(345,391,BLACK);
   }
   else if(w==17)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(161,391,17);
       floodfill(161,391,BLACK);
   }
   else if(w==18)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(115,391,17);
       floodfill(115,391,BLACK);

   }
   else if(w==19)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(69,391,17);
       floodfill(69,391,BLACK);
   }
   else if(w==20)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(23,391,17);
       floodfill(23,391,BLACK);
   }
   else if(w==21)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(23,345,17);
       floodfill(23,345,BLACK);
   }
   else if(w==22)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(69,345,17);
       floodfill(69,345,BLACK);
   }
   else if(w==23)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(115,345,17);
       floodfill(115,345,BLACK);
   }
   else if(w==24)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(161,345,17);
       floodfill(161,345,BLACK);
   }
   else if(w==25)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(207,345,17);
       floodfill(207,345,BLACK);
   }
   else if(w==26)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(253,345,17);
       floodfill(253,345,BLACK);
   }
   else if(w==27)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(345,207,17);
       floodfill(345,207,BLACK);
   }
   else if(w==28)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(345,345,17);
       floodfill(345,345,BLACK);
   }
   else if(w==29)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(391,345,17);
       floodfill(391,345,BLACK);
   }
   else if(w==30)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(437,345,17);
       floodfill(437,345,BLACK);
   }
   else if(w==31)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(161,437,17);
       floodfill(161,437,BLACK);
   }
   else if(w==32)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(391,299,17);
       floodfill(391,299,BLACK);
   }
   else if(w==33)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(345,299,17);
       floodfill(345,299,BLACK);
   }
   else if(w==34)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(299,299,17);
       floodfill(299,299,BLACK);
   }
   else if(w==35)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(253,299,17);
       floodfill(253,299,BLACK);
   }
   else if(w==36)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(207,299,17);
       floodfill(207,299,BLACK);
   }
   else if(w==37)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(161,299,17);
       floodfill(161,299,BLACK);
   }
   else if(w==38)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(115,299,17);
       floodfill(115,299,BLACK);
   }
   else if(w==39)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(69,299,17);
       floodfill(69,299,BLACK);
   }
   else if(w==40)

   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(23,299,17);
       floodfill(23,299,BLACK);
   }
    else if(w==41)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(23,253,17);
       floodfill(23,253,BLACK);
   }
    else if(w==42)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(69,253,17);
       floodfill(69,253,BLACK);
   }
   else if(w==43)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(115,253,17);
       floodfill(115,253,BLACK);
   }
   else if(w==44)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(161,253,17);
       floodfill(161,253,BLACK);
   }
   else if(w==45)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(207,253,17);
       floodfill(207,253,BLACK);
   }
   else if(w==46)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(253,253,17);
       floodfill(253,253,BLACK);
   }
   else if(w==47)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(207,345,17);
       floodfill(207,345,BLACK);
   }
   else if(w==48)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(345,253,17);
       floodfill(345,253,BLACK);
   }
   else if(w==49)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(391,253,17);
       floodfill(391,253,BLACK);
   }
   else if(w==50)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(437,253,17);
       floodfill(437,253,BLACK);
   }
   else if(w==51)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(437,207,17);
       floodfill(437,207,BLACK);
   }
   else if(w==52)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(391,207,17);
       floodfill(391,207,BLACK);
   }
   else if(w==53)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(345,207,17);
       floodfill(345,207,BLACK);
   }
   else if(w==54)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(299,207,17);
       floodfill(299,207,BLACK);
   }
   else if(w==55)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(253,207,17);
       floodfill(253,207,BLACK);
   }
   else if(w==56)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(161,69,17);
       floodfill(161,269,BLACK);
   }
   else if(w==57)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(161,207,17);
       floodfill(161,207,BLACK);
   }
   else if(w==58)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(115,207,17);
       floodfill(115,207,BLACK);
   }
   else if(w==59)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(69,207,17);
       floodfill(69,207,BLACK);
   }
   else if(w==60)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(23,207,17);
       floodfill(23,207,BLACK);
   }
   else if(w==61)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(69,23,17);
       floodfill(69,23,BLACK);
   }
   else if(w==62)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(69,161,17);
       floodfill(69,161,BLACK);
   }
   else if(w==63)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(23,207,17);
       floodfill(23,207,BLACK);
   }
   else if(w==64)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(161,161,17);
       floodfill(161,161,BLACK);
   }
   else if(w==65)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(207,161,17);
       floodfill(207,161,BLACK);
   }
   else if(w==66)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(391,207,17);
       floodfill(391,207,BLACK);
   }
   else if(w==67)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(299,161,17);
       floodfill(299,161,BLACK);
   }
   else if(w==68)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(345,161,17);
       floodfill(345,161,BLACK);
   }
   else if(w==69)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(391,161,17);
       floodfill(391,161,BLACK);
   }
   else if(w==70)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(437,161,17);
       floodfill(437,161,BLACK);
   }
   else if(w==71)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(437,115,17);
       floodfill(437,115,BLACK);
   }
   else if(w==72)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(437,69,17);
       floodfill(437,69,BLACK);
   }
    else if(w==73)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(345,115,17);
       floodfill(345,115,BLACK);
   }
    else if(w==74)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(299,115,17);
       floodfill(299,115,BLACK);
   }
    else if(w==75)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(253,115,17);
       floodfill(253,115,BLACK);
   }
    else if(w==76)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(207,115,17);
       floodfill(207,115,BLACK);
   }
    else if(w==77)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(161,115,17);
       floodfill(161,115,BLACK);
   }
    else if(w==78)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(115,115,17);
       floodfill(115,115,BLACK);
   }
    else if(w==79)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(69,115,17);
       floodfill(69,115,BLACK);
   }
    else if(w==80)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(23,115,17);
       floodfill(23,115,BLACK);
   }
    else if(w==81)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(23,69,17);
       floodfill(23,69,BLACK);
   }
   else if(w==82)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(69,69,17);
       floodfill(69,69,BLACK);
   }
   else if(w==83)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(115,69,17);
       floodfill(115,69,BLACK);
   }
   else if(w==84)

   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(161,69,17);
       floodfill(161,69,BLACK);
   }
   else if(w==85)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);

       circle(207,69,17);
       floodfill(207,69,BLACK);
   }
   else if(w==86)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(253,69,17);
       floodfill(253,69,BLACK);
   }
   else if(w==87)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(299,69,17);
       floodfill(299,69,BLACK);
   }
   else if(w==88)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(345,69,17);
       floodfill(345,69,BLACK);
   }
   else if(w==89)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(391,69,17);
       floodfill(391,69,BLACK);
   }
   else if(w==90)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(437,69,17);
       floodfill(437,69,BLACK);
   }
   else if(w==91)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(437,23,17);
       floodfill(437,23,BLACK);
   }
   else if(w==92)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(391,23,17);
       floodfill(391,23,BLACK);
   }
   else if(w==93)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(345,23,17);
       floodfill(345,23,BLACK);
   }
   else if(w==94)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(299,23,17);
       floodfill(299,23,BLACK);
   }
   else if(w==95)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(253,23,17);
       floodfill(253,23,BLACK);
   }
   else if(w==96)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(207,23,17);
       floodfill(207,23,BLACK);
   }
   else if(w==97)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(253,115,17);
       floodfill(253,115,BLACK);
   }
   else if(w==98)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(115,23,17);
       floodfill(115,23,BLACK);
   }
   else if(w==99)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(69,23,17);
       floodfill(69,23,BLACK);
   }
   else if(w==100)
   {
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(23,23,17);
       floodfill(23,23,BLACK);
       exit(0);
   }
   return w;
}


void menu()
{
    char a;
    int d=0;
     PlaySoundA(TEXT("E:\\loading.wav"), NULL, SND_ASYNC);

       delay(1000);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(25,230,"PROJECT BY:-");
           delay(1000);
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,450,"->  Saphal Subedi");
           delay(1000);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"Press any key to start the game");
    getch();

}
int main()
{
int gd=DETECT,gm,i,malinga,messi=1,dad,mom,dd,bhai,cricketer,footballer;
initgraph(&gd,&gm,"");
menu();

cleardevice();
 menu1();



          for(i=0;i<100;i++)
          {
              cleardevice();
              readimagefile("E:\\saw.jpg",-10,-10,466,466);
          malinga=randomfun();
           PlaySoundA(TEXT("E:\\hacker.wav"), NULL, SND_ASYNC);
           cricketer=malinga;

if(messi==1)
{
    dicered(malinga);
}
else if(messi==2)
{
   dicegreen(malinga);
}
else if(messi==3)
{
   diceblue(malinga);
}
else
{
  diceblack(malinga);
}


           if(messi==1)
           {

          dad=gati(malinga);
         
           mom=gati2(0);
           dd=gati3(0);
           bhai=gati4(0);

           }
            else if(messi==2)
           {

          dad=gati(0);
           mom=gati2(malinga);
           dd=gati3(0);
           bhai=gati4(0);

           }
            else if(messi==3)
           {

          dad=gati(0);
           mom=gati2(0);
           dd=gati3(malinga);
           bhai=gati4(0);

           }
           else
           {
               dad=gati(0);
           mom=gati2(0);
           dd=gati3(0);
           bhai=gati4(malinga);

           }
           if(messi==1)
           {



               if(dad==mom)
               {
                   cleardevice();
              readimagefile("E:\\saw.jpg",-10,-10,466,466);
              dicered(cricketer);
              dad=gati(0);
              mom=gati2(-1);
              dd=gati3(0);
              bhai=gati4(0);
               }
               if(dad==dd)
               {
                    cleardevice();
              readimagefile("E:\\saw.jpg",-10,-10,466,466);
              dicered(cricketer);
              dad=gati(0);
              mom=gati2(0);
              dd=gati3(-1);
              bhai=gati4(0);

               }
               if(dad==bhai)
               {
                    cleardevice();
              readimagefile("E:\\saw.jpg",-10,-10,466,466);
              dicered(cricketer);
              dad=gati(0);
              mom=gati2(0);
              dd=gati3(0);
              bhai=gati4(-1);

               }


           }
           else if(messi==2)
           {

               if(mom==dad)
               {
                     cleardevice();
              readimagefile("E:\\saw.jpg",-10,-10,466,466);
              dicegreen(cricketer);
              dad=gati(-1);
              mom=gati2(0);
              dd=gati3(0);
              bhai=gati4(0);
               }
                if(mom==dd)
               {
                     cleardevice();
              readimagefile("E:\\saw.jpg",-10,-10,466,466);
              dicegreen(cricketer);
              dad=gati(0);
              mom=gati2(0);
              dd=gati3(-1);
              bhai=gati4(0);
               }
                if(mom==bhai)
               {
                     cleardevice();
              readimagefile("E:\\saw.jpg",-10,-10,466,466);
              dicegreen(cricketer);
              dad=gati(0);
              mom=gati2(0);
              dd=gati3(0);
              bhai=gati4(-1);
               }

         }
               else if(messi==3)
               {


              if(dd==dad)
              {
                  cleardevice();
              readimagefile("E:\\saw.jpg",-10,-10,466,466);
              diceblue(cricketer);
                  dad=gati(-1);
                  mom=gati2(0);
                  dd=gati3(0);
                  bhai=gati4(0);

              }
              if(dd==mom)
              {
                  cleardevice();
              readimagefile("E:\\saw.jpg",-10,-10,466,466);
              diceblue(cricketer);
                  dad=gati(0);
                  mom=gati2(-1);
                  dd=gati3(0);
                  bhai=gati4(0);

              }
              if(dd==bhai)
              {
                  cleardevice();
              readimagefile("E:\\saw.jpg",-10,-10,466,466);
              diceblue(cricketer);
                  dad=gati(0);
                  mom=gati2(0);
                  dd=gati3(0);
                  bhai=gati4(-1);

              }


               }
               else
               {
                   if(bhai==dad)
                   {
                       cleardevice();
              readimagefile("E:\\saw.jpg",-10,-10,466,466);
              diceblack(cricketer);
               dad=gati(-1);
                  mom=gati2(0);
                  dd=gati3(0);
                  bhai=gati4(0);


                   }
                    if(bhai==mom)
                   {
                       cleardevice();
              readimagefile("E:\\saw.jpg",-10,-10,466,466);
              diceblack(cricketer);
               dad=gati(0);
                  mom=gati2(-1);
                  dd=gati3(0);
                  bhai=gati4(0);


                   }
                    if(bhai==dd)
                   {
                       cleardevice();
              readimagefile("E:\\saw.jpg",-10,-10,466,466);
              diceblack(cricketer);
               dad=gati(0);
                  mom=gati2(0);
                  dd=gati3(-1);
                  bhai=gati4(0);


                   }


               }





messi=messi+1;
if(messi>4)
{
    messi=1;
}
           getch();
          }




return 0;
}

