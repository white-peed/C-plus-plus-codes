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
		lli h, w, n;
		cin >> h >> w >> n;
		lli h_ = 1, w_ = 1;	
		while(h % 2 == 0)
		{
			h /= 2;
			h_ *= 2;	
		}
		while(w % 2 == 0)
		{
			w /= 2;
			w_ *= 2;	
		}	
		if(h_ * w_ >= n)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
