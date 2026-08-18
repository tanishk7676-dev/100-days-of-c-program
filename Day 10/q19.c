#include <stdio.h>

int main(){
    
    int a , b , c ;
    
    printf("enter sides of triangle A , B , C :\n");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a == b && b ==c)
    {
        printf("this is a equilaeteral triangle ");
    }else if((a + b ==c) | (b+c == a) | (c+a==b))
    {
        printf("this is a isocelles triangle");
    }else
    {
        printf(" this is a scallen triangle ");
    }
    return 0 ;
       
}