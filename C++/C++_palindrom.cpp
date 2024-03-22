#include <iostream>

bool estePalindrom(char* start, char* end) {
    while (start < end) {
        if (*start != *end) {
            return false; // Dacă se găsește o nepotrivire, array-ul nu este palindrom
        }
        start++; // Avansăm pointerul de start
        end--;   // Retrogradăm pointerul de sfârșit
    }
    return true; // Dacă toate elementele corespund, array-ul este palindrom
}

int main() {
    int n;
    std::cout << "Introduceți numărul de elemente din array: ";
    std::cin >> n;

    char arr[n];
    std::cout << "Introduceți elementele array-ului: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Apelăm funcția `estePalindrom` cu pointeri către începutul și sfârșitul array-ului
    if (estePalindrom(arr, arr + n - 1)) {
        std::cout << "Array-ul introdus este palindrom.\n";
    } else {
        std::cout << "Array-ul introdus nu este palindrom.\n";
    }

    return 0;
}
