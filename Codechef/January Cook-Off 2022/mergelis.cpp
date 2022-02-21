#include<bits/stdc++.h>
#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define pb push_back
#define vii vector<vi>
#define vb vector<bool>
#define vbb vector<vb>
#define pii pair<int,int>
#define endl "\n"
#define mp make_pair
#define fix(a,b) memset(a,b,sizeof(a))
#define iter(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal
//lli mod = 1000000007;

using namespace std;

int lis(vector<int> const& a) {
     // lis[i] = element at which an increasing subseqeunce of lenght 'i' ends
    vector<int> lis; lis.reserve(a.size());
    for(auto &x: a)
    {
        auto it = upper_bound(lis.begin(), lis.end(), x);  // upper_bound for non-decreasing
        if(it == lis.end())
            lis.push_back(x);
        else
            *it = x;
    }
    return lis.size(); 
}


void solve()
{
	int n, m;
    cin >> n >> m;
    vi A(n), B(m);
    for(auto &x : A)    cin >> x;
    for(auto &x : B)    cin >> x;
    cout << lis(A)+ lis(B) << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
	int t = 1;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
