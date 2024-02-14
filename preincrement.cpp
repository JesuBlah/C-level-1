#include<stdio.h>
using namespace std ;
int main(){
    int a[]= {5,16,7,89,45,32,23,10};
    int *p = &a[0];
    printf("%d",*(++p));
    return 0 ;
}