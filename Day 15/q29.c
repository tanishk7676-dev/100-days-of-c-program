#include <stdio.h> 
int main (){
    int n ;
    long long m = 1 ;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n > 0){
        for(int i = 1 ; i <= n ; i++){
            m *= i ;
        }
    }
    
    printf(" the factorial of number %d is : %lld" , n , m);
    return 0 ;

}