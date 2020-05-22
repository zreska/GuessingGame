/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    
    cout<<"Player 1 enter a number"<<endl;
    cin>>num1;
    cout<<"Player 2 guess Player 1's number"<<endl;
    cin>>num2;
    
    
    while(num1){
        if(num1 < num2){
            cout<<"Player 2's number is higher than Player 1's.  Guess a number lower"<<endl;
            cin>>num2;
        }else if (num1 > num2){
            cout<<"Player 2's number is lower than Player 1's  Guess a number higher"<<endl;
            cin>>num2;
        }else if(num1 == num2) {
            cout<<"You guessed the correct number!"<<endl;
            break;
        }
    }

    return 0;
}
