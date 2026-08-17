#include <stdio.h>
int main(){
    
    float n ;
    
    printf("enter your percentage\n");
    scanf("%f",&n);
    
    if( n < 60)
    {
        printf("grade F");

    }
    else if(n>= 60 && n< 70 )
    {
        printf(" Grade D");
    }
    else if( n >=70 && n< 80)
    {
        printf("Grade C");
    }
    else if(" n >=80 && n < 90")
    {
        printf("Grade B");
    }
    else
    {
        printf(" Grade A");
    }
    return 0;
}
    