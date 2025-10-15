#include <iostream>
#include <string>
using namespace std;

const int nMax = 51; 

struct Mahasiswa {
    string NIM;
    string nama;
    int nilai;
};


int nilaiPertama(Mahasiswa T[], int N, string NIM) {
    for (int i = 0; i < N; i++) {
        if (T[i].NIM == NIM) {
            return T[i].nilai;
        }
    }
    return -1; 
}

int main() {
    Mahasiswa T[nMax]; 
    int N = 8; 

    
    T[0] = {"114", "Nana", 97};
    T[1] = {"113", "Jojo", 70};
    T[2] = {"118", "Rere", 88};
    T[3] = {"116", "Koko", 40};
    T[4] = {"117", "Keke", 90};
    T[5] = {"113", "Jojo", 50};
    T[6] = {"113", "Jojo", 80};
    T[7] = {"119", "Roro", 100};

    string cariNIM;
    cout << "Masukkan NIM yang ingin dicari: ";
    cin >> cariNIM;

    int hasil = nilaiPertama(T, N, cariNIM);

    if (hasil != -1) {
        cout << "Nilai pertama mahasiswa dengan NIM " << cariNIM << " adalah: " << hasil << endl;
    } else {
        cout << "NIM tidak ditemukan!" << endl;
    }

    return 0;
}

