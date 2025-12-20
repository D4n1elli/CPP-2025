#include <iostream>
using namespace std;

//Code made in 19/12/2025

int number_choose();

int divisors_amount(int num){
    if (num == 1){return 1;}
    int divisors = 1;

    if (num < 0){return 0;}
    for(int divisor = num/2; divisor>=1; divisor--){
        if (num%divisor == 0){divisors++;}
    }
    return divisors;
}

// After making the divisors function I realized I could simply make it prime or not by using the divisors variable
// But i'll keep the prime function to show i did it

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

// Checks if number is perfect square
bool is_perfectsquare(int num){
    if (num < 0){return false;}
    for (int i = 0; i <= num; i++){
        if (i*i == num){return true;}
    }
    return false;
}

// Makes the variables and prints it
int checks_and_outputs(){
    int number = number_choose();
    bool prime = is_prime(number);
    bool triangular = is_triangular(number);
    bool positive; if (number > 0){positive = true;} else if (number < 0) {positive = false;}
    bool even; if (number % 2 == 0){even = true;} else {even = false;}
    bool perfect_square = is_perfectsquare(number);
    int divisors = divisors_amount(number);

    // Couts
    if (number != 0){cout << "It has "<< divisors << " divisors\n";}
    else {cout << "0 has infinite divisors\n";}

    if(prime == true){cout << "Is prime\n";} else {cout << "Is not prime\n";}
    if(triangular == true){cout << "Is triangular\n";} else {cout << "Is not triangular\n";}
    if (number == 0){cout << "Is neutral\n";} else if(positive == true){cout << "Is positive\n";} else {cout << "Is negative\n";}
    if(even == true){cout << "Is even\n";} else {cout << "Is odd\n";}   
    if(perfect_square == true){cout << "Is a perfect square\n";} else {cout << "Is not a perfect square\n\n";}  
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
