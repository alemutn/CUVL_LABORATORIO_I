#include <iostream>

using namespace std;

int main () {
    int v1[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> v1[i];
    }

    int s = 0;
    for (int i = 0; i < 3; i++)
    {
        s = s + v1[i];
    }

    int aux;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - i - 1; j++)
        {
            if (v1[j] >= v1[j + 1])
            {
                aux = v1[j];
                v1[j] = v1[j + 1];
                v1[j + 1] = aux;
            }
        }
    }

    float p = s / 3.0;
    if( p > 5){
        for (int i = 0; i < 3; i++)
        {
            cout << v1[i] << endl;
        }
    }
    else
    {
        for (int i = 2; i >= 0; i--)
        {
            cout << v1[i] << endl;
        }
    }
    
    return 0;
}
