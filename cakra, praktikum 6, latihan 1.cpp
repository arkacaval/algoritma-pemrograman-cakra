#include <iostream>
using namespace std;

int main() {
    int hari;

    cout << "Masukkan angka hari (1-7): ";
    cin >> hari;

    switch (hari) {
        case 1:
            cout << "MONDAY";
            break;
        case 2:
            cout << "TUESDAY";
            break;
        case 3:
            cout << "WEDNESDAY";
            break;
        case 4:
            cout << "THURSDAY";
            break;
        case 5:
            cout << "FRIDAY";
            break;
        case 6:
            cout << "SATURDAY";
            break;
        case 7:
            cout << "SUNDAY";
            break;
        default:
            cout << "Angka tidak valid (harus 1-7)";
            break;
    }

    return 0;
}

