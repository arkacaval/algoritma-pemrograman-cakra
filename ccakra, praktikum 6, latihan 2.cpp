
#include <iostream>
using namespace std;

int main() {
    int nilai;
    int kehadiran;

    cout << "Masukkan nilai ujian (0-100): ";
    cin >> nilai;
    cout << "Masukkan persentase kehadiran (0-100): ";
    cin >> kehadiran;

    if (nilai >= 60) {
        // nested if: cek kehadiran jika nilai cukup
        if (kehadiran >= 75) {
            // nested if: tentukan predikat
            if (nilai >= 85) {
                cout << "LULUS dengan predikat A";
            } else if (nilai >= 70) {
                cout << "LULUS dengan predikat B";
            } else {
                cout << "LULUS dengan predikat C";
            }
        } else {
            cout << "TIDAK LULUS (kehadiran kurang dari 75%)";
        }
    } else {
        cout << "TIDAK LULUS (nilai kurang dari 60)";
    }

    return 0;
}

