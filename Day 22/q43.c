#include <stdio.h>
int f(int x){
    int k = 1 ;
    for(int i = 1; i<=x ; i++){
        k *= i ;

    }
    return k ;

}



int main(){
    int n , z , t , sum = 0  ;
    printf("Enter any number :  \n");
    scanf("%d",&n);
    int s = n;


    while(n>0){
        z = n%10;
        t = f(z);
        sum += t ;
        n = n/10 ;
    }
    if(s == sum){
        printf("the number %d is a strong number", s);
    }else{
        printf("the number %d is not a strong number", s);
    }
    
    return 0 ;

}