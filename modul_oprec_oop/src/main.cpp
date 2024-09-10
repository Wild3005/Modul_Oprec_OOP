#include"../include/operasi.hpp"
#include<iostream>
using namespace std;

int main() {
    int jml_input;
    int bil1 = 0, bil2 = 0;
    Operasi* hasil = nullptr;

    cout << "Pilih input bilangan:" << endl;
    cin >> jml_input;

    if (jml_input == 1) {
        cin >> bil1;
    } else if (jml_input == 2) {
        cin >> bil1 >> bil2;
    }

    Penjumlahan penjumlahan(bil1, bil2);
    Pengurangan pengurangan(bil1, bil2);
    Perkalian perkalian(bil1, bil2);
    Pembagian pembagian(bil1, bil2);
    Modulo modulo(bil1, bil2);

    cout << "Hasil Penjumlahan: " << penjumlahan.hitung() << endl;
    cout << "Hasil Pengurangan: " << pengurangan.hitung() << endl;
    cout << "Hasil Perkalian: " << perkalian.hitung() << endl;
    cout << "Hasil Pembagian: " << pembagian.hitung() << endl;
    cout << "Hasil Modulo: " << modulo.hitung() << endl;

    return 0;
}
