#include <iostream>

using namespace std;

int main() {
    int n, summ=0, k; cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> k;
        summ ^= k;
    }
    cout << summ;
}