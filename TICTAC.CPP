 #include<graphics.h>
#include<dos.h>
#include<string.h>
#include<iostream.h>
//#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char q[9]={'1','2','3','4','5','6','7','8','9'};
static int t=0;
int ch=0;
int win();
void chance();
void firsttake();
void sectake();
void thrtake();
void fourtake();
void main()
{
int p2=0;int a,b,i,c; int p1=0;
char w;
int m;
int gd=DETECT,gm;
initgraph(&gd,&gm,"..//bgi");
setcolor(YELLOW);
 for(i=0;i<10;i++)
{
//circle(300,200,80);
setfillstyle(WIDE_DOT_FILL,YELLOW);
floodfill(600,400,YELLOW);
settextstyle(6,0,6);
outtextxy(180,50,"-: WELCOME :-");
settextstyle(6,0,8);
/*outtextxy(150,100,"   TO  THE");
settextstyle(7,0,8); */
setcolor(MAGENTA);
outtextxy(120,150,"TIC TAC ");
settextstyle(7,0,8);
outtextxy(150,250,"TOE GAME ");
setcolor(GREEN);
settextstyle(4,0,7);
outtextxy(40,380,"BY KIRTAN ");
delay(100);
}
//clrscr();
cleardevice();
while(p1!=1 ||p2!=1 ||t!=10 )
{
   // if(m==0 &&l==0)
       setcolor(MAGENTA);
 /*	cout<<"\n 1 || 2 || 3";
	cout<<"\n---||---||---";
	cout<<"\n 4 || 5 || 6";
	cout<<"\n---||---||---";
	cout<<"\n 7 || 8 || 9"; */
      //	cleardevice();
	cout<<"\n  "<<q[0]<<"||  "<<q[1]<<"||  "<<q[2];

	cout<<"\n---||---||---";

	cout<<"\n  "<<q[3]<<"||  "<<q[4]<<"||  "<<q[5];
	cout<<"\n---||---||---";
	cout<<"\n  "<<q[6]<<"||  "<<q[7]<<"||  "<<q[8];
	k1:
	cout<<"\nchance of player 1:-";
	cin>>m;
	if(m>=1 &&m<=9)
	 {
	for(i=0;i<9;i++)
	{
	   if(m==(i+1))
	   {
	      q[i]='x';
	   }
	}
	 t++;
	}
	else
	{
	cout<<"re-enter please:";
	goto k1;
	}
	 if((q[0]=='x' || q[0]=='o') && (q[1]=='x' || q[1]=='o') && (q[2]=='x' || q[2]=='o') &&(q[3]=='x' || q[3]=='o') && (q[4]=='x' || q[4]=='o') &&(q[5]=='x' || q[5]=='o') &&(q[6]=='x' || q[6]=='o') &&(q[7]=='x' || q[7]=='o') && (q[8]=='x' || q[8]=='o'))
       {cout<<"\n\n ............GAME DRAW.............";
	delay(1000);
	exit(0); }

	p1=win();
	if(p1==1)
	{
	cout<<"\n  "<<q[0]<<"||  "<<q[1]<<"||  "<<q[2];

	cout<<"\n---||---||---";

	cout<<"\n  "<<q[3]<<"||  "<<q[4]<<"||  "<<q[5];
	cout<<"\n---||---||---";
	cout<<"\n  "<<q[6]<<"||  "<<q[7]<<"||  "<<q[8];
	cout<<"\nplayer 1 is win::";
	 break;
	}


	cout<<"\n  "<<q[0]<<"||  "<<q[1]<<"||  "<<q[2];

	cout<<"\n---||---||---";

	cout<<"\n  "<<q[3]<<"||  "<<q[4]<<"||  "<<q[5];
	cout<<"\n---||---||---";
	cout<<"\n  "<<q[6]<<"||  "<<q[7]<<"||  "<<q[8];
     /////// p2=win();
       cout<<"\n\n ....chance of computer....\n";
      ch++;	chance();t++;
       if((q[0]=='x' || q[0]=='o') && (q[1]=='x' || q[1]=='o') && (q[2]=='x' || q[2]=='o') &&(q[3]=='x' || q[3]=='o') && (q[4]=='x' || q[4]=='o') &&(q[5]=='x' || q[5]=='o') &&(q[6]=='x' || q[6]=='o') &&(q[7]=='x' || q[7]=='o') && (q[8]=='x' || q[8]=='o'))
       { cout<<"\n\n ...............GAME DRAW...........";
       delay(500);
       exit(0); }
	p2=win();

	if(p2==1)
	{
	cout<<"\n  "<<q[0]<<"||  "<<q[1]<<"||  "<<q[2];
	cout<<"\n---||---||---";
	cout<<"\n  "<<q[3]<<"||  "<<q[4]<<"||  "<<q[5];
	cout<<"\n---||---||---";
	cout<<"\n  "<<q[6]<<"||  "<<q[7]<<"||  "<<q[8];
	cout<<"\ncomputer is win::";
	break;
	}
   if(t==9)
   {
   cout<<"\nmatch is draw::";
   cout<<"\nthank you  ";
   }}
   getch();
}
   int win()
   {
       if((q[0]==q[1])&&(q[1]==q[2]))
       {
	 return 1;
       }
	if((q[3]==q[4])&&(q[4]==q[5]))
       {
	 return 1;
       }
	if((q[6]==q[7])&&(q[7]==q[8]))
       {
	 return 1;
       }
	if((q[0]==q[3])&&(q[3]==q[6]))
       {
	 return 1;
       }
	if((q[1]==q[4])&&(q[4]==q[7]))
       {
	 return 1;
       }
	if((q[2]==q[5])&&(q[5]==q[8]))
       {
	 return 1;
       }
	if((q[0]==q[4])&&(q[4]==q[8]))
       {
	 return 1;
       }
	if((q[2]==q[4])&&(q[4]==q[6]))
       {
	 return 1;
       }
   }
  void chance()
  {
     if(ch==1)
     {
      firsttake();
      }
      if(ch==2)
      {
      sectake();
      }
      if(ch==3)
      {
      thrtake();
      }
      if(ch==4)
      {
      fourtake();
      }  }
  void firsttake()
  {
    if(q[4]!='x')
    {	q[4]='o';    }
    else
    {	q[0]='o';    }
  }
  void sectake()
  {
  int f=0;
     if(q[4]=='o')
     {
	 if(q[6]=='x' && q[3]=='x')
	 {
	  q[0]='o';
	  f=1;
	 }
	else if(q[0]=='x' && q[3]=='x')
	 {
	  q[6]='o';
	  f=1;
	 }
	else if(q[6]=='x' && q[0]=='x')
	 {
	  q[3]='o';
	  f=1;
	 }
	else if(q[6]=='x' && q[7]=='x')
	 {
	  q[8]='o';
	  f=1;
	 }
	else if(q[6]=='x' && q[8]=='x')
	 {
	  q[7]='o';
	  f=1;
	 }
	else if(q[5]=='x' && q[8]=='x')
	 {
	  q[2]='o';
	  f=1;
	 }
	else if(q[5]=='x' && q[2]=='x')
	 {
	  q[8]='o';
	  f=1;
	 }
	else if(q[2]=='x' && q[8]=='x')
	 {
	  q[5]='o';
	  f=1;
	 }
	else if(q[8]=='x' && q[7]=='x')
	 {
	  q[6]='o';
	  f=1;
	 }
	else if(q[0]=='x' && q[1]=='x')
	 {
	  q[2]='o';
	  f=1;
	 }
	 else if(q[2]=='x' && q[1]=='x')
	 {
	  q[0]='o';
	  f=1;
	 }
	else if(q[0]=='x' && q[2]=='x')
	 {
	  q[1]='o';
	  f=1;
	 }
	 else
	 {
	   if(q[0]=='x' && q[8]=='x')
	   {
	   q[3]='o';
	   }
	   else if(q[2]=='x' && q[6]=='x')
	   {
	    q[5]='o';
	    }
	    else if(q[1]=='x' && q[5]=='x'){ q[2]='o'; }
	     else if(q[1]=='x' && q[8]=='x'){ q[2]='o'; }
	     else if(q[1]=='x' && q[7]=='x'){ q[6]='o'; }
	      else if(q[1]=='x' && q[6]=='x'){ q[8]='o'; }
	     else if(q[1]=='x' && q[3]=='x'){ q[0]='o'; }
	      else if(q[3]=='x' && q[1]=='x'){ q[0]='o'; }
	     else if(q[3]=='x' && q[7]=='x'){ q[6]='o'; }
	      else if(q[3]=='x' && q[5]=='x'){ q[1]='o'; }
	       else if(q[3]=='x' && q[2]=='x'){ q[8]='o'; }
	     else if(q[3]=='x' && q[8]=='x'){ q[2]='o'; }
	     else if(q[0]=='x' && q[7]=='x'){ q[5]='o'; }
	      else if(q[0]=='x' && q[5]=='x'){ q[7]='o'; }
	     else if(q[6]=='x' && q[1]=='x'){ q[5]='o'; }
	     else if(q[6]=='x' && q[5]=='x'){ q[1]='o'; }
	      else if(q[8]=='x' && q[3]=='x'){ q[1]='o'; }
	    else if(q[8]=='x' && q[1]=='x'){ q[3]='o'; }
	     else if(q[2]=='x' && q[7]=='x'){ q[3]='o'; }
	    else if(q[2]=='x' && q[3]=='x'){ q[7]='o'; }
	     else if(q[7]=='x' && q[3]=='x'){ q[6]='o'; }
	      else if(q[7]=='x' && q[0]=='x'){ q[2]='o'; }
	       else if(q[7]=='x' && q[1]=='x'){ q[3]='o'; }
	    else if(q[7]=='x' && q[2]=='x'){ q[0]='o'; }
	     else if(q[7]=='x' && q[5]=='x'){ q[8]='o'; }
	    else if(q[5]=='x' && q[7]=='x'){ q[8]='o'; }
	     else if(q[5]=='x' && q[6]=='x'){ q[0]='o'; }
	    else if(q[5]=='x' && q[3]=='x'){ q[6]='o'; }
	     else if(q[5]=='x' && q[0]=='x'){ q[6]='o'; }
	     else if(q[5]=='x' && q[1]=='x'){ q[2]='o'; }
	 }
       }
       if(q[0]=='o')
       {
	 if(q[4]=='x' && q[8]=='x')
	 {
	  q[2]='o';
	 }
	 if(q[4]=='x' && q[1]=='x')  { q[7]='o'; }
	 if(q[4]=='x' && q[2]=='x')  { q[6]='o'; }
	 if(q[4]=='x' && q[5]=='x')  { q[3]='o'; }
	 if(q[4]=='x' && q[3]=='x')  { q[5]='o'; }
	 if(q[4]=='x' && q[6]=='x')  { q[2]='o'; }
	 if(q[4]=='x' && q[7]=='x')  { q[1]='o'; }
       }
  }
  void thrtake()
  { int l=0;
    int f=0;
     if(q[0]=='o' && q[1]=='o' && q[2]!='x')  { q[2]='o';f=1; }
     if(q[3]=='o' && q[4]=='o' && q[5]!='x')  { q[5]='o';f=1; }
     if(q[6]=='o' && q[7]=='o' && q[8]!='x')  { q[8]='o';f=1; }
     if(q[2]=='o' && q[1]=='o' && q[0]!='x')  { q[0]='o';f=1; }
     if(q[4]=='o' && q[5]=='o' && q[3]!='x')  { q[3]='o';f=1; }
     if(q[7]=='o' && q[8]=='o' && q[6]!='x')  { q[6]='o';f=1; }
     if(q[0]=='o' && q[2]=='o' && q[1]!='x')  { q[1]='o';f=1 ;}
     if(q[3]=='o' && q[5]=='o' && q[4]!='x')  { q[4]='o';f=1; }
     if(q[6]=='o' && q[8]=='o' && q[7]!='x')  { q[7]='o';f=1; }
     if(q[0]=='o' && q[3]=='o' && q[6]!='x')  { q[6]='o';f=1; }
     if(q[1]=='o' && q[4]=='o' && q[7]!='x')  { q[7]='o';f=1; }
     if(q[2]=='o' && q[5]=='o' && q[8]!='x')  { q[8]='o';f=1; }
     if(q[6]=='o' && q[3]=='o' && q[0]!='x')  { q[0]='o';f=1; }
     if(q[4]=='o' && q[7]=='o' && q[1]!='x')  { q[1]='o';f=1; }
     if(q[8]=='o' && q[5]=='o' && q[2]!='x')  { q[2]='o';f=1; }
     if(q[0]=='o' && q[6]=='o' && q[3]!='x')  { q[3]='o';f=1; }
     if(q[1]=='o' && q[7]=='o' && q[4]!='x')  { q[4]='o';f=1; }
     if(q[2]=='o' && q[8]=='o' && q[5]!='x')  { q[5]='o';f=1; }
     if(q[0]=='o' && q[4]=='o' && q[8]!='x')  { q[8]='o';f=1; }
     if(q[4]=='o' && q[8]=='o' && q[0]!='x')  { q[0]='o';f=1; }
     if(q[0]=='o' && q[8]=='o' && q[4]!='x')  { q[4]='o';f=1; }
     if(q[6]=='o' && q[4]=='o' && q[2]!='x')  { q[2]='o';f=1; }
     if(q[2]=='o' && q[4]=='o' && q[6]!='x')  { q[6]='o';f=1; }
     if(q[6]=='o' && q[2]=='o' && q[4]!='x')  { q[4]='o';f=1;}
     if(f==0)
     {
     if(q[0]=='x' && q[1]=='x' && q[2]!='o')  { q[2]='o';l=1; }
     if(q[3]=='x' && q[4]=='x' && q[5]!='o')  { q[5]='o';l=1; }
     if(q[6]=='x' && q[7]=='x' && q[8]!='o')  { q[8]='o';l=1; }
     if(q[2]=='x' && q[1]=='x' && q[0]!='o')  { q[0]='o';l=1; }
     if(q[4]=='x' && q[5]=='x' && q[3]!='o')  { q[3]='o';l=1; }
     if(q[7]=='x' && q[8]=='x' && q[6]!='o')  { q[6]='o';l=1; }
     if(q[0]=='x' && q[2]=='x' && q[1]!='o')  { q[1]='o';l=1;}
     if(q[3]=='x' && q[5]=='x' && q[4]!='o')  { q[4]='o';l=1; }
     if(q[6]=='x' && q[8]=='x' && q[7]!='o')  { q[7]='o';l=1;}
     if(q[0]=='x' && q[3]=='x' && q[6]!='o')  { q[6]='o';l=1; }
     if(q[1]=='x' && q[4]=='x' && q[7]!='o')  { q[7]='o';l=1; }
     if(q[2]=='x' && q[5]=='x' && q[8]!='o')  { q[8]='o';l=1; }
     if(q[6]=='x' && q[3]=='x' && q[0]!='o')  { q[0]='o';l=1; }
     if(q[4]=='x' && q[7]=='x' && q[1]!='o')  { q[1]='o';l=1; }
     if(q[8]=='x' && q[5]=='x' && q[2]!='o')  { q[2]='o';l=1; }
     if(q[0]=='x' && q[6]=='x' && q[3]!='o')  { q[3]='o';l=1; }
     if(q[1]=='x' && q[7]=='x' && q[4]!='o')  { q[4]='o';l=1; }
     if(q[2]=='x' && q[8]=='x' && q[5]!='o')  { q[5]='o';l=1; }
     if(q[0]=='x' && q[4]=='x' && q[8]!='o')  { q[8]='o';l=1; }
     if(q[4]=='x' && q[8]=='x' && q[0]!='o')  { q[0]='o';l=1; }
     if(q[0]=='x' && q[8]=='x' && q[4]!='o')  { q[4]='o';l=1; }
     if(q[6]=='x' && q[4]=='x' && q[2]!='o')  { q[2]='o';l=1; }
     if(q[2]=='x' && q[4]=='x' && q[6]!='o')  { q[6]='o';l=1; }
     if(q[6]=='x' && q[2]=='x' && q[4]!='o')  { q[4]='o';l=1;}
    }
    if(l==0)
    {
     if(q[0]!='x' && q[0]!='o') { q[0]='o';goto kk; }
     if(q[1]!='x' && q[1]!='o') { q[1]='o';goto kk; }
     if(q[2]!='x' && q[2]!='o') { q[2]='o';goto kk; }
     if(q[3]!='x' && q[3]!='o') { q[3]='o';goto kk; }
     if(q[4]!='x' && q[4]!='o') { q[4]='o';goto kk; }
     if(q[5]!='x' && q[5]!='o') { q[5]='o';goto kk; }
     if(q[6]!='x' && q[6]!='o') { q[6]='o';goto kk; }
     if(q[7]!='x' && q[7]!='o') { q[7]='o';goto kk; }
     if(q[8]!='x' && q[8]!='o') { q[8]='o';goto kk; }
      }
      kk:
    }
