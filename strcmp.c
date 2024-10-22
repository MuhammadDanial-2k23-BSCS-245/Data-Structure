#include<stdio.h>
#include<string.h>

void main (){
 char *buf1 ="aaa", *buf2="bbb", *buf3="ccc";
 int ptr;
 ptr = strcmp(buf1,buf2);

 if (ptr>0)
    printf("\n buffer 2 is greater than buffer 1");
 else
    printf("\n buffer 2 is smaller than buffer1");

ptr = strcmp(buf2,buf3);

 if (ptr>0)
    printf("\n buffer 3 is greater than buffer 2");
 else
    printf("\n buffer 3 is smaller than buffer 2");
getch();
}
