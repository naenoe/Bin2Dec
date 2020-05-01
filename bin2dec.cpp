#include <iostream>
#include <string>
using namespace std;

int BinToDec(string number);

int main() 
{
    string eingabe;
    cout << "Bitte Zahl eingeben:" << endl;
    cin >> eingabe;
    if (eingabe.length() > 8)
    {
        cout << "Fehler, Eingabe zu lang!";
        return 1;
    } 
    cout << endl << BinToDec(eingabe);
    
}

int BinToDec(string number)
{
    int result = 0, pow = 1;
    for ( int i = number.length() - 1; i >= 0; --i, pow <<= 1 )
        result += (number[i] - '0') * pow;

    return result;
}