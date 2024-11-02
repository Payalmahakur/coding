#include <iostream>
using namespace std;
 int main () {
    char ch;
    cout <<"enter char: ";
    cin >> ch;
    if (ch >='a'&& ch <='z') {
        cout << "Lowecase \n";
    } else {
        cout << "Upprcase \n";
    }
    return 0;
 }