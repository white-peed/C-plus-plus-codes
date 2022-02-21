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

void solve()
{
	int n;
    cin >> n;
    vi A(n+1);
    ff(i,0,n-1)   cin >> A[i];
    reverse(all(A));
    int c = 0;
    deque<int>  Q;
    ff(i,2,n)
        if(A[1] != A[i])
            Q.push_back(i);
    while(!Q.empty())
    {
        int a = Q.front();
        c++;
        Q.pop_front();
        while(!Q.empty() and Q.front() <= 2*(a-1))
            Q.pop_front();
        // c++;
    }
    cout << c << "\n";
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
