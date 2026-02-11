#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    cout << "Enter your name: ";
    string name;
    getline(cin, name);
    cout << "Please enter Birth Month (1-12): ";
    int month;
    cin >> month;
    cout << "Please enter Birth Day (1-31): ";
    int day;
    cin >> day;
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        cout << name << ", your zodiac sign is Aries." << endl;
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        cout << name << ", your zodiac sign is Taurus." << endl;
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        cout << name << ", your zodiac sign is Gemini." << endl;
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        cout << name << ", your zodiac sign is Cancer." << endl;
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        cout << name << ", your zodiac sign is Leo." << endl;
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        cout << name << ", your zodiac sign is Virgo." << endl;
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        cout << name << ", your zodiac sign is Libra." << endl;
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        cout << name << ", your zodiac sign is Scorpio." << endl;
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        cout << name << ", your zodiac sign is Sagittarius." << endl;
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        cout << name << ", your zodiac sign is Capricorn." << endl;
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        cout << name << ", your zodiac sign is Aquarius." << endl;
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        cout << name << ", your zodiac sign is Pisces." << endl;
    } else {
        cout << "Invalid date entered." << endl;
    }
}