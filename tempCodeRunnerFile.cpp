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

template <typename S> ostream& operator<<(ostream& os, const vector<S>& vector)
{
    for (auto element : vector) 
        os << element << " ";
    return os;
}

void solve()
{
	int n, k;
    cin >> n >> k;
    if(n < k or k == 1)
    {
        cout << "-1\n";
        return;
    }
    string s;
    ff(i,0,n-1)
        i%2 ? s.push_back('b') : s.push_back('a');
    ff(i,2,k-1)
        s[n-k+i] = 'a' + i;
    cout << s << "\n";
    return;
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
