#include <bits/stdc++.h>
using namespace std;
#define fast_IO() (ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0));
#define endl '\n'
typedef long long int ll;
typedef long double ld;
int main()
{
	fast_IO();
	int x, y, p, q;
	cout << "Enter the Dimension of Matrix A[x][y]: " << endl;
	cin >> x >> y;
	cout << "Enter the Dimension of Matrix B[p][q]: " << endl;
	cin >> p >> q;
	int A[x][y], B[p][q], RES[x][q];
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < p; i++)
	{
		for (int j = 0; j < q; j++)
		{
			cin >> B[i][j];
		}
	}
	if (y != p)
	{
		cout << "Multiplication of Matrix A and Matrix B is not possible." << endl;
		return 0;
	}
	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < q; j++)
		{
			for (int k = 0; k < p; k++)
			{
				sum += A[i][k] * B[k][j];
			}
			RES[i][j] = sum;
			sum = 0;
		}
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < q; j++)
		{
			cout << RES[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
