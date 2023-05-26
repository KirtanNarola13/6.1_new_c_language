#include<stdio.h>
#include<conio.h>
void main()
{
int start_year;
int end_year;
int year;
clrscr();
printf("Enter the starting year : ");
scanf("%d",&start_year);
printf("Enter the ending year : ");
scanf("%d",&end_year);

year=start_year;
while(year<=end_year){
    if(year%4==0){
       printf("%d\n",year);
    }
    year++;

}

getch();
}