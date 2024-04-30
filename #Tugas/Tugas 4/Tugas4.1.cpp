#include <iostream>
using namespace std;

int main() {
    int jumlah_deret = 10;
    int hasil = 0;

    for (int i = 1; i <= jumlah_deret; ++i) {
        int bilangan_genap = 2 * i;
        hasil += bilangan_genap;

        cout << bilangan_genap;
        if (i < jumlah_deret) {
            cout << " + ";
        } else {
            cout << " = " << hasil << endl;
        }
    }

    return 0;
}

