#include<conio.h>
#include<stdio.h>
void main()
{
int a=1;
int b;
clrscr();
printf("Enter any number : ");
scanf("%d",&b);

while(a<=b){
	printf("%d\n",a);
	a++;
}

getch();
}