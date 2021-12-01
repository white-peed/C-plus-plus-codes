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

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, a, b;
        cin >> n >> a >> b;
        int m = n/2;
        if(a<=m and b <= m)
            cout << "-1\n";
        else if(a > m and b > m)
            cout << "-1\n";
        else if(a > m and b <= m)
        {
            if(a == (m+1) and b == m)
            {
                ff(i,a,n)   cout << i << " ";
                ff(i,1,m)   cout << i << " ";
                cout << "\n";
            }
            else
                cout << "-1\n";
        }
        else
        {
            cout << a << " ";
            ff(i,m+1,n) if(i != b)
                cout << i << " ";
            ff(i,1,m) if(i != a)
                cout << i << " ";
            cout << b << "\n";
        }
	}
	return 0;
}
