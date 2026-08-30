#include <stdio.h>
int main(){
    int n ;
    long long s ;
    printf(" Enter any posetive integer ");
    scanf("%d", &n);

    for(int i = 1 ; i <= n ; i ++){
        if(i%2 == 0){
        s += i ;
    }

    }
    printf("sum of even no. between number %d is %lld", n , s);
    return 0 ;
}

