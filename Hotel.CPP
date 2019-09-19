#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
#include<iostream.h>

class rest
{
int s;
public:
rest()
{
s=0;
cout<<"\n\n\n...................welcome to pizza mania...............";
}
void garlic()
{
int c,d,g[5];
g[0]=50;g[1]=70;g[2]=80;g[3]=90;g[4]=110;
cout<<"\n-->[1].CHEESE....                  Rs.50/-";
cout<<"\n-->[2].CHILLI CHEESE....           Rs.70/-";
cout<<"\n-->[3].SPICY CHEESE....            Rs.80/-";
cout<<"\n-->[4].GARLIC BREAD STIX....       Rs.90/-";
cout<<"\n-->[5].CHEESY GARLIC BREAD STIX....Rs.110/-";
cout<<"\n\n###enter your choice & no. of dish..";
cin>>c>>d;
s=s+(g[c-1]*d);
}
void sauteed()
{
 int c,d,sa[5];
 sa[0]=200;sa[1]=220;sa[2]=300;sa[3]=330;sa[4]=180;
 cout<<"\n-->[1].SPANISH TOMATO....                     Rs.200/-";
 cout<<"\n-->[2].CHEESY ALFREDO....                     Rs.220/-";
 cout<<"\n-->[3].GARLIC BUTTER CHRIMP PASTA...          Rs.300/-";
 cout<<"\n-->[4].GARLIC OIL SAUTEED PASTA....           Rs.330/-";
 cout<<"\n-->[5].PASTA WITH SAUTEED SPINACH  GARLIC ....Rs.180/-";
 cout<<"\n\n###enter your choice & no. of dish...:-";
 cin>>c>>d;
 s=s+(sa[c-1]*d);
 }
 void veg()
 {
 int c,d,v[5];
 v[0]=350;v[1]=320;v[2]=270;v[3]=300;v[4]=310;
 cout<<"\n-->[1].DOUBLE CHEESE MARGHERITA....    Rs.350/-";
 cout<<"\n-->[2].MEXICAN GREEN WAVE....          Rs.320/-";
 cout<<"\n-->[3].COUNTRY SPECIAL PIZZA....       Rs.270/-";
 cout<<"\n-->[4].PEPPY PANEER PIZZA....          Rs.300/-";
 cout<<"\n-->[5].DELUXE VEG>PIZZA....            Rs.310/-";
 cout<<"\n\n###enter your choice & no. of dish...:-";
 cin>>c>>d;
 s=s+(v[c-1]*d);
 }
 void nonveg()
 {
 int c,d,n[5];
 n[0]=320;n[1]=360;n[2]=300;n[3]=270;n[4]=290;
 cout<<"\n-->[1].SPICY CHICKEN....            Rs.320/-";
 cout<<"\n-->[2].CHICKEN MEXICANA....         Rs.360/-";
 cout<<"\n-->[3].CHICKEN FIESTA....           Rs.300/-";
 cout<<"\n-->[4].CHICKEN GOLDEN DELIGHT....   Rs.270/-";
 cout<<"\n-->[5].ZESTY CHICKEN....            Rs.290/-";
 cout<<"\n\n###enter your choice & no. of dish...:-";
 cin>>c>>d;
 s=s+(n[c-1]*d);
}
void cold()
{
int c,d,co[5];
co[0]=70;co[1]=50;co[2]=80;co[3]=90;co[4]=100;
 cout<<"\n-->[1].HOT CHOCOLATE FLOATS....      Rs.70/-";
 cout<<"\n-->[2].COFFEE....                    Rs.50/-";
 cout<<"\n-->[3].CHOCOLATE MAICENA....         Rs.80/-";
 cout<<"\n-->[4].VANILA & CHOCOLATE SPECIAL....Rs.90/-";
 cout<<"\n-->[5].MILK-SHAKE....                Rs.100/-";
 cout<<"\n\n###enter your choice & no. of dish...:-";
 cin>>c>>d;
 s=s+(co[c-1]*d);
 }
 int bill()
 { return s;
 }
 };
 void main()
 {
 int ch;
 rest r1;
 clrscr();
 while(ch!=6)
 {
 clrscr();
 cout<<"\n\n\n***************************WELCOME TO PIZZA MANIA****************************\n\n\n";
 cout<<"\n-->[1].GARLIC BREADS...";
 cout<<"\n-->[2].SAUTEED PASTAS...";
 cout<<"\n-->[3].VEG.PIZZA...";
 cout<<"\n-->[4].NON.VEG PIZZA...";
 cout<<"\n-->[5].COLD DRINKS & DESSERTS...";
 cout<<"\n-->[6].TAKE YOUR BILL...";
 cout<<"\n\n ****chose your favourite resipy :-";
 cin>>ch;

int gd=DETECT,gm,i;
initgraph(&gd,&gm,"..//bgi");
setcolor(YELLOW);
 for(i=0;i<10;i++)
{
settextstyle(7,0,8);

outtextxy(490,50,"*PM* ");
}
 switch(ch)
 {
 case 1:r1.garlic();
	break;
 case 2:r1.sauteed();
	break;
 case 3:r1.veg();
	break;
 case 4:r1.nonveg();
	break;
 case 5: r1.cold();
	break;

 }
 getch();
 }
 int n=r1.bill();
 cout<<"\n YOUR BILL AMOUNT IS..."<<n<<"/-";
 cout<<"\n.................THANK YOU................";
 cout<<"\n..............HAVE A NICE DAY.............";

 getch();
 }