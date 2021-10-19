#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string GetUserName();
void GreetingPrompt(string userName);
int TotalTime(int prepTime, int cookTime);
void HowMuchTime();
void RandomDrink();
bool PlayAgain();

int main() {
    char userResponse;
    int prepTime;
    int cookTime;
    int totalTime;
    string userName;
    int i;

    do {
        GreetingPrompt(userName);
        cin >> userResponse;

        if (userResponse == 'y') {
            cout << "Do you have ingredients? Enter y/n" << endl;
            cin >> userResponse;
            if (userResponse == 'y') {
                HowMuchTime();
                cin >> prepTime >> cookTime;
                TotalTime(prepTime, cookTime);
                totalTime = TotalTime(prepTime, cookTime);
                if (totalTime < 20) {
                    cout << "You should make ramen for dinner." << endl;
                    RandomDrink();
                    cout << "THE END" << endl;
                } else if (totalTime >= 20) {
                    cout << "Do you feel lazy? Enter y/n" << endl;
                    cin >> userResponse;
                    if (userResponse == 'y') {
                        cout << "You should make Ramen for dinner." << endl;
                        RandomDrink();
                        cout << "THE END" << endl;
                    } else if (userResponse == 'n') {
                        cout << "You should make stir-fry for dinner" << endl;
                        RandomDrink();
                        cout << "THE END" << endl;
                    } else {
                        for (i = 0; i < 10; ++i) {
                            cout << "Please enter a valid input" << endl;
                            cin >> userResponse;

                            if (userResponse == 'y' || userResponse == 'n') {
                                break;
                            }
                        }
                    }
                } else {
                    for (i = 0; i < 10; ++i) {
                        cout << "Please enter a valid input" << endl;
                        cin >> userResponse;

                        if (userResponse == 'y' || userResponse == 'n') {
                            break;
                        }
                    }
                }

            } else if (userResponse == 'n') {
                cout << "Are you willing to go shopping? Enter y/n" << endl;
                cin >> userResponse;
                if (userResponse == 'y') {
                    HowMuchTime();
                    cin >> prepTime >> cookTime;
                    TotalTime(prepTime, cookTime);
                    totalTime = TotalTime(prepTime, cookTime);
                    if (totalTime < 20) {
                        cout << "You should make ramen for dinner." << endl;
                        RandomDrink();
                        cout << "THE END" << endl;
                    } else if (totalTime >= 20) {
                        cout << "Do you feel lazy? Enter y/n" << endl;
                        cin >> userResponse;
                        if (userResponse == 'y') {
                            cout << "You should make Ramen for dinner." << endl;
                            RandomDrink();
                            cout << "THE END" << endl;
                        } else if (userResponse == 'n') {
                            cout << "You should make stir-fry for dinner" << endl;
                            RandomDrink();
                            cout << "THE END" << endl;
                        } else {
                            for (i = 0; i < 10; ++i) {
                                cout << "Please enter a valid input" << endl;
                                cin >> userResponse;

                                if (userResponse == 'y' || userResponse == 'n') {
                                    break;
                                }
                            }
                        }
                    }

                } else if (userResponse == 'n') {
                    cout << "You should order take-out." << endl;
                    RandomDrink();
                    cout << "THE END" << endl;
                } else {
                    for (i = 0; i < 10; ++i) {
                        cout << "Please enter a valid input" << endl;
                        cin >> userResponse;

                        if (userResponse == 'y' || userResponse == 'n') {
                            break;
                        }
                    }
                }
            } else {
                for (i = 0; i < 10; ++i) {
                    cout << "Please enter a valid input" << endl;
                    cin >> userResponse;

                    if (userResponse == 'y' || userResponse == 'n') {
                        break;
                    }
                }
            }
        } else if (userResponse == 'n') {
            cout << "You should order take-out." << endl;
            RandomDrink();
            cout << "THE END" << endl;
        } else {
            for (i = 0; i < 10; ++i) {
                cout << "Please enter a valid input" << endl;
                cin >> userResponse;

                if (userResponse == 'y' || userResponse == 'n') {
                    break;
                }
            }
        }
    } while (PlayAgain());

    return 0;
}

void GreetingPrompt(string userName) {
    userName = GetUserName();
    int i;
    cout << "     ";
    for (i = 0; i < userName.size(); ++i){
        cout << ">";
    }
    cout << endl;
    cout << "Hey, " << userName << "!" << endl;
    cout << "     ";
    for (i = 0; i < userName.size(); ++i){
        cout << "<";
    }
    cout << endl;

    cout << "Every night you have to make the decision of what to eat for dinner. " << endl <<
         "As a college student you sometimes don't have time to even think about " << endl <<
         "what to eat. This program is designed to help you figure out what to " << endl <<
         "eat for dinner!" << endl << "It will also help you by providing a random drink generator. " << endl <<
         "First question, do you want to cook? Enter y/n" << endl;

}
int TotalTime(int prepTime, int cookTime) {
    int totalTime;
    totalTime = prepTime + cookTime;
    return totalTime;
}

string GetUserName() {
    string userName;
    cout << "Hello, please enter your first name." << endl;
    cin >> userName;
    return userName;
}

void HowMuchTime() {
    cout << "How much time do you have? Enter two numbers." << endl <<
         "The first is how much prep time you need and the second is how much cook time you need." << endl <<
         "Both will be in minutes." << endl;
}

void RandomDrink(){

    srand(time(nullptr));
    int drinkChoice = rand() % 3;
    if (drinkChoice == 0) {
        cout << "Your drink is water." << endl;
    }
    else if (drinkChoice == 1){
        cout << "Your drink is milk." << endl;
    }
    else if (drinkChoice == 2){
        cout << "Your drink is juice." << endl;
    }
}
bool PlayAgain(){
    char playAgainResponse;
    cout << "Would you like to play again? Enter y/n" << endl;
    cin >> playAgainResponse;
    if (playAgainResponse == 'y'){
        return true;
    }
    else {
        return false;
    }
}
