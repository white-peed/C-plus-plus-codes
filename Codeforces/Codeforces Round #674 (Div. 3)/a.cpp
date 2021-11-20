#include<bits/stdc++.h>

#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>

using namespace std;

int main()
{
	lli t;
	cin >> t;
	while(t--)
	{
        int n, x;
        cin >> n >> x;
        if( n % x == 2 )
            cout << floor( ( n - 2 ) / x ) + 1 << "\n";
        else
            cout << floor( ( n - 2 ) * 1.0 / x ) + 2 << "\n";
	}
	return 0;
}


