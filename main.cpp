#include <iostream>
#include <string>
using namespace std;

string GetUserName();
void GreetingPrompt(string userName);
int TotalTime(int prepTime, int cookTime);
void HowMuchTime();

int main() {
    char userResponse;
    int prepTime;
    int cookTime;
    int totalTime;
    string userName;
    cout << "Hello, World!" << endl;

    GreetingPrompt(userName);
    cin >> userResponse;

    if (userResponse == 'y'){
        cout << "Do you have ingredients? Enter y/n" << endl;
        cin >> userResponse;
        if (userResponse == 'y') {
            HowMuchTime();
            cin >> prepTime >> cookTime;
            TotalTime(prepTime, cookTime);
            totalTime = TotalTime(prepTime, cookTime);
            if (totalTime < 20){
                cout << "You should make ramen for dinner." << endl;
                cout << "THE END" << endl;
            }
            else if (totalTime >= 20){
                cout << "Do you feel lazy? Enter y/n" << endl;
                cin >> userResponse;
                if (userResponse == 'y'){
                    cout << "You should make Ramen for dinner." << endl;
                    cout << "THE END" << endl;
                }
                else if (userResponse == 'n'){
                    cout << "You should make stir-fry for dinner" << endl;
                    cout << "THE END" << endl;
                }
                else {
                    cout << "Please enter a valid input." << endl;
                }
            }
            else {
                cout << "Please enter a valid input." << endl;
            }

        }
        else if (userResponse == 'n'){
            cout << "Are you willing to go shopping? Enter y/n" << endl;
            cin >> userResponse;
            if (userResponse == 'y'){
                HowMuchTime();
                cin >> prepTime >> cookTime;
                TotalTime(prepTime, cookTime);
                totalTime = TotalTime(prepTime, cookTime);
                if (totalTime < 20){
                    cout << "You should make ramen for dinner." << endl;
                    cout << "THE END" << endl;
                }
                else if (totalTime >= 20){
                    cout << "Do you feel lazy? Enter y/n" << endl;
                    cin >> userResponse;
                    if (userResponse == 'y'){
                        cout << "You should make Ramen for dinner." << endl;
                        cout << "THE END" << endl;
                    }
                    else if (userResponse == 'n'){
                        cout << "You should make stir-fry for dinner" << endl;
                        cout << "THE END" << endl;
                    }
                    else {
                        cout << "Please enter a valid input." << endl;
                    }
                }

            }
            else if(userResponse == 'n') {
                cout << "You should order take-out." << endl;
                cout << "THE END" << endl;
            }
            else {
                cout << "Please enter a valid input." << endl;
            }
        }
        else{
            cout << "Please enter a valid input." << endl;
        }
    }
    else if (userResponse == 'n'){
        cout << "You should order take-out." << endl;
        cout << "THE END" << endl;
    }
    else {
        cout << "Please enter a valid input." << endl;
    }

    return 0;
}

void GreetingPrompt(string userName) {
    userName = GetUserName();
    cout << "Hey, " << userName << "! Every night you have to make the decision of what to eat for dinner. " << endl <<
         "As a college student you sometimes don't have time to even think about " << endl <<
         "what to eat. This program is designed to help you figure out what to " << endl <<
         "eat for dinner!" << endl << "First question, do you want to cook? Enter y/n" << endl;
}
int TotalTime(int prepTime, int cookTime) {
    int totalTime;
    totalTime = prepTime + cookTime;
    return totalTime;
}

string GetUserName() {
    string userName;
    cout << "Hello, please enter your first name." << endl;
    getline(cin, userName);
    return userName;
}

void HowMuchTime() {
    cout << "How much time do you have? Enter two numbers." << endl <<
         "The first is how much prep time you need and the second is how much cook time you need." << endl <<
         "Both will be in minutes." << endl;
}