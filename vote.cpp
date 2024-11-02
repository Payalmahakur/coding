#include <iostream>
using namespace std;
 int main () {
    int age;
    cout <<"enter age: ";
    cin >> age;
    if (age>=18) {
        cout << "eligible to vote \n";
    } else {
        cout << "not eligible to vote\n";
    }
    return 0;
 }