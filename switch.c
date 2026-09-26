#include <stdio.h>
int main(){
    int n;
    printf("enter your vote no.");
    scanf("%d", &n);
    switch(n){
        case 1:
        printf("bjp");
        break;
        case 2:
        printf("congress");
        break;
        case 3:
        printf("aam aadmi party");
        break;
        case 4:
        printf("samajvadi party");
    }
    return 0;
}