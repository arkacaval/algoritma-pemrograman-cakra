#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    double n1, n2, n3, rata;

    cout << "Masukkan nama siswa: ";
    getline(cin, nama);
    cout << "Masukkan Nilai Pertandingan I: ";
    cin >> n1;
    cout << "Masukkan Nilai Pertandingan II: ";
    cin >> n2;
    cout << "Masukkan Nilai Pertandingan III: ";
    cin >> n3;

    rata = (n1 + n2 + n3) / 3;

    cout << "Nama siswa  : " << nama << endl;
    cout << "Rata-rata   : " << rata << endl;

    if (rata >= 85)
        cout << "Hadiah      : Seperangkat mobil" << endl;
    else if (rata >= 70)
        cout << "Hadiah      : Uang Rp500.000" << endl;
    else
        cout << "Hadiah      : Hadiah hiburan" << endl;

    return 0;
}
