#include <iostream>
using namespace std;

int main() {
    int tinggi_segitiga = 5;

    for (int i = 1; i <= tinggi_segitiga; ++i) {
        int jumlah = 0;
        for (int j = 1; j <= i; ++j) {
            int bilangan_genap = 2 * j;
            jumlah += bilangan_genap;
            cout << bilangan_genap;
            if (j < i) {
                cout << " + ";
            } else {
                cout << " = " << jumlah << endl;
            }
        }
    }

    return 0;
}

