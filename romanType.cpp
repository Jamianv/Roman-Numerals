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
    int angka[10];
    int maximum;
    int romSize = romanNumeral.length()-1;
    for(int i = romSize; i >= 0; i--){
        if(romanNumeral.at(i) == 'I')
            angka[i] = 1;
        if(romanNumeral.at(i) == 'V')
            angka[i] = 5;
        if(romanNumeral.at(i) == 'X')
            angka[i] = 10;
        if(romanNumeral.at(i) == 'L')
            angka[i] = 50;
        if(romanNumeral.at(i) == 'C')
            angka[i] = 100;
        if(romanNumeral.at(i) == 'D')
            angka[i] = 500;
        if(romanNumeral.at(i) == 'M')
            angka[i] = 1000;
    }
    maximum = angka[romSize];
    arabicNumeral = maximum;
    for(int i = romSize - 1; i >= 0; i--){
        if(angka[i] > maximum)
            arabicNumeral += angka[i];
        else
            arabicNumeral -= angka[i];
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

