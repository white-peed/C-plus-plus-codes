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
    map<string, int> M;
    string s;
    ff(i,1,n)
    {
        cin >> s;
        M[s]++;
    }
    map<string, int>::iterator itr;
    string s1 = "123";
    for (itr = M.begin(); itr != M.end(); ++itr) 
        if(itr->second > M[s1])
            s1 = itr->first;
    cout << s1;
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
