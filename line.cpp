

#include <conio.h>
#include  <math.h>

 void show_screen( );

 void Thick_line(const int,const int,const int,const int,const int=0);


 int main( )
    {
       int driver=VGA;
       int mode=VGAHI;

       initgraph(&driver,&mode,"..\\Bgi");

       show_screen( );

       setcolor(15);
     Thick_line(150,100,540,100,0);
     Thick_line(150,175,540,175,1);
     Thick_line(150,250,540,250,2);
     Thick_line(150,325,540,325,3);
     Thick_line(150,400,540,400,4);

       char Style[5][15]={"Style # 1","Style # 2","Style # 3",
              "Style # 4","Style # 5"};

       for(int count=0;count<5;count++)
      outtextxy(60,(97+(75*count)),Style[count]);

       getch( );

       return 0;
    }

 /*************************************************************************///----------------------------  Thick_line( )  --------------------------///*************************************************************************/void Thick_line(constint x_1,constint y_1,constint x_2,
                      constint y_2,constint line_type)
    {
       int color=getcolor( );

       int x1=x_1;
       int y1=y_1;

       int x2=x_2;
       int y2=y_2;

       if(x_1>x_2)
      {
         x1=x_2;
         y1=y_2;

         x2=x_1;
         y2=y_1;
      }

       int dx=abs(x2-x1);
       int dy=abs(y2-y1);
       int inc_dec=((y2>=y1)?1:-1);

       if(dx>dy)
      {
         int two_dy=(2*dy);
         int two_dy_dx=(2*(dy-dx));
         int p=((2*dy)-dx);

         int x=x1;
         int y=y1;

         while(x<=x2)
        {
           if(line_type==0)
              putpixel(x,y,color);

           elseif(line_type==1)
              {
             putpixel(x,y,color);
             putpixel(x,(y+1),color);
              }

           elseif(line_type==2)
              {
             putpixel(x,y,color);
             putpixel(x,(y+1),color);
             putpixel(x,(y+2),color);
              }

           elseif(line_type==3)
              {
             putpixel(x,y,color);
             putpixel(x,(y+1),color);
             putpixel(x,(y+2),color);
             putpixel(x,(y+3),color);
              }

           elseif(line_type==4)
              {
             putpixel(x,y,color);
             putpixel(x,(y+1),color);
             putpixel(x,(y+2),color);
             putpixel(x,(y+3),color);
             putpixel(x,(y+4),color);
              }

           x++;

           if(p<0)
              p+=two_dy;

           else
              {
             y+=inc_dec;
             p+=two_dy_dx;
              }
        }
      }

       else
      {
         int two_dx=(2*dx);
         int two_dx_dy=(2*(dx-dy));
         int p=((2*dx)-dy);

         int x=x1;
         int y=y1;

         while(y!=y2)
        {
           if(line_type==0)
              putpixel(x,y,color);

           elseif(line_type==1)
              {
             putpixel(x,y,color);
             putpixel(x,(y+1),color);
              }

           elseif(line_type==2)
              {
             putpixel(x,y,color);
             putpixel(x,(y+1),color);
             putpixel(x,(y+2),color);
              }

           elseif(line_type==3)
              {
             putpixel(x,y,color);
             putpixel(x,(y+1),color);
             putpixel(x,(y+2),color);
             putpixel(x,(y+3),color);
              }

           elseif(line_type==4)
              {
             putpixel(x,y,color);
             putpixel(x,(y+1),color);
             putpixel(x,(y+2),color);
             putpixel(x,(y+3),color);
             putpixel(x,(y+4),color);
              }

           y+=inc_dec;

           if(p<0)
              p+=two_dx;

           else
              {
             x++;
             p+=two_dx_dy;
              }
        }
      }
    }

 /*************************************************************************///--------------------------  show_screen( )  ---------------------------///*************************************************************************/void show_screen( )
    {
       setfillstyle(1,1);
     bar(256,27,365,37);

       settextstyle(0,0,1);
     setcolor(15);
       outtextxy(5,5,"******************************************************************************");
       outtextxy(5,17,"*-**************************************************************************-*");
       outtextxy(5,29,"*-----------------------------                -------------------------------*");
       outtextxy(5,41,"*-**************************************************************************-*");
       outtextxy(5,53,"*-**************************************************************************-*");

     setcolor(11);
       outtextxy(265,29,"Thick Lines");

     setcolor(15);

       for(int count=0;count<=30;count++)
          outtextxy(5,(65+(count*12)),"*-*                                                                        *-*");

       outtextxy(5,438,"*-**************************************************************************-*");
       outtextxy(5,450,"*-------------------------                          -------------------------*");
       outtextxy(5,462,"******************************************************************************");

     setcolor(12);
       outtextxy(229,450,"Press any Key to exit.");
    }

