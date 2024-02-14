#include<stdio.h>
using namespace std;
int main(){
    int a[] = {5,16,7,89,45,32,23,10};
    int *p = &a[2];
    
    printf("%d\n",*(--p));
    printf("%d\n",*(p--));
    return 0 ;
}