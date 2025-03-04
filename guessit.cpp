#include <bits/stdc++.h>
using namespace std;
int generateRandomNumber(){
    return rand()%100+1;
}
int getPlayerGuess()
{
    int guess;
    cout << endl << "Enter your guess (1..100): ";
    cin >> guess;
    return guess;
}
void printAnswer(int guess, int secretNumber)
{
    if (guess > secretNumber) {
        cout << "Your number is too big." << endl;
    } else if (guess < secretNumber) {
        cout << "Your number is too small." << endl;
    } else {
        cout << "Congratulation! You win." << endl;
    }
}
void playguesslt(){
 int secretNumber = generateRandomNumber();
 int guess;
 int point=101;

do {
    guess = getPlayerGuess();
    printAnswer(guess, secretNumber);
    point--;
} while (guess != secretNumber);
 cout<<"The score of the person "<<point<<endl;
}
int main(){
    srand(time(0));
   playguesslt();
   bool h;
   cout<<"Play again ? Yes=1//No=0"<<endl;
   cin>>h;
   if(h)  playguesslt();
    cout << "Thanks for playing!" << endl;
}
