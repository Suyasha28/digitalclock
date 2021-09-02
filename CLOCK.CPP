#include<stdio.h>
#include<conio.h>
#include<dos.h>

void one(int x,int y);
void two(int x,int y);
void three(int x,int y);
void four(int x,int y);
void five(int x,int y);
void six(int x,int y);
void seven(int x,int y);
void eight(int x,int y);
void nine(int x,int y);
void zero(int x,int y);
void colon(int x,int y);
void time();
void call(int digit,int x,int y);

int main(){
  clrscr();
  textcolor(BLACK);
  textbackground(YELLOW);
  int a=1;
  clrscr();
  while(a<=61){
  time();
  delay(1000);
   a++;
   }
  getch();
  return 0;
}

void time()
{
 int hour;
int minutes;
int seconds;
struct dostime_t time;

 _dos_gettime(&time);

hour=time.hour;
minutes=time.minute;
seconds=time.second;

   call(hour/10,11,7);
   call(hour%10,19,7);
   colon(25,7);
   call(minutes/10,31,7);
   call(minutes%10,39,7);
   colon(45,7);
   call(seconds/10,51,7);
   call(seconds%10,59,7);
}
void call(int digit,int x,int y){
   switch(digit){
   case 1:one(x,y); break;
   case 2:two(x,y); break;
   case 3:three(x,y); break;
   case 4:four(x,y); break;
  case 5:five(x,y); break;
  case 6:six(x,y); break;
  case 7:seven(x,y); break;
  case 8:eight(x,y); break;
  case 9:nine(x,y); break;
  default:zero(x,y);
   }
}
void colon(int x,int y){
    for(int i=1;i<=9;i++){
	for(int j=1;j<=5;j++){
	    gotoxy(x,y);
	    if((i==3 && j==3) || (j==3 && i==7))
		printf("#");
	    else
		printf(" ");
		x++;
	}
	y++;
	x=x-5;
	printf("\n");
    }
}

void zero(int x,int y){
    for(int i=1;i<=9;i++){
	for(int j=1;j<=5;j++){
	     gotoxy(x,y);
	    if(i==1 || i==9 || j==1 || j==5 )
	    printf("*");
	    else
	    printf(" ");
	      x++;
	}
	y++;
	x=x-5;
	printf("\n");
    }
}
void nine(int x,int y){
    for(int i=1;i<=9;i++){
	for(int j=1;j<=5;j++){
	     gotoxy(x,y);
	    if(i==1 || i==5 || i==9 || j==5 || (j==1 && i<=5))
	    printf("*");
	    else
	    printf(" ");
	      x++;
	}
	y++;
	x=x-5;
	printf("\n");
    }
}
void eight(int x,int y){
    for(int i=1;i<=9;i++){
	for(int j=1;j<=5;j++){
	     gotoxy(x,y);
	    if(i==1 || i==5 || i==9 || j==1 || j==5)
	    printf("*");
	    else
	    printf(" ");
	      x++;
	}
	y++;
	x=x-5;
	printf("\n");
    }
}
void seven(int x,int y){
    for(int i=1;i<=9;i++){
	for(int j=1;j<=5;j++){
	     gotoxy(x,y);
	    if(i==1 || j==5)
	    printf("*");
	    else
	    printf(" ");
	      x++;
	}
	y++;
	x=x-5;
	printf("\n");
    }
}
void six(int x,int y){
    for(int i=1;i<=9;i++){
	for(int j=1 ; j<=5 ; j++){
	     gotoxy(x,y);
	    if(j==1 || (j==5 && i>=5) || i==5 || i==9 ||i==1)
	    printf("*");
	    else
	    printf(" ");
	      x++;
	}
	y++;
	x=x-5;
	printf("\n");
    }
}
void five(int x,int y){
    for(int i=1;i<=9;i++){
	for(int j=1;j<=5;j++){
	     gotoxy(x,y);
	    if(i==1 || i==5 || i==9 || (j==1 && i<=5) || (j==5 && i>=5))
	    printf("*");
	    else
	    printf(" ");
	      x++;
	}
	y++;
	x=x-5;
	printf("\n");
    }
}
void four(int x,int y){
    for(int i=1;i<=9;i++){
	for(int j=1;j<=5;j++){
	     gotoxy(x,y);
	    if(j==5 || i==5 || (j==1 && i<=5))
	    printf("*");
	    else
	    printf(" ");
	      x++;
	}
	y++;
	x=x-5;
	printf("\n");
    }
}
void three(int x,int y){
    for(int i=1;i<=9;i++){
	 for(int j=1;j<=5;j++){
	      gotoxy(x,y);
	     if(i==1 || i==5 || i==9 || j==5)
	     printf("*");
	     else
	     printf(" ");
	       x++;
	 }
	 y++;
	x=x-5;
	 printf("\n");
    }
}
void two(int x,int y){
    for(int i=1;i<=9;i++){
	for(int j=1;j<=5;j++){
	     gotoxy(x,y);
	    if(i==1 || i==5 || i==9 || (j==5 && i<=5) || (j==1 && i>=5))
	       printf("*");
	       else
	       printf(" ");
		 x++;
	}
	y++;
	x=x-5;
	printf("\n");
    }
}
void one(int x,int y){
    for(int i =1;i<=9;i++){
	for(int j=1;j<=5;j++){
	     gotoxy(x,y);
	    if(j==3)
	      printf("*");
	      else
	      printf(" ");
		x++;
	}
	y++;
	x=x-5;
	printf("\n");
    }
}