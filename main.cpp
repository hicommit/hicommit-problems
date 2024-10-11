#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int K = 500000 - N;
    int bills[] = {100000, 50000, 10000, 5000, 1000};
    int count = 0;

    for (int i = 0; i < 5; i++) {
        count += K / bills[i];
        K %= bills[i];
    }

    cout << count << endl;
    return 0;
}
