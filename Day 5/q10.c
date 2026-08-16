#include <stdio.h>
int main(){
    int s , m , H , a , b ,c ;
    printf(" Enter time in seconds ");
    scanf("%d",&s);
    m = s/60 ;
    a = s%60 ;
    H= m/60 ;
    b = m%60 ;
    printf("%d : %d : %d",H,b ,a);
    return 0 ;
     

}