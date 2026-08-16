#include <stdio.h>
int main(){
    int n ;
    printf(" Enter any number : ");
    scanf("%d",&n);
    if(n>0){
        printf(" The number %d is posetive ",n);
    }else if( n <0){
        printf(" The number %d is negetive ",n);
    }else{
        printf("%d is zer0",n);
    }

    
    return 0 ;
}