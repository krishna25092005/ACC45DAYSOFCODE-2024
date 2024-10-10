#include <bits/stdc++.h>
using namespace std;


int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        
        unordered_map<int, int> freq;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            freq[A[i]]++;
        }
        
        int max_freq = 0;
        for (auto &entry : freq) {
            max_freq = max(max_freq, entry.second);
        }
        
        cout << N - max_freq << endl;
    }
    
    return 0;
}
