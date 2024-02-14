#include<stdio.h>
int main() {
    int a[15],i;
    for ( i = 0; i < 15; i++)
    {
        printf("enter the input for index %d:",i);
        scanf("%d",&a[i]);
    }
    printf("\nArray elements are as follows:\n");
    for (i=0;i<15;i++){
        printf("%d",a[i]);
    }
    return 0;
}