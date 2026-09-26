#include <stdio.h>
int main(){
    int a,b,largest;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("enter the value of b");
    scanf("%d", &b);
    largest = a>b ? a:b;
    printf("the largest value is %d", largest);
    return 0;
}