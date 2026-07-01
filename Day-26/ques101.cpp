//Write a program to Create number guessing game.

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    srand(time(0));
    int number=rand() % 100 + 1;
    
    int guess;
    cout<<"Guess a number between 1 and 100: ";

    while(true) {
        cin>>guess;

        if(guess<number) {
            cout<<"Too low! Try again: ";
        } else if(guess>number) {
            cout<<"Too high! Try again: ";
        } else{
            cout<<"Correct! You win." << endl;
            break;
        }
    }

    return 0;
}