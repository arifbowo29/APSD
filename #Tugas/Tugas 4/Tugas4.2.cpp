#include <iostream>
using namespace std;

int main() {
    int jumlah_deret = 10;
    int hasil = 0;

    for (int i = 0; i < jumlah_deret; ++i) {
        int bilangan_ganjil = 2 * i + 1;
        hasil += bilangan_ganjil;

        cout << bilangan_ganjil;
        if (i < jumlah_deret - 1) {
            cout << " + ";
        } else {
            cout << " = " << hasil << endl;
        }
    }

    return 0;
}

