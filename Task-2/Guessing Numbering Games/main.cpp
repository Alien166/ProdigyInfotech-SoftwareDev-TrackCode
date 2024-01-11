#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    cout << "\n\t\t\t Welcome to GuessT he Number game!" << endl;
    cout << "You have to guess a number between 1 and 100. "
            "You'll have limited choices based on the "
            "level you choose. Good Luck!"
         << endl;
    while(true) {
        cout << "\nEnter the difficulty level: \n";
        cout << "1 for easy!\t";
        cout << "2 for medium!\t";
        cout << "3 for difficult!\t";
        cout << "0 for ending the game!\n" << endl;

        int option;
        cin>>option;
        srand(time(0));
        int guessingNum = 1 + (rand() % 100);
        int playerChoice;
        if(option == 1) {
            cout << "\nYou have 10 choices for finding the "
                    "secret number between 1 and 100.";
            int chooseLeft=10;
            for(int i=0;i<10;++i) {
                cout<<"\nEnter The Number";
                cin>>playerChoice;

                if(playerChoice == guessingNum) {
                    cout << "Well played! You won, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > guessingNum) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                }
                chooseLeft--;
                cout << chooseLeft << " choices left. "
                     << endl;
                if (chooseLeft == 0) {
                    cout << "You couldn't find the "
                            "secret number, it was "
                         << chooseLeft
                         << ", You lose!!\n\n";
                    cout << "Play the game again to "
                            "win!!!\n\n";
                }
            }
        }
        else if (option == 2) {
            cout << "\nYou have 7 choices for finding the "
                    "secret number between 1 and 100.";
            int chooseLeft=7;
            for(int i=0;i<7;++i) {
                cout<<"\nEnter The Number";
                cin>>playerChoice;

                if(playerChoice == guessingNum) {
                    cout << "Well played! You won, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > guessingNum) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                }
                chooseLeft--;
                cout << chooseLeft << " choices left. "
                     << endl;
                if (chooseLeft == 0) {
                    cout << "You couldn't find the "
                            "secret number, it was "
                         << chooseLeft
                         << ", You lose!!\n\n";
                    cout << "Play the game again to "
                            "win!!!\n\n";
                }
            }


        }
        else if(option == 3) {
            cout << "\nYou have 5 choices for finding the "
                    "secret number between 1 and 100.";
            int chooseLeft=5;
            for(int i=0;i<5;++i) {
                cout<<"\nEnter The Number";
                cin>>playerChoice;

                if(playerChoice == guessingNum) {
                    cout << "Well played! You won, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > guessingNum) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                }
                chooseLeft--;
                cout << chooseLeft << " choices left. "
                     << endl;
                if (chooseLeft == 0) {
                    cout << "You couldn't find the "
                            "secret number, it was "
                         << chooseLeft
                         << ", You lose!!\n\n";
                    cout << "Play the game again to "
                            "win!!!\n\n";
                }
            }

        }
        else if (option == 0) {
            exit(0);
        }
        else {
            cout << "Wrong choice, Enter valid choice to "
                    "play the game! (0,1,2,3)"
                 << endl;
        }
    }
    return 0;
}
