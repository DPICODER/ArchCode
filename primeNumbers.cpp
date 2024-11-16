#include<iostream>

using std::cin;
using std::cout;
using std::endl;


/*
    validates a given number is Prime or not
    and returns T/F
*/
bool checkPrime(int value){
    if(value <= 1){
        return false;
    }
    if(value == 2){
        return true;
    }
    for(int i = 2 ; i * i <= value ; i++){
        if(value % i == 0){
            return false;
        }
    }
    return true;
}

/*
Prints all the possible primenumbers
for the given Range
*/
void printAllPrimes(int range){
    system("clear");
    if(range < 2){
        cout<<"Invalid Range !!!!"<<endl;
    }
    else{
        for(int i = 2 ; i <= range ; i++){
            if(checkPrime(i)){
                cout<<"\t"<<i;
            }
        }
        cout<<endl;
    }
}

int main(){
    // printAllPrimes(1);
    printAllPrimes(50);
    
    // cout<<checkPrime(7)<<endl;
    // cout<<checkPrime(3)<<endl;
    // cout<<checkPrime(6)<<endl;
    // cout<<checkPrime(-1)<<endl;//edge cases
    // cout<<checkPrime(1)<<endl;//edge cases
    // cout<<checkPrime(2)<<endl;//edge cases

    return 0;

}