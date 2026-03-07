#include <iostream>

using namespace std;

int main() {
    int x = 42;
    int* ptr = &x;

    cout << "Valor de x: " << x << endl;
    cout << "Direccion de x: " << &x << endl;
    cout << "Valor apuntado por ptr: " << *ptr << endl;

    return 0;
}
