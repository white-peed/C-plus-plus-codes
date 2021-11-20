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
#define iter(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)
//lli mod = 1000000007;

using namespace std;

void solve()
{
    int n, x;
	cin >> n >> x;
	int A[n], B[n];
	ff(i,0,n-1)	cin >> A[i];
	int x_ = accumulate(A, A+n, 0);
	if(x == x_)
	{
		cout << "NO\n";
		return; 
	}
	partial_sum(A, A+n, B);
	ff(i,0,n-2)
		if(B[i] == x)
		{
			swap(A[i], A[i+1]);
			break;
		}
	cout << "YES\n";
	ff(i,0,n-1)	cout << A[i] << " ";
	cout << "\n";
    return;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
        solve();
	return 0;
}