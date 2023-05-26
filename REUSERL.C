#include<conio.h>
#include<stdio.h>
void main()
{
int b;
clrscr();
printf("Enter any number : ");
scanf("%d",&b);

while(b>=1){
	if(b%2!=0){
	     printf("%d\n",b);
	}
	b--;
}

getch();
}