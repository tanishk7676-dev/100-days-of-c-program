#include <stdio.h>
int main(){
    int n ,z = 0;
    printf("Enter any positive number ");
    scanf("%d",&n);

    for( int i = 1; i<n ; i++){
        if(i%n == 0){
            z += i ;
        }                  
    }
    
    if(n == z){
        printf("The number %d is a perfect number\n",n) ;
    }else{

        printf( "The number %d is not a perfect number \n",n) ;
    }
    return 0 ;
}