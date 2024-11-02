#include <iostream>
using namespace std;
int fac(int n) {
    if (n==0  || n==1 ) {
        return 1;
    }
    return n*fac(n-1);

}
 int main (){
    int num = 5;
cout <<" factorial of  " << num <<" is "<< fac(num) << endl;
return 0;
 }
