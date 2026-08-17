#include <stdio.h>
int main(){
    
    int a , b , c ;
    
    printf(" enter three values\n");
    scanf("%d %d %d" ,&a ,&b, &c);
    
    if(a > b && a > c)
    {
        printf("%d is largest",a);
    }
    else if(b > a && b > c)
    {
        printf("%d is largest",b);
    }
    else if (c > a && c > b)
    {
        printf("%d is largest ",c);
    }else{
        printf("all numbers are equal");
    }
}