#include<stdio.h>
int *findMId( int a[], int n)
{
    return &a[n/2];

}
int main()
{
    int a[]= {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int *mid = findMId(a,n);
    printf("%d",*mid);
    return 0 ;
    }