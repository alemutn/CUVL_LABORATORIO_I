#include <iostream>

using namespace std;

int factorial(int n){

    if(n==0){
        return 1;
    }

    return n * factorial(--n);
}

int main () {
    cout << factorial(4) << endl;
    return 0;
}