#include<iostream>

using std::cin;
using std::cout;
using std::endl;

/*
Function to sum the digits given in a number

ex: 132 = 1 + 3 + 2 = 6 !!!
*/
void sum_of_Digits(int value){
    if(value < 10){
        cout<<"can't sum digit's for a single Digits u dumbass!!!!"<<endl;
        return;
    }
    else{
        int num = value;
        int n , b , sum = 0;
        while(num!=0){
            // cout<<"n = "<<n<<endl;
            // cout<<"Sum : "<<sum<<endl;
            // cout<<"num = "<<num<<endl<<endl;

            n = num % 10;
            sum += n;
            num = num /10;
        }
        cout<<"Sum of The Given NUMBER is : "<<sum<<endl;        
    }
}

int main(){

    // sum_of_Digits(1234567891);
    sum_of_Digits(8);
    return 0;

}