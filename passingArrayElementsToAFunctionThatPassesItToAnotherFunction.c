#include<stdio.h>
void show(int **n){
printf("%i\n",**n);
}
void display(int *a){
show(&a);
}
void main (){
int i;

int marks []={55,65,75,56,78,78,90};

for (i=0; i<=6; i++){
    display(&marks[i]);
}
getch();
}
