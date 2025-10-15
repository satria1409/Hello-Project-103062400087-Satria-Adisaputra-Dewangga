#include <iostream>
using namespace std;

int main() {
    int angka;
    double total = 0;
    int jumlah = 0;

    cout << "Masukkan angka satu per satu (akhiri dengan -999): " << endl;

    do {
        cin >> angka; 
        if (angka != -999) { 
            total += angka;  
            jumlah++;        
        }
    } while (angka != -999); 

    if (jumlah != 0) { 
        double rata_rata = total / jumlah; 
        cout << "Rata-rata: " << rata_rata << endl;
    } else { 
        cout << "Rata-rata: 0" << endl;
    }

    return 0;
}

