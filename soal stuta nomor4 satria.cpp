#include <iostream>
using namespace std;

void Tukar1(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}


void Tukar2(int a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;

    a = 10;
    b = 5;

    Tukar1(b, a); 
    Tukar2(a, b); 

    cout << "Nilai akhir a = " << a << endl;
    cout << "Nilai akhir b = " << b << endl;

    return 0;
}

