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
	int n, a;
	vi A, B;
	cin >> n;
	ff(i,1,n)
	{
		cin >> a;
		A.pb(a);
	}
	ff(i,1,n)
	{
		cin >> a;
		B.pb(a);
	}
	int c = *max_element(A.begin(), A.end());
	int d = *min_element(B.begin(), B.end());
	if(c > d)
		cout << "0\n";
	else
		cout << (d - c + 1) << "\n";
	return 0;
}
