#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#define pi 3.141926


void main()
{
clrscr();                     //menu driven program
			      //switch cases ,for loop ,if statements
int driver= DETECT,mode;      //do while loop included
initgraph(&driver,&mode,"c:\\turboc3\\bgi");
int cc,ans;
setbkcolor(LIGHTBLUE);
cout<<"\t\n================================================================";
cout<<"\t\n||Welcome to PRATIK'S CreaTiON                                ||";
cout<<"\t\n================================================================";
cout<<"\t\n||Do you Wanna see BASIC PROGRAMMING(0) or PRO PROGRAMMING(1) ||";
cout<<"\t\n================================================================\n";

cin>>cc;
cleardevice();
  {if(cc==0)
  {
     int choice;
     cout<<"\n1.Pixel \n\n2.Line \n\n3.Circle \n\n4.Rectangle \n\n5.Square \n\n6. Triangle \n\n7.Magic OF colors";
     cout<<"\n\nSo, whats uR choice ?? \t";
     cin>>choice;
cleardevice();

switch(choice)
{
case 1:
	   {
	   int m,n;
	   cout<<"enter preferred x,y coordinates for PIXEL";
	   cin>>m>>n;
cleardevice();
	  putpixel(m,n,100);
break;
}

case 2:
	  {
	   int m,n,o,p,ch;
	  cout<<" \n\n1.Would you like to draw  a line \n\n 2.Should i do it for you";
	  cin>>ch;
	  setcolor(GREEN);

if(ch==1)
{
cout<<"put initial and final (x,y) coordinates";
cin>>m>>n>>o>>p;
cleardevice();

	  line(m,n,o,p);

}
else
cleardevice();
	  line(100,200,200,100);
}

case 3:
	  {
	  int m,n,o,ch;
cout<<" 1.\n\nIf you want to make a circle \n\n 2.Should i do it for you";
	  cin>>ch;
	  setcolor(GREEN);
if(ch==1)
{
cout<<"\nput (x,y) coordinates";
cin>>m>>n;
cout<<"\n\n\nput RADIUS";
cin>>o;
cleardevice();

	  circle(m,n,o);

}
else
cleardevice();
	  circle(100,100,100);
	  getch();
break;

case 4:
{
int m,n,o,p,ch;
cout<<" \n1.If you want to make a rectangle \n\n 2.Or should i do it for you";

	  cin>>ch;
setcolor(BROWN);
if(ch==1)
{
	  cout<<"\nput coordinative position  for all four vertices";
	  cin>>m>>n>>o>>p;
cleardevice();
	  rectangle(m,n,o,p);
}
else
       cleardevice();
       rectangle(100,400,500,203);
break;
case 5:
       {
       cleardevice();
       rectangle(100,200,300,400);
break;
	}

case 6:
       {
       setcolor(BROWN);
       int x1,x2,x3,y1,y2,ch;
cout<<" \n1.Wanna make an triangle \n\n 2.Should i do it for you";
	  cin>>ch;
	  setcolor(GREEN);
if(ch==1)
{
	 cout<<"\nput x1,x2,x3,y1,y2 coordinate";
	 cin>>x1>>x2>>x3>>y1>>y2;

cleardevice();
}
 else
 {
       x1=100;x2=300;x3=400;y1=90;y2=400;
       cleardevice();
       cout<<"\n\nyou can't do that!! \nlet me do it for you.  ";

       line(x1,y1,x2,y1);
       line(x1,y1,x3,y2);
       line(x3,y2,x2,y1);
    break;	}

    case 7:
    for(int i=0;i<=10;i++)
{setbkcolor(RED+i)   ;
getch();}
break;
       }
}
}

}
}
else
{if(cc==1)
 {
cout<<"\n***********************************************";
cout<<"\n*OhK!! Now U Are at the Verge OF my Cre@Tion*";
cout<<"\n***********************************************";

cout<<"\nU would require some knowledge before MOving on\n";
cout<<"\n\n 1.Rotation of axis \n\n 2. REFLECTION of Triangle\n";
int choice;
cin>>choice;
cleardevice();
switch(choice)
{
case 1:
{
cout<<"\nbefore proceeding you would require some KNOWLEDGE";
cout<<"\n ^^^^^^^^^^^^^^^^^^^^^^^^";
cout<<"\n|| CONCEPT OF ROTATION || ";
cout<<"\n ^^^^^^^^^^^^^^^^^^^^^^^^" ;
cleardevice();
cout<<" \nAs we know in the below graph.\n We will focus on the blue line,\n let the length of blue line be 'r' \n since, after resolution of the line \t x=r*cos@ \t y=r*sin@ \n when the axis is rotated by an angle '$',\nproducing the new coordinates to be x2 and y2 \n since, x2= r*cos(@+$)\n= rcos@*cos$ + rsin@*sin$ \nx2= (x-x1)cos$-(y-y1)sin$ \n y2=r*sin(@+$) \n=rsin@*sin$ + rcos@*sin$\n y2=(y-y1)cos@+(x-x1)sin$  "   ;
line(0,0,0,200);
line(0,0,200,0);
{setcolor(BLUE);
line(0,0,200,200);}
getch();
cleardevice();
int x,y,x1,y1;
cout<<"\nenter initial and end x,y coordinates of line";
cin>>x>>y>>x1>>y1;
double a,x2,y2;
line(x,y,x1,y1);
cout<<"\nenter angle of rotation";
cin>>a;
a=a*pi/180;
x2=x+(x1-x)*cos(a)-(y1-y)*sin(a);
y2=y+(y1-y)*cos(a)+(x1-x)*sin(a);
line(x,y,x2,y2);
getch();
break;

case 2:
{
cout<<"\nREFLECTION of Triangle";
cout<<"\nIn this the triangle will be reflcted along the X axis";
int x,y,x1,y1,x2,y2;
cleardevice();
cout<<"\nenter the initial coordinates of triangle";

cin>>x>>y>>x1>>y1>>x2>>y2;
line(x,y,x1,y1);
line(x,y,x2,y2);
line(x1,y1,x2,y2);

cout<<"\n reflection of triangle ";
line(x,-y+200,x1,-y1+200);
line(x,-y+200,x2,-y2+200);
line(x1,-y1+200,x2,-y2+200);

break;
}



}

}

}
}
}
getch();
}












