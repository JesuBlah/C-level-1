#include<stdio.h>
int main(){
    int x=5;
    int * ptr;
    ptr = &x;
    printf("%x\n",ptr);
    *ptr = 4;
    printf("%d\n",x);
}