#include <iostream>
using namespace std;

//Code made in 11/12/2025

int difficulty_select();

void level_easy(){
    cout << "Easy: from 1 to 20\n";

    int answer = 8;
    int guess; int attempts = 0;
    while (true){
        cin >> guess;
        if (guess == answer){break;}
        else{attempts++;}

        if(guess < 1 || guess > 20){cout << "Try staying between 1 and 20.";}

        if (guess > answer){cout << "Try a lower number\n";}
        else if (guess < answer){cout << "Try a higher number\n";}
    }
    cout << "You solved it with " << attempts << " attempts!\n";
}

void level_medium(){
    cout << "Medium: from 1 to 100\n";

    int answer = 47;
    int guess; int attempts = 0;
    while (true){
        cin >> guess;
        if (guess == answer){break;}
        else{attempts++;}

        if(guess < 1 || guess > 100){cout << "Try staying between 1 and 100.";}

        if (guess > answer){cout << "Try a lower number\n";}
        else if (guess < answer){cout << "Try a higher number\n";}
    }
    cout << "You solved it with " << attempts << " attempts!\n";
}

void level_hard(){
    cout << "Medium: from 1 to 1000\n";

    int answer = 812;
    int guess; int attempts = 0;
    while (true){
        cin >> guess;
        if (guess == answer){break;}
        else{attempts++;}

        if(guess < 1 || guess > 1000){cout << "Try staying between 1 and 1000.";}

        if (guess > answer){cout << "Try a lower number\n";}
        else if (guess < answer){cout << "Try a higher number\n";}
    }
    cout << "You solved it with " << attempts << " attempts!\n";
}





int main(){
    cout << "\nGuess the number!\nSelect a difficulty by typing it's number:\nType 0 to leave\n";
    cout << "1 - Easy: from 1 to 20,  2 - Medium: from 1 to 100, 3 - Hard: from 1 to 1000\n";

    int again = difficulty_select();
    while (again != 0){
        again = difficulty_select();
    }
    cout << "Thanks for playing!";
}

int difficulty_select(){
    int difficulty;

    while(true){
        cout << "Difficulty number: "; cin >> difficulty; cout << "\n";
        if (difficulty == 0){return 0;}
        if (difficulty < 0 || difficulty > 3){cout << "Type a valid difficulty\n";} else{break;}
    }
    
    if (difficulty == 1){level_easy();}
    else if (difficulty == 2){level_medium();}
    else if (difficulty == 3){level_hard();}
}