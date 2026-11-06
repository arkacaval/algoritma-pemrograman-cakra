#include <iostream>
#include <string>
using namespace std;

int main() {
    string npm, nama;
    double t1, t2, t3, rata;

    cout << "Masukkan NPM: ";
    getline(cin, npm);
    cout << "Masukkan nama: ";
    getline(cin, nama);
    cout << "Masukkan nilai Tugas I: ";
    cin >> t1;
    cout << "Masukkan nilai Tugas II: ";
    cin >> t2;
    cout << "Masukkan nilai Tugas III: ";
    cin >> t3;

    rata = (t1 + t2 + t3) / 3;

    cout << "NPM " << npm << ", siswa bernama " << nama
         << " memperoleh nilai rata-rata " << rata
         << " dari hasil tugas yang diikutinya." << endl;
    return 0;
}
