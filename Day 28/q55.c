#include <stdio.h>
int main(){
    int n ;
    printf("enter any no. ");
    scanf("%d", &n);

    for(int i = 1 ;  i <=n ; i++){
        int y =0 ;
        
        for(int j=1 ;j<=i;j++){
            
            if(i%j == 0){
                y += 1;
            }
            
        
        }
        if(y==2){
            printf("%d",i);
            printf("\n");
        }
    }    
    return 0 ;
}