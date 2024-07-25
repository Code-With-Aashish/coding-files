#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int player; // Seed the random number generator

    int computer = rand() % 3; // Generate a random number (0, 1, or 2)
    string choices[] = {"stone", "paper", "scissors"};

    cout << "Welcome to Rock-Paper-Scissors!" << endl;
    cout << "Enter your choice (0 for stone, 1 for paper, 2 for scissors): ";
    cin >> player;

    if (player < 0 || player > 2)
    {
        cout << "Invalid choice. Please choose 0, 1, or 2." << endl;
        return 1;
    }

    cout << endl;
    cout << "Computer chose: " << choices[computer] << endl;
    cout << "You chose: " << choices[player] << endl;
    cout << endl;

    if (player == computer)
    {
        cout << "It's a draw!" << endl;
    }
    else if ((player + 1) % 3 == computer)
    {
        cout << "Computer wins!" << endl;
    }
    else
    {
        cout << "You win!" << endl;
    }

    return 0;
}
