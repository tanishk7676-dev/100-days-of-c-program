#include <stdio.h>
int main(){
    int cp , sp ,profit ;
    float p;
    
    printf("enter cost price and selling price ");
    scanf("%d %d", &cp ,&sp);
    
    profit = sp - cp ;
    p = ((float)profit/cp)*100;
    
    printf("profit = %d and percentage = %f", profit , p );
    
    return 0;
}