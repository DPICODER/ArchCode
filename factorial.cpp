#include<iostream>

using std :: cin;
using std :: cout;
using std :: endl;

/*
Function returns the factorial of a given 
value 

ex : 
fact 5 = 1 x 2 x 3 x 4 x 5 = 120
fact 4 = 1 x 2 x 3 x 4     = 24
*/
int factorial(int val){
    int fact = 1,i =1 ;
    while(val!=0 and val >= 0){
        fact *= i;
        i+=1;
        val-=1;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);
    return fact_n / (fact_r * fact_nmr);
}

int main(){
    // cout<<"\nFactorial : "<<factorial(5)<<endl;
    int n = 6 , r =2;
    cout<<"\nNCR : "<<nCr(n,r)<<endl;
    return 0;
}