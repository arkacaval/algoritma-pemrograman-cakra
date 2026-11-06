#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    double aktif, tugas, ujian;

    cout << "Masukkan nama siswa: ";
    getline(cin, nama);
    cout << "Masukkan nilai keaktifan: ";
    cin >> aktif;
    cout << "Masukkan nilai tugas: ";
    cin >> tugas;
    cout << "Masukkan nilai ujian: ";
    cin >> ujian;

    double mAktif = aktif * 0.20;
    double mTugas = tugas * 0.30;
    double mUjian = ujian * 0.50;
    double akhir  = mAktif + mTugas + mUjian;

    cout << "Nama siswa            : " << nama << endl;
    cout << "Nilai keaktifan (20%) : " << mAktif << endl;
    cout << "Nilai tugas (30%)     : " << mTugas << endl;
    cout << "Nilai ujian (50%)     : " << mUjian << endl;
    cout << "Nilai akhir           : " << akhir << endl;
    return 0;
}
