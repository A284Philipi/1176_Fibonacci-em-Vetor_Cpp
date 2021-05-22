#include <iostream>

using namespace std;

int main()
{
    long long int a, x = 0, y = 1, valor, cont = 2, casos, cont2 = 0;
    cin >> casos;
    while (cont2 < casos){
        cin >> valor;
        cout << "Fib(" << valor << ") = ";
        if (valor == 0){
            y = 0;
        }else{
            x = 0;
            y = 1;
            while (cont < valor + 1){
                a = y;
                y = x + y;
                x = a;
                cont++;
            }
        }
        cout << y <<endl;
        cont = 2;
        cont2++;
    }
    return 0;
}
