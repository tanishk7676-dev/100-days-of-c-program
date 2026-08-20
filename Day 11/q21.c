#include <stdio.h>
int main(){
    int n ;
    printf("enter any no between 1 and 12 : ");
    scanf("%d",&n);
    switch(n){
        case 1 :
        printf(" month : January , no of day :  31");
        break;
        case 2 :
         printf(" month : Februry , no of day :  28");
         break ;
         case 3 :
        printf(" month : March , no of day :  31");
        break;
        case 4 :
        printf(" month : April  no of day  :  30");
        break;
        case 5 :
        printf(" month : May  , no of day :  31");
        break;
        case 6 :
        printf(" month : June , no of day :  30");
        break;
        case 7 :
        printf(" month : July , no of day :  30");
        break;
        case 8 :
        printf(" month : August , no of day :  31");
        break;
        case 9 :
        printf(" month : September , no of day :  3o");
        break;
        case 10 :
        printf(" month : october , no of day :  31");
        break;
        case 11 :
        printf(" month : November , no of day :  30");
        break;
        case 12 :
        printf(" month : December , no of day :  31");
        break;

    }
}