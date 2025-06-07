#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    while (N--) {
        int a;
        cin >> a;
        if (a == X) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
