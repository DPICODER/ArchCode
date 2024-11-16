#include<iostream>

using std :: cin;
using std :: cout;
using std :: endl;



/*
Generates the fibonacchi series 
ex : 
0 + 1 = 1 
1 + 1 = 2
1 + 2 = 3
2 + 3 = 5 
3 + 5 = 8
5 + 8 = 13
*/
void fibonacci(int range){
    if(range <= 0)return;
    int t1 = 0, t2 = 1;
    cout<<t1<<" , "<<t2;
    for(int i = 2 ; i < range; i++){
        int s = t1 + t2;
        cout<<", "<<s;
        t1 = t2 ;
        t2 = s;
    }
    cout<<endl;
}

int main(){

    fibonacci(20);
    return 0;
}