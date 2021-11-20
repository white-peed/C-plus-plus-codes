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

int main()
{
	lli t;
	cin >> t;
	while(t--)
	{
		int n, x;
		cin >> n >> x;
		int A[n];
		ff(i,0,n - 1)	cin >> A[i];
		int min = 10e5, max = 0;
		ff(i,0,n - 1)
		{
			if(A[i] > max)
				max = A[i];
			if(A[i] < min)
				min = A[i];
		}
		if(max - min > x)	
			cout << "NO\n";
		else
			cout << "YES\n";
	}
	return 0;
}
