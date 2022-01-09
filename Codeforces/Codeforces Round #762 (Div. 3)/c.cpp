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
	lli a, s;
    cin >> a >> s;
    vi b;
    while(s)
    {
        int y = s % 10;
        int x = a % 10;
        if(x <= y)
            b.push_back(y-x);
        else
        {
            s /= 10;
            y += 10*(s%10);
            if(x < y && y >= 10 && y <= 18)
                b.push_back(y-x);
            else
            {
                cout << "-1\n";
                return;
            }
        }
        s /= 10;
        a /= 10;
    }
    if(a)
    {
        cout << "-1\n";
        return;
    }
    while(b.back() == 0)    b.pop_back();
    fb(i,b.size()-1,0)  cout << b[i];
    cout << "\n";
    return;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
