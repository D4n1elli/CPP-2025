#include <iostream>
using namespace std;

// Code made in 04/12/2025

int main_code();

//Returns the amount of numbers between start & end
int nums_in(int s, int e){
    int nums_between = 0;
    for(int i = s+1; i < e; i++){nums_between += 1;}

    return nums_between;
}

//Returns the sum of them all
int sum(int s, int e){
    int total = 0;
    for(int i = s+1; i < e; i++){total += i;}
    return total;
}

//Returns the ammount of negative numbers
int negatives_num(int s, int e){
    int count = 0;
    for(int i = s+1; i < e; i++){
        if(i < 0){count++;}
    }
    return count;
}

//Returns the ammount of positive numbers
int positive_nums(int s, int e){
    int count = 0;
    for(int i = s+1; i < e; i++){
        if(i > 0){count++;}
    }
    return count;
}

//Returns the ammount of evens
int even(int s, int e){
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
    
    int again = main_code();
    while(again != 0){
        again = main_code();
    }
    cout << "Finishing...";
    return 0;
}

// >> MAIN CODE <<
int main_code(){
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
    int numbs_between = nums_in(start, end);
    int sum_total = sum(start, end);
    float average = (double)sum_total / numbs_between;
    int negatives = negatives_num(start, end);
    int positives = positive_nums(start, end);
    int evens = even(start, end);
    int odds = numbs_between - evens;

//Outputs
    cout << "There are "<< numbs_between << " numbers between " << start << " and " << end << "\n";
    cout << "The sum of all of them is " << sum_total << "\n";
    cout << "Their average is "<< average << "\n";
    cout << "There are "<< negatives << " negative numbers and " << positives << " positives.\n";
    cout << evens << " are even, " << odds << " are odds\n\n";
    return 1;
}
