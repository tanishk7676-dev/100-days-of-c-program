// celsius to degree
#include <stdio.h>
int main(){
    float  c , f;
    printf(" enter any no ");
    scanf("%f", &c);
    f = (c*9.0/5.0) + 32 ;
    printf(" %.2f farhenite ",f);
    return 0;
    
}   