void fourtake()
{  int f=0;
     if(q[0]=='x' && q[1]=='x' && q[2]!='o')  { q[2]='o';f=1; }
     if(q[3]=='x' && q[4]=='x' && q[5]!='o')  { q[5]='o';f=1; }
     if(q[6]=='x' && q[7]=='x' && q[8]!='o')  { q[8]='o';f=1; }
     if(q[2]=='x' && q[1]=='x' && q[0]!='o')  { q[0]='o';f=1; }
     if(q[4]=='x' && q[5]=='x' && q[3]!='o')  { q[3]='o';f=1; }
     if(q[7]=='x' && q[8]=='x' && q[6]!='o')  { q[6]='o';f=1; }
     if(q[0]=='x' && q[2]=='x' && q[1]!='o')  { q[1]='o';f=1;}
     if(q[3]=='x' && q[5]=='x' && q[4]!='o')  { q[4]='o';f=1; }
     if(q[6]=='x' && q[8]=='x' && q[7]!='o')  { q[7]='o';f=1;}
     if(q[0]=='x' && q[3]=='x' && q[6]!='o')  { q[6]='o';f=1; }
     if(q[1]=='x' && q[4]=='x' && q[7]!='o')  { q[7]='o';f=1; }
     if(q[2]=='x' && q[5]=='x' && q[8]!='o')  { q[8]='o';f=1; }
     if(q[6]=='x' && q[3]=='x' && q[0]!='o')  { q[0]='o';f=1; }
     if(q[4]=='x' && q[7]=='x' && q[1]!='o')  { q[1]='o';f=1; }
     if(q[8]=='x' && q[5]=='x' && q[2]!='o')  { q[2]='o';f=1; }
     if(q[0]=='x' && q[6]=='x' && q[3]!='o')  { q[3]='o';f=1; }
     if(q[1]=='x' && q[7]=='x' && q[4]!='o')  { q[4]='o';f=1; }
     if(q[2]=='x' && q[8]=='x' && q[5]!='o')  { q[5]='o';f=1; }
     if(q[0]=='x' && q[4]=='x' && q[8]!='o')  { q[8]='o';f=1; }
     if(q[4]=='x' && q[8]=='x' && q[0]!='o')  { q[0]='o';f=1; }
     if(q[0]=='x' && q[8]=='x' && q[4]!='o')  { q[4]='o';f=1; }
     if(q[6]=='x' && q[4]=='x' && q[2]!='o')  { q[2]='o';f=1; }
     if(q[2]=='x' && q[4]=='x' && q[6]!='o')  { q[6]='o';f=1; }
     if(q[6]=='x' && q[2]=='x' && q[4]!='o')  { q[4]='o';f=1;}
     if(f==0)
     {
     if(q[0]!='x' && q[0]!='o') { q[0]='o';goto kl; }
     if(q[1]!='x' && q[1]!='o') { q[1]='o';goto kl; }
     if(q[2]!='x' && q[2]!='o') { q[2]='o';goto kl; }
     if(q[3]!='x' && q[3]!='o') { q[3]='o';goto kl; }
     if(q[4]!='x' && q[4]!='o') { q[4]='o';goto kl; }
     if(q[5]!='x' && q[5]!='o') { q[5]='o';goto kl; }
     if(q[6]!='x' && q[6]!='o') { q[6]='o';goto kl; }
     if(q[7]!='x' && q[7]!='o') { q[7]='o';goto kl; }
     if(q[8]!='x' && q[8]!='o') { q[8]='o';goto kl; }
     }
      kl:
      }














