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
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		lli A[n], x, s = 0, s_ = 0;
		cin >> x;
		ff(i,0,n-1)
		{
			cin >> A[i];
			s += A[i];
			s_ += ceil(A[i] * 1.0 / x);
		}	
		cout << s / x << " " << s_ << "\n";	
	}
	return 0;
}
