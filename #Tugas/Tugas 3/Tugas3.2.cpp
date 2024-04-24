#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaSiswa;
    float nilaiKeaktifan, nilaiTugas, nilaiUjian;
    float nilaiMurniKeaktifan, nilaiMurniTugas, nilaiMurniUjian;
    float nilaiAkhir;
    char grade;

    // Input data siswa
    cout << "Masukkan nama siswa: ";
    getline(cin, namaSiswa);
    cout << "Masukkan nilai keaktifan: ";
    cin >> nilaiKeaktifan;
    cout << "Masukkan nilai tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan nilai ujian: ";
    cin >> nilaiUjian;

    // Menghitung nilai murni
    nilaiMurniKeaktifan = nilaiKeaktifan * 0.20;
    nilaiMurniTugas = nilaiTugas * 0.30;
    nilaiMurniUjian = nilaiUjian * 0.50;

    // Menghitung nilai akhir
    nilaiAkhir = nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;

    // Menentukan grade
    if (nilaiAkhir > 80) {
        grade = 'A';
    } else if (nilaiAkhir > 70) {
        grade = 'B';
    } else if (nilaiAkhir > 56) {
        grade = 'C';
    } else if (nilaiAkhir > 46) {
        grade = 'D';
    } else {
        grade = 'E';
    }

	// Layar keluaran
    system("cls"); // Menghapus layar
    cout << "Siswa yang bernama " << namaSiswa << endl;
    cout << "Dengan nilai prestasi yang dihasilkan " << endl;
    cout << "Nilai keaktifan * 20% : " << nilaiKeaktifan * 0.20 << endl;
    cout << "Nilai Tugas * 30% : " << nilaiTugas * 0.30 << endl;
    cout << "Nilai Ujian * 50% : " << nilaiUjian * 0.50 << endl;
    cout << "Jadi siswa yang bernama " << namaSiswa  << "Memperoleh Nilai akhir sebesar " << nilaiAkhir << "dengan Grade " << grade << endl;

    return 0;
}

