#include <iostream>
using namespace std;

int number_choose();

// Checks if number is prime
bool is_prime(int num){
    if (num <= 1){return false;}
    int divisor = num - 1;

    for(divisor; divisor > 1; divisor--){
        if(num % divisor == 0){return false;}
    }
    return true;
}

// Checks if number is triangular
bool is_triangular(int num){
    if (num < 1){return false;}

    int sum = 0;
    for(int i = 1; sum < num; i++){
        sum += i;}
    if (sum == num){return true;}
    else{return false;}
}

// Makes the variables and prints it
int checks_and_outputs(){
    int number = number_choose();
    bool prime = is_prime(number);
    bool triangular = is_triangular(number);
    bool positive; if (number > 0){positive = true;} else if (number < 0) {positive = false;}

// Couts
    if(prime == true){cout << "Is prime\n";} else {cout << "Is not prime\n";}
    if(triangular == true){cout << "Is triangular\n";} else {cout << "Is not triangular\n";}
    if (number == 0){cout << "Is neutral\n";} else if(positive == true){cout << "Is positive\n";} else {cout << "Is negative\n";}
    return number;
}

// Choose the number
int number_choose(){
    int number;
    cin >> number;
    return number;
}

int main(){
    cout << "\nType a number to know some info about it\nType 0 to finish the program.\n\n";

    int run = checks_and_outputs();
    while (run != 0){
        run = checks_and_outputs();
    }

    cout << "Finishing...\n";
    return 0;
}
