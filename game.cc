
#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int guesses = 0;
    
    cout<<"Player 1 enter a number"<<endl;
    cin>>num1;
    cout<<"Player 2 guess Player 1's number"<<endl;
    cin>>num2;
    
    
    while(num1){
        if(num1 < num2){
            cout<<"Player 2's number is higher than Player 1's.  Guess a number lower"<<endl;
            guesses++;
            cout<<"Total number of guesses is: "<<guesses<<endl;
            cin>>num2;
        }else if (num1 > num2){
            cout<<"Player 2's number is lower than Player 1's  Guess a number higher"<<endl;
            guesses++;
            cout<<"Total number of guesses is: "<<guesses<<endl;
            cin>>num2;
        }else if(num1 == num2) {
            cout<<"You guessed the correct number!"<<endl;
            guesses++;
            cout<<"Total number of guesses is: "<<guesses<<endl;
            break;
        }
    }

    return 0;
}
