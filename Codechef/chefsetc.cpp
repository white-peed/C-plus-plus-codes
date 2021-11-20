#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;
#define pb push_back


const int maxn = 1e6;

void solve() 
{
    int n;
    cin >> n;
    char A[n];
    for(int i = 0; i < n ; i++)
    	cin >> A[i];
    ll a = 1 << n;
    for(ll i = 0; i < a; i++)
    {
    	for(int j = 0; j < n ; j++)
    	{
    		//int b = 1 << j;
			if( (i & (1 << j)) != 0 )
    			cout << A[j] << " ";
    		//cout << i << " " << j << " " << b << "\n";
    	}
    	cout << "\n";
	}
}

int main()
{
/*
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
*/
	ll t;
	cin >> t;
	while(t--)
    	solve();
    return 0;
}

