//Number Analyzer
#include <iostream>
using namespace std;

int main() {
    int n, z ,a,b,c,d , sum =0 , Count = 0;
    cout << "Enter a three digit number: " ;
    cin >> n ;
    if ( n % 2 == 0) {
        cout << n << " is an even number." << endl ;
    } else {
        cout << n << " is an odd number." << endl ;
    }

    if ( n > 0 ){
        cout << n << " is a posetive integer" << endl ;
    } else if (n < 0){
        cout << n << " is a negetive integer" << endl ;
    } else {
        cout << n << " is zero" << endl ;
    }

    if(n>0){
         a = n / 100;
         b = n %100;
         c = b %10;
         d =b/10;
        sum = a +  c + d ;
        cout << "sum of all digits of " << n << " is " << sum << endl ;
    }
    
    z = n ;
    while( n > 0)
    { 
        a = z%10;
        Count += 1;
        z = z/10 ;
    }
    cout << " no of digits in " << z << " is " << Count << endl ;
    return 0 ;
}