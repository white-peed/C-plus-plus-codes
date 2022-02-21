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

int subArraySum(vi arr, int sum)
{
    int n = arr.size();
    int curr_sum, i, j;
    for (i = 0; i < n; i++) {
        curr_sum = 0;
        for (j = i ; j < n; j++) {
            curr_sum = curr_sum + arr[j];
            if (curr_sum == sum) {
                return 1;
            }
        }
    }
    return 0;
}

void solve()
{
	int n, x, a, b, ma = 0;
    vi arr;
    cin >> n >> x;
    ff(i,1,n)
    {
        cin >> a >> b;
        ma += min(a, b);
        arr.pb(abs(a-b));
    }
    if(x < ma)
        cout << "No";
    else if(x == ma)
        cout << "Yes";
    else
        cout << (subArraySum(arr, x-ma) ? "Yes" : "No");
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