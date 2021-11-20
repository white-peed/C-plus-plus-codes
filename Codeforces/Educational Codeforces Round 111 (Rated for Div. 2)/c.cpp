#include<bits/stdc++.h>
#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define pb push_back
#define vii vector<vi>
#define pii pair<int,int>
#define mp make_pair
#define fix(a,b) memset(a,b,sizeof(a))
#define iter(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)
//lli mod = 1000000007;

using namespace std;

bool ok(vlli b)
{
    int n = b.size();
    if(n <= 2)  return true;
    if(n >= 5)  return false;
    ff(i,0,n-1)
        ff(j,i+1,n-1)
            ff(k,j+1,n-1)
                if((b[i] <= b[j] and b[j] <= b[k]) or (b[i] >= b[j] and b[j] >= b[k]))
                    return false;
    return true;
}

void show(vlli a)
{
    ff(i,0,a.size()-1)
        cout << a[i] << " ";
    cout << "\n";
}

void solve()
{
    int n, ans = 0;
    cin >> n;
    lli A[n];
    ff(i,0,n-1) cin >> A[i];
    ff(i,0,n-1)
    {
        vlli b;
        ff(j,i,n-1)
        {
            b.pb(A[j]);
            if(ok(b))   ans++;
            else break;
            //show(b);
        }
    }
    cout << ans << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    int t;
	cin >> t;
	while(t--)
        solve();
	return 0;
}