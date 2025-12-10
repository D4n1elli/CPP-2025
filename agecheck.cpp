#include <iostream>
using namespace std;

//Code made in 10/12/2025

string age_group(int age){
    if (age == 0){return "Baby";}
    if (age > 0 && age <= 1){return "infant";}
    if (age > 1 && age <= 3){return "toddler";}
    if (age > 3 && age <= 12){return "child";}
    if (age > 12 && age <= 17){return "teenager";}
    if (age > 17 && age <= 29){return "young adult";}
    if (age > 29 && age <= 60){return "adult";}
    return "senior";
}



int main(){
    cout << "How old are you?\nDigit a negative number to finish";
    int user_age;
    
    while (true){
        cin >> user_age;
        if(user_age < 0){break;}
        string agegroup = age_group(user_age);

        cout << "You are a/an " << agegroup << "\n";
    }
}