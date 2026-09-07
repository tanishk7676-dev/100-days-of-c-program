#include <stdio.h>
int main(){
    int n , t =5 ;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(int i = 1 ; i<=n ; i++ )
    {
        for(int j = 1 ; j <=i ; j++)
        {
            
            printf("%d ",t);
            t = t- 1 ;

        }
        t = 5 ;
        printf("\n") ;
    }

    return 0 ;
}