#include <stdio.h>
int main(){
    int n1 , n2 , sum , diff , m , div ;
    printf(" enter any two mumbers ");
    scanf("  %d %d",&n1 ,&n2 );
    sum = n1 + n2 ;
    diff = n1 - n2 ;
    m = n1*n2 ;
    if( n2 != 0){
        div = n1/n2 ;
    } else {
        printf( " zero division is not defined");
    }
    printf(" sum = %d , diffrence = %d , multipley = %d , division = %d", sum , diff , m ,div );   
    return 0 ;
    
}