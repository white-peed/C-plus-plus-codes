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
lli mod = 998244353;

using namespace std;

template <typename S> ostream& operator<<(ostream& os, const vector<S>& vector)
{
    for (auto element : vector) 
        os << element << " ";
    return os;
}

bool cmp(pair<char, int>& a, pair<char, int>& b)
{
    return a.second < b.second;
}

void solve()
{
    int n;
    lli k;
    cin >> n >> k;
    vlli A(n);
    ff(i,0,n-1) cin >> A[i];
    sort(A.begin(), A.end(), greater<lli>());
    // cout << A << "\n";
    int ans = 0;
    lli sum = 0;
    ff(i,0,n-1)
    {
        sum += A[i];
        // cout << sum << " " << ans << "\n";
        if(sum >= k*(i+1))
            ans++;
        else
            break;
    }
    cout << ans << "\n";
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
