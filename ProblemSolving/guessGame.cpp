// In this problem. you are given a target, T, which is the number chOsen by player 1. You are also
// given a listof guesses by the second player. Return the list of responses by the first player. The
// responses to every guess are as follow:
// If the guess < target, the response is "Too low”.
// If the guess > target, the response is ”Too high”.
// Else the response is ”Correct guess you win".

#include <iostream>
using namespace std;
void guessesingGame(int target, int guesses[])
{
    int counter = 0;
    for (int i = 0; i < 7; i++)
    {

        if (target == guesses[i])
        {
            cout << "Correct guess you win";
            break;
            counter++;
        }

        else if (target < guesses[i])
        {
            cout << "Too high";
            counter++;
        }
        else if (target > guesses[i])
        {
            cout << "Too low";
            counter++;
        }
        else if (counter > 7)
        {
            cout << "You lose";
            break;
        }
    }
}

// Driver Code
int main()
{
    int target = 5;
    int guesses[10] = {2, 8, 6, 5, 7, 9, 13};
    guessesingGame(target, guesses);
}