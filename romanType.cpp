#include <string>
#include <iostream>
#include "romanType.h"
using namespace std;

romanType::romanType(string romNum, int arabNum){
    setRoman(romNum);
    setArabic(arabNum);
}

void romanType::setRoman(string romNum){
    romanNumeral = romNum;
}

void romanType::setArabic(int arabNum){
    arabicNumeral = arabNum;
}

void romanType::convert(){
    int romArray[10];
    int maximum;
    int romSize = romanNumeral.length()-1;
    for(int i = romSize; i >= 0; i--){
        if(romanNumeral.at(i) == 'I')
            romArray[i] = 1;
        if(romanNumeral.at(i) == 'V')
            romArray[i] = 5;
        if(romanNumeral.at(i) == 'X')
            romArray[i] = 10;
        if(romanNumeral.at(i) == 'L')
            romArray[i] = 50;
        if(romanNumeral.at(i) == 'C')
            romArray[i] = 100;
        if(romanNumeral.at(i) == 'D')
            romArray[i] = 500;
        if(romanNumeral.at(i) == 'M')
            romArray[i] = 1000;
    }
    maximum = romArray[romSize];
    arabicNumeral = maximum;
    for(int i = romSize - 1; i >= 0; i--){
        if(romArray[i] > maximum)
            arabicNumeral += romArray[i];
        else
            arabicNumeral -= romArray[i];
    }
}

void romanType::print(string choice) const{
    if(choice == "arabic")
        cout << "Your arabic numeral is: "
        << arabicNumeral << endl;
    if(choice == "roman")
        cout << "Your roman numeral is: "
        << romanNumeral << endl;
}

