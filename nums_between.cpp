#include <iostream>
using namespace std;

// Code made in 04/12/2025

int fct_main_code();

//Returns the amount of numbers between start & end
int fct_nums_in(int s, int e){
    int nums_between = 0;
    for(int i = s+1; i < e; i++){nums_between += 1;}

    return nums_between;
}

//Returns the sum of them all
int fct_sum(int s, int e){
    int total = 0;
    for(int i = s+1; i < e; i++){total += i;}
    return total;
}

//Returns the ammount of negative numbers
int fct_negatives_num(int s, int e){
    int count = 0;
    for(int i = s+1; i < e; i++){
        if(i < 0){count++;}
    }
    return count;
}

//Returns the ammount of positive numbers
int fct_positive_nums(int s, int e){
    int count = 0;
    for(int i = s+1; i < e; i++){
        if(i > 0){count++;}
    }
    return count;
}

//Returns the ammount of evens
int fct_even(int s, int e){
    int evens = 0;
    for(int i = s+1; i < e; i++){
        if (i%2 == 0){evens++;}
    }
    return evens;
}


// Main
int main (){
    cout << "Digit a start and an end to know about the numbers between them!\n";
    cout << "Numbers must be at least 2 apart and start can't be higher than the end.\n";
    cout << "Digit 0 in both inputs to finish the program. \n\n";
    
    int again = fct_main_code();
    while(again != 0){
        again = fct_main_code();
    }
    cout << "Finishing...";
    return 0;
}

// >> MAIN CODE <<
int fct_main_code(){
    int start, end;
//inputs
    while(true){
        cout << "The start: \n"; cin >> start;
        cout << "The end: \n"; cin >> end;
        if (start == end && end == 0){return 0;}
        else if(start > end){cout<< "Sorry, end must be higher than start\n\n";}
        else if (start == end){cout<< "Sorry, numbers must be different\n\n";}
        else if (start+1 == end){cout<< "Sorry, numbers must be at least 2 apart.\n\n";}
        else{break;}
    }

// Variables
    int var_numbs_between = fct_nums_in(start, end);
    int var_sum_total = fct_sum(start, end);
    float var_average = (double)var_sum_total / var_numbs_between;
    int var_negatives = fct_negatives_num(start, end);
    int var_positives = fct_positive_nums(start, end);
    int var_evens = fct_even(start, end);
    int var_odds = var_numbs_between - var_evens;

//Outputs
    cout << "There are "<< var_numbs_between << " numbers between " << start << " and " << end << "\n";
    cout << "The sum of all of them is " << var_sum_total << "\n";
    cout << "Their average is "<< var_average << "\n";
    cout << "There are "<< var_negatives << " negative numbers and " << var_positives << " positives.\n";
    cout << var_evens << " are even, " << var_odds << " are odds\n\n";
    return 1;
}