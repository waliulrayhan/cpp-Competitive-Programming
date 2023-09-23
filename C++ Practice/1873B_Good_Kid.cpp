#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution() {
	//Solve Here
    int n;
        long long int mul=1;
        cin >> n;
        int a[n];

        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Assume first element as maximum and minimum
        int max = a[0];
        int min = a[0];

        // Find maximum and minimum in all array elements.
        for (int i = 1; i < n; i++)
        {
            // If current element is greater than max
            if (a[i] > max)
                max = a[i];

            // If current element is smaller than min
            if (a[i] < min)
                min = a[i];
        }

        // cout << "\nMaximum element =" << max << "\n";
        // cout << "Minimum element =" << min;

        for (size_t i = 0; i < n; i++)
        {
            if (a[i]==min)
            {
                a[i]=a[i]+1;
                break;
            }
            
        }

        for (size_t i = 0; i < n; i++)
        {
            mul=mul*a[i];
            // cout<<mul<<endl;
        }
        cout<<mul<<endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}