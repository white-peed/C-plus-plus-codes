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
	int n;
    cin >> n;
    vi A(n);
    for(auto &x : A)    cin >> x;
    int h = 1;
    if(A[0] == 1)
        h++;
    ff(i,1,n-1)
        if(A[i] == 1 and A[i-1] == 1)
            h += 5;
        else if(A[i] == 1)
            h++;
        else if(A[i] == 0 and A[i-1] == 0) 
        {
            h = -1;
            break;
        }
    cout << h << "\n";
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
