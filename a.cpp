#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, A1, B1, A2, B2;
        cin >> A >> B >> A1 >> B1 >> A2 >> B2;

        bool firstMatch =
            (A == A1 && B == B1) || (A == B1 && B == A1);

        bool secondMatch =
            (A == A2 && B == B2) || (A == B2 && B == A2);

        if (firstMatch)
            cout << 1 << endl;
        else if (secondMatch)
            cout << 2 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}