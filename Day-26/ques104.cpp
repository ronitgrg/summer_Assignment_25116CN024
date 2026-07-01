//Write a program to Create quiz application. 

#include<iostream>
using namespace std;

int main(){
    
    int score = 0;
    int answer;

    cout << "Welcome to the Quiz Application!" << endl;

    cout << "Question 1: What is the capital of Uttar Pradesh?" << endl;
    cout << "1. Chattisgarh" << endl;
    cout << "2. New Delhi" << endl;
    cout << "3. Lucknow" << endl;
    cout << "4. Mumbai" << endl;
    cout << "Enter your answer (1-4): ";
    cin >> answer;

    if(answer == 3){
        score++;
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect! The correct answer is Lucknow." << endl;
    }

    cout << "\nQuestion 2: What is 6 + 6?" << endl;
    cout << "1. 10" << endl;
    cout << "2. 11" << endl;
    cout << "3. 12" << endl;
    cout << "4. 13" << endl;
    cout << "Enter your answer (1-4): ";
    cin >> answer;

    if(answer == 3){
        score++;
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect! The correct answer is 12." << endl;
    }

    cout << "\nYour total score is: " << score << "/2" << endl;

    return 0;
}