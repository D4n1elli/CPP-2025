#include <iostream>
using namespace std;

// Code made in  22/12/2025
// I made it watching a tutorial, i understood it, but still got
// a little confused at line 10

bool is_palindrom(string word){
    for (int i = 0; i < word.length()/2; i++){
        if (word[i] != word[word.length() - i - 1]){return false;}
    }
    return true;
}


int main(){
    cout << "Type a text to know if it is a palindrom\nType 0 to stop";

    string user_text;

    while(true){
        cin >> user_text;
        if (user_text == "0"){break;}
        bool palindrom = is_palindrom(user_text);
    
        if (palindrom == true){cout << "Yes!\n";} else{cout << "No\n";}
    }
}