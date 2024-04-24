#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaSiswa;
    float nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3;
    float nilaiRataRata;

    // Input data siswa
    cout << "Masukkan nama siswa: ";
    getline(cin, namaSiswa);
    cout << "Masukkan nilai pertandingan I: ";
    cin >> nilaiPertandingan1;
    cout << "Masukkan nilai pertandingan II: ";
    cin >> nilaiPertandingan2;
    cout << "Masukkan nilai pertandingan III: ";
    cin >> nilaiPertandingan3;

    // Menghitung nilai rata-rata
    nilaiRataRata = (nilaiPertandingan1 + nilaiPertandingan2 + nilaiPertandingan3) / 3;

    // Menentukan juara
    string juara;
    if (nilaiRataRata > 80) {
        juara = "Juara I";
    } else if (nilaiRataRata > 75) {
        juara = "Juara II";
    } else if (nilaiRataRata > 65) {
        juara = "Juara III";
    } else {
        juara = "Tidak Juara";
    }
	// Layar keluaran
    system("cls"); // Menghapus layar
    cout << "\n=== Hasil Penilaian ===\n";
    cout << "Siswa yang bernama " << namaSiswa << endl;
    cout << "Memperoleh nilai rata-rata " << nilaiRataRata << endl;
    cout << "dan menjadi " << juara << endl;
    cout << "dari hasil perlombaan yang diikutinya " << endl;
    
    return 0;
}

