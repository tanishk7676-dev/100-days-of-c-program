// Armstrong no. checker 
#include <iostream>
using namespace std ;

int main(){
    int n ,a,c ,z , sum = 0 , Count = 0;

    cout << " enter any number" << endl ;
    cin  << n 
    z = n ;
    while( n > 0)
    { 
        a = z%10;
        Count += 1;
        z = z/10 ;

    }
    c =n ;
    while( n > 0)
    { 
        a = c%10;
        c = c/10 ;
        sum = a**3;

    }
    if( sum == n){
        cout << "The no " << n <<" is an Armstrong number "<< endl;
    }
    return 0 ;
}