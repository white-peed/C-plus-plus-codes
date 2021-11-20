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
        int n, m, a, b, c, d;
        cin >> n >> m;
        int flag = 0;
        ff(i,1,n)
        {
            cin >> a >> b >> c >> d;
            if( b == c )
                flag = 1;
        }
        if( ( m % 2 == 1) || flag == 0 )
            cout << "NO\n";
        else
            cout << "YES\n";
	}
	return 0;
}
