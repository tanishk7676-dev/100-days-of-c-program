#include <stdio.h>
int main(){
    int y ;
    printf("enter any year to check leap year ");
    scanf("%d", &y);
    if(y%4 == 0){
        printf("Year %d is a leap year", y);
    } else {
        printf("Year %d is not leap year", y);
    }
    return 0 ;
}