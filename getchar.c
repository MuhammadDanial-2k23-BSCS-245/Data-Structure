#include<stdio.h>
#include<string.h>

void main (){
    int c;
printf("enter a character");

while ((c=getchar())!= "\n"){
    printf("%c",c);
}

getch();
}
