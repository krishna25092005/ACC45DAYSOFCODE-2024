#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;
        
        cout << min(X, N - X) << endl;
    }

    return 0;
}
