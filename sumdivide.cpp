#include <iostream>
using namespace std;
int main () {
    int n;
    int sum = 0;
    cout << "enter n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
       if(i % 3 == 0){
       sum += i;
    }
    }
    cout<<"divisible by " << n << sum << endl;
    return 0;
}