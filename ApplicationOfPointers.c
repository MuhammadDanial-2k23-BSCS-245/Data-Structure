#include<stdio.h>
void main (){

int i=3 ,*x;
float j=1.5,*y;
char k='c',*z;

printf("\n value of i %i",i);
printf("\n value of j %f",j);
printf("\n value of k %c\n",k);

printf("\n Original value of x %u",x);
printf("\n Original value of y %u",y);
printf("\n Original value of z %u\n",z);

x++;
y++;
z++;

printf("\n new value in x %u",x);
printf("\n new value in y %u",y);
printf("\n new value in z %u",z);

getch();
}



