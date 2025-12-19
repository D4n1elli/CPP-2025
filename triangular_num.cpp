#include <iostream>
using namespace std;

// Made in 18/12/2025

bool is_triangular(int num){
    if (num < 1){return false;}

    int sum = 0;
    for(int i = 1; sum < num; i++){
        sum += i;}
    if (sum == num){return true;}
    else{return false;}
}



int main(){
    cout << "Triangular numbers\n";
    cout << "Type a number to know if it is triangular!\nType 0 to stop.\n\n";
    
    while (true){
        int number; cin >> number; if (number == 0){break;}

        bool result = is_triangular(number);
        if (result == true){cout << "Yes!\n";} else{cout << "No\n";}
    }
}
