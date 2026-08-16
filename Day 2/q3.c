#include <stdio.h>
#define PI 3.14159
int main(){
    float R , area ;
    printf("enter radius of circle in \n");
    scanf("%f",&R) ;
    area = PI*R*R ;
    printf(" The area of a circle with Radius %4f is %4f ",R ,area);
    return 0 ;

}