#include <iostream>
using namespace std;

int main() {
    int A = 3, B = 6, C = 2, K = 5, L = 4, M = 3;

    cout << "Nilai: A=" << A << " B=" << B << " C=" << C
         << " K=" << K << " L=" << L << " M=" << M << endl << endl;

    // a. 4 + 2 > A && B - 2 > 3 + 2 || B + 2 <= 6 + 2
    int a1 = (4 + 2 > A);          // 6 > 3
    int a2 = (B - 2 > 3 + 2);      // 4 > 5
    int a3 = (B + 2 <= 6 + 2);     // 8 <= 8
    int a  = (4 + 2 > A && B - 2 > 3 + 2 || B + 2 <= 6 + 2);
    cout << "a. (4+2>A)=" << a1 << ", (B-2>3+2)=" << a2
         << ", (B+2<=6+2)=" << a3 << endl;
    cout << "   (" << a1 << " && " << a2 << ") || " << a3
         << "  => Hasil a = " << a << endl << endl;

    // b. K + 5 < M || (C * M < L && 2 * M - L > 0)
    int b1 = (K + 5 < M);          // 10 < 3
    int b2 = (C * M < L);          // 6 < 4
    int b3 = (2 * M - L > 0);      // 2 > 0
    int b  = (K + 5 < M || (C * M < L && 2 * M - L > 0));
    cout << "b. (K+5<M)=" << b1 << ", (C*M<L)=" << b2
         << ", (2*M-L>0)=" << b3 << endl;
    cout << "   " << b1 << " || (" << b2 << " && " << b3
         << ")  => Hasil b = " << b << endl << endl;

    // c. L + 5 < M || C * K < L && 2 * K - L > 0
    int c1 = (L + 5 < M);          // 9 < 3
    int c2 = (C * K < L);          // 10 < 4
    int c3 = (2 * K - L > 0);      // 6 > 0
    int c  = (L + 5 < M || C * K < L && 2 * K - L > 0);
    cout << "c. (L+5<M)=" << c1 << ", (C*K<L)=" << c2
         << ", (2*K-L>0)=" << c3 << endl;
    cout << "   " << c1 << " || (" << c2 << " && " << c3
         << ")  => Hasil c = " << c << endl << endl;

    // d. A * 4 <= 3 * M + B
    int d = (A * 4 <= 3 * M + B);  // 12 <= 15
    cout << "d. A*4=" << A * 4 << ", 3*M+B=" << 3 * M + B
         << "  => Hasil d = " << d << endl << endl;

    // e. K + 10 > A && L - 2 > 4 * C
    int e1 = (K + 10 > A);         // 15 > 3
    int e2 = (L - 2 > 4 * C);      // 2 > 8
    int e  = (K + 10 > A && L - 2 > 4 * C);
    cout << "e. (K+10>A)=" << e1 << ", (L-2>4*C)=" << e2 << endl;
    cout << "   " << e1 << " && " << e2 << "  => Hasil e = " << e << endl;

    return 0;
}
