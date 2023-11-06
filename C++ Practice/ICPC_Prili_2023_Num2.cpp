#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int left = 0, right = 0;
        int countK = 0; // Count of almost prime factors
        map<int, int> factorCount; // Count of perfect prime factors

        int maxLength = 0;

        while (right < N) {
            // Expand the window
            if (isPrime(A[right])) {
                if (factorCount[A[right]] == 0) {
                    countK++;
                }
                factorCount[A[right]]++;
            }

            // Contract the window
            while (countK > K) {
                if (isPrime(A[left])) {
                    factorCount[A[left]]--;
                    if (factorCount[A[left]] == 0) {
                        countK--;
                    }
                }
                left++;
            }

            // Update the maximum length
            if (countK == K) {
                maxLength = max(maxLength, right - left + 1);
            }

            right++;
        }

        cout << "Case " << t << ": " << maxLength << endl;
    }

    return 0;
}
