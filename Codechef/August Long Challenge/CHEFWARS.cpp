#include<bits/stdc++.h>

#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>

using namespace std;

lli fun(lli a)
{
    if( a == 1 )
        return a;
    return a + fun( a / 2 );
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
        lli h, p;
        cin >> h >> p;
        if( h > fun(p) )
            cout << 0 << endl;
        else
            cout << 1 << endl;
	}
	return 0;
}

