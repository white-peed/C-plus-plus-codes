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
	int n = 0, r25 = 0, r50 = 0, r100 = 0, a;
    bool f = false;
    cin >> n;
    ff(i,1,n)
    {
        cin >> a;
        if(a == 25)
            r25++;
        else if(a == 50)
        {
            if(r25 > 0)
                r25--, r50++;
            else
            {
                f = true;
                break;
            }
        }
        else
        {
            if(r25>0 and r50 > 0)
                r25--, r50--, r100++;
            else if(r25 > 2)
                r25 -= 3, r100++;
            else
            {
                f = true;
                break;
            }
        }
    }
    cout << (f ? "NO\n" : "YES\n");
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
	int t = 1;
	// cin >> t;
	while(t--)
		solve();
	return 0;
}
