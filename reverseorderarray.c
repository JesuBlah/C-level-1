#include<stdio.h>
int main(){
    int i;
    int a[9] = {34, 56, 54, 32, 67, 89, 90, 32, 31};
    for(i=8; i>=0; i--){
        printf("%d  ", a[i]);
    }
    return 0;
}