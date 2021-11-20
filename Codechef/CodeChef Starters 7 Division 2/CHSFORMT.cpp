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
    int a, b;
    cin >> a >> b;
    int c = a+b;
    if(c < 3)
        cout << "1\n";
    else if(c <= 10)
        cout << "2\n";
    else if(c <= 60)
        cout << "3\n";
    else
        cout << "4\n";
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