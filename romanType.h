#ifndef ROMANTYPE_H
#define ROMANTYPE_H
#include <string>
using namespace std;

class romanType
{
    public:
        romanType(string = "", int = 0);
        void convert();
        void print(string) const;
        void setRoman(string);
        void setArabic(int);

    private:
        string romanNumeral;
        int arabicNumeral;
};

#endif // ROMANTYPE_H
