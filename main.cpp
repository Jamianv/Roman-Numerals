#include <string>
#include <iostream>
#include "romanType.h"
using namespace std;

int main(){
    string input;
    romanType romObject;
    for(;;){
        cout << "Please enter a roman numeral in capital letters: ";
        cin >> input;
        if(input == "quit")
            break;
        romObject.setRoman(input);
        romObject.convert();
        romObject.print("arabic");
        romObject.setArabic(0);
    }
    cout << "Thanks for using!" << endl;
}
