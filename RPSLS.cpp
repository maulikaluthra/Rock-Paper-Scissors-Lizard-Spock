#include<bits/stdc++.h>

using namespace std;

int main() {
    cout << "******************Welcome to Rock Paper Scissors Lizard Spock******************\n";
    int choice, CS=0, US=0;
    string choices[5] = {"Rock", "Paper", "Scissors", "Lizard", "Spock"};
    while (1) {
        cout << "\nPress : \n";
        cout << "1. Rock\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "4. Lizard\n";
        cout << "5. Spock\n";
        cout << "0. End Game\n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch(choice) {
            case 0 : { cout << "Game ends!\n";
                        cout << "Computer's score : " << CS << endl;
                        cout << "Your score : " << US << endl;
                        if (US>CS)
                            cout << "You win! Congratulations!";
                        else if (CS>US)
                                cout << "Computer wins! Better luck next time!";
                        else
                            cout << "It's a draw!";
                        cout << "\nThanks for playing! Hope you had fun!\n";
                        return 0;
            }
            case 1 : { string ch = choices[rand()%5];
                        cout << "Computer's choice : " << ch << endl;
                       if (ch=="Rock")
                            cout << "It's a draw\n";
                       else if (ch=="Paper") {
                                cout << "Paper covers Rock : Computer wins!\n";
                                CS++;
                        }
                       else if (ch=="Scissors") {
                                    cout << "Rock crushes Scissors : You win!\n";
                                    US++;
                       }
                        else if (ch=="Lizard") {
                                cout << "Rock crushes Lizard : You win!\n";
                                US++;
                        }
                        else if (ch=="Spock") {
                                cout << "Spock vaporizes Rock : Computer wins!\n";
                                CS++;
                        }
                        break;
                        }
            case 2 : { string ch = choices[rand()%5];
                        cout << "Computer's choice : " << ch << endl;
                       if (ch=="Rock")  {
                                cout << "Paper covers Rock : You win!\n";
                                US++;
                        }
                        else if (ch=="Paper") {
                                cout << "It's a draw";
                        }
                       else if (ch=="Scissors") {
                                    cout << "Scissors cut Paper : Computer wins!\n";
                                    CS++;
                       }
                        else if (ch=="Lizard") {
                                    cout << "Lizard eats Paper : Computer wins!\n";
                                    CS++;
                        }
                        else if (ch=="Spock") {
                                cout << "Paper disproves Spock : You win!\n";
                                US++;
                        }
                        break;
                        }
            case 3 : { string ch = choices[rand()%5];
                        cout << "Computer's choice : " << ch << endl;
                       if (ch=="Rock")  {
                                cout << "Rock crushes Scissors : Computer wins!\n";
                                CS++;
                        }
                        else if (ch=="Paper") {
                                cout << "Scissors cut Paper : You win!\n";
                                US++;
                        }
                       else if (ch=="Scissors") {
                                    cout << "It's a draw";
                       }
                        else if (ch=="Lizard") {
                                    cout << "Scissors decapitates Lizard : You win!\n";
                                    US++;
                        }
                        else if (ch=="Spock") {
                                cout << "Spock smashes Scissors : Computer wins!\n";
                                CS++;
                        }
                        break;
                        }
            case 4 : { string ch = choices[rand()%5];
                        cout << "Computer's choice : " << ch << endl;
                       if (ch=="Rock")  {
                                cout << "Rock crushes Lizard : Computer wins!\n";
                                CS++;
                        }
                        else if (ch=="Paper") {
                                cout << "Lizard eats Paper : You win!\n";
                                US++;
                        }
                       else if (ch=="Scissors") {
                                    cout << "Scissors decapitates Lizard : Computer wins!\n";
                                    CS++;
                       }
                        else if (ch=="Lizard") {
                                    cout << "It's a draw";
                        }
                        else if (ch=="Spock") {
                                cout << "Lizard poisons Spock : You win!\n";
                                US++;
                        }
                        break;
                        }
            case 5 : { string ch = choices[rand()%5];
                        cout << "Computer's choice : " << ch << endl;
                       if (ch=="Rock")  {
                                 cout << "Spock vaporizes Rock : You win!\n";
                                 US++;
                        }
                        else if (ch=="Paper") {
                                cout << "Paper disproves Spock : Computer wins!\n";
                                CS++;
                        }
                       else if (ch=="Scissors") {
                                    cout << "Spock smashes Scissors : You win!\n";
                                    US++;
                       }
                        else if (ch=="Lizard") {
                                    cout << "Lizard poisons Spock : Computer wins!\n";
                                     CS++;

                        }
                        else if (ch=="Spock") {
                                cout << "It's a draw!\n";
                        }
                        break;
                        }
        default : cout << "Wrong choice entered!\n";
        }
    }

}
