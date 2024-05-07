#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pilih pivot sebagai elemen terakhir
    int i = (low - 1); // Indeks dari elemen yang lebih kecil dari pivot

    for (int j = low; j <= high - 1; j++) {
        // Jika elemen saat ini lebih kecil dari atau sama dengan pivot
        if (arr[j] <= pivot) {
            i++; // Tingkatkan indeks dari elemen yang lebih kecil
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi adalah indeks partisi, arr[pi] sekarang pada posisi yang tepat
        int pi = partition(arr, low, high);

        // Pisahkan elemen yang lebih kecil sebelum partisi dan elemen yang lebih besar setelahnya
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Masukkan panjang array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Array sebelum diurutkan: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    std::cout << "Array setelah diurutkan: ";
    printArray(arr, n);
    
    return 0;
}

