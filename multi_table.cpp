#include <iostream>
using namespace std;

// Made in 03/12/2025

int mainCode();

void multi_table(int number, int start, int end){
    for(start; start <= end; start++){
        cout << number << " x " << start << " = " << number*start << endl;
    }
}

int main(){
    cout << "Digit 3 numbers to make a multiplication table! :)\n";
    cout << "Digit 0 in all 3 to finish the program.\n\n";

    int again = mainCode();
    while (again != 0){
        again = mainCode();
    }
    cout << "Finishing...";
}

int mainCode(){
    int n, s, e;
        cout << "The main number: \n"; cin >> n;
    while (true){
        cout << "The start: \n"; cin >> s;
        cout << "The end: \n"; cin >> e;

        if (n == 0 && s == 0 && e == 0){return 0;}
        else if (s > e){cout << "Sorry, end needs to be higher than start.\n"; continue;}
        else{break;}
    }
    multi_table(n, s, e);
    return 1;
}