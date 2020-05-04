#include <iostream>

using namespace std;

int fibonacci(int termino){

    if(termino <= 1){
        return termino;
    }

    return fibonacci(termino - 1) + fibonacci(termino - 2);
}

int main () {

    int termino = 0;
    
    cout << "Ingrese cantidad de terminos: ";
    cin >> termino;
    cout << endl;

    cout << fibonacci(termino) << endl;
    return 0;
}