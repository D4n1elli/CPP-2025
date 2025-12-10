#include <iostream>
using namespace std;

// Code made in 10/12/2025

bool isprime(int num){
    if (num <= 1){return false;}
    int divisor = num - 1;

    bool isprime;

    for(divisor; divisor > 1; divisor--){
        if(num % divisor == 0){return false;}
    }




}

int main(){
    cout << "\nType a number to know if it is prime or not\n";
    cout << "Type 0 to finish the program\n\n";

    while (true){
        int number; cin >> number;

        if (number == 0){break;}
        bool result = isprime(number);

        if (result == true){cout << "Yes\n";}
        else {cout << "Nah\n";}
    }
    cout << "Finishing...\n"; return 0;
}