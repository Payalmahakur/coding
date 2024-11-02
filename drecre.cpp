#include <iostream>
using namespace std;
 int main () {
    int a =10;

    int b= --a;
    cout << "b = "<< b << endl;
    cout << "a = "<< a << endl;
    
    int c =10;

    int d= a--;
    cout<<"d=  " << d << endl;
    cout<<"c = " << c << endl;
    return 0;
 }