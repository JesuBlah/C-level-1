#include<stdio.h>
int main(){
    int i = 10,j= 20;
    int *p,*q;

    p= &i;
    q= &j;
    *q = *p;
    printf("%d",j);
}