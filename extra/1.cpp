#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

// Function to calculate the number of covered ranges in the subarray from L to R
int coveredRanges(vector<int>& A, int L, int R) {
    unordered_map<int, int> last_occurrence;
    int covered = 0;
    for (int i = L; i <= R; ++i) {
        if (last_occurrence.find(A[i]) == last_occurrence.end()) {
            covered++;
        }
        last_occurrence[A[i]] = i;
    }
    return covered;
}

int main() {
    int N, Q;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    cin >> Q;
    vector<pair<int, int>> queries(Q);
    for (int i = 0; i < Q; ++i) {
        cin >> queries[i].first >> queries[i].second;
    }
    
    long long total_sum = 0;
    for (int i = 0; i < Q; ++i) {
        int L = queries[i].first - 1;
        int R = queries[i].second - 1;
        int result = coveredRanges(A, L, R);
        total_sum = (total_sum + result) % MOD;
    }
    
    cout << total_sum << endl;
    return 0;
}