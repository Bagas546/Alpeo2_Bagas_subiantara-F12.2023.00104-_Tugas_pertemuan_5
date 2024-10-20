#include <iostream>

using namespace std;

void CariDanCetak(int X, int arr[], int n) {
    bool isFound = false;

    for (int i = 0; i < n; i++) {
        if (X == arr[i] && X % 2 == 0) {
            cout << "Bilangan Genap " << X << " ditemukan." << endl;
            isFound = true;
            break;
        }
        else if (X == arr[i]) {
            cout << "Bilangan " << X << " ditemukan, tetapi bilangan tersebut adalah ganjil." << endl;
            isFound = true;
            break;
        }
    }

    if (!isFound) {
        cout << "Bilangan " << X << " tidak ditemukan." << endl;
        cout << "Karena nilai yang dimasukkan tidak ada dalam bilangan yang ditentukan." << endl;
    }
}

int main() {

    int X, arr[] = {0, 2, 2, 3, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Masukkan X yang dicari: ";
    cin >> X;

    CariDanCetak(X, arr, n);

    return 0;
}

