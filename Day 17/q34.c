#include <stdio.h>
int main(){
    int n, f = 0 ;

    printf("Enter any number \n");
    scanf("%d", &n);

    for(int i =1 ; i<=n ; i++){
        if( n%i == 0){
            f += 1;
        }
    }
    if(f ==2){
        printf("The number %d is a prime number \n", n);

    }else{
        printf("The number %d is not a prime number \n", n);

    }
    return 0 ;
    
}