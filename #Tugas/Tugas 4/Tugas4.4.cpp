#include <iostream>
using namespace std;

int main() {
    int tinggi_segitiga = 5;

    for (int i = 1; i <= tinggi_segitiga; ++i) {
        long long hasil = 1; // gunakan tipe data long long untuk mengatasi angka yang besar
    
        for (int j = 1; j <= i; ++j) {
            int bilangan_ganjil = 2 * j - 1;
            hasil *= bilangan_ganjil;
            cout << bilangan_ganjil;
            if (j < i) {
                cout << " * ";
            } else {
                cout << " = " << hasil << endl;
            }
        }
    }

    return 0;
}

