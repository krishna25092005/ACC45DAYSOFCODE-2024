#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N, K, M;
        cin >> N >> K >> M;
  
        int capacity = K * M;

        int bagsNeeded = (N + capacity - 1) / capacity;

        cout << bagsNeeded << endl;
    }

    return 0;
}
