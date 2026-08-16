#include <stdio.h>
#define PI 3.14159
int main(){
    float R , circumference ;
    printf("enter radius of circle\n");
    scanf("%f",&R) ;
    circumference = 2*PI*R ;
    printf(" The Circumference of circle of Radius of %4f is %4f", R , circumference);
    return 0 ;
    
}