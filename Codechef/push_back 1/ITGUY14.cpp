#include<bits/stdc++.h>
#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define pb push_back
#define vii vector<vi>
#define pii pair<int,int>
#define endl "\n"
#define mp make_pair
#define fix(a,b) memset(a,b,sizeof(a))
//lli mod = 1000000007;

using namespace std;

int A[1000];

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		fix(A, 0);
		int n, a;
		cin >> n;
		ff(i,0,n - 1)
		{
			cin >> a;
			A[a] = a;
		}	
		ff(i,0,n - 1)
			cout << A[i];
		cout << "\n";
	}
	return 0;
}
