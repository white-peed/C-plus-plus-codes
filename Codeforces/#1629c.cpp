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
//lli mod = 1000000007;

using namespace std;

void solve()
{
	int n;
    cin >> n;
    vi A(n), ans;
    set<int> S;
    for(auto &x : A)    cin >> x;
    int st = 0, en = n-1;
    while (st < en)
    {
        int a = *max_element(A.begin()+st,A.end());
        while(S.size() != (a+1))
        {
            S.insert(A[st]);
            // cout << A[st] << " " << S.size() << "\n";
            st++;
        }
        ans.push_back(a+1);
    }
    cout << ans.size() << endl;
    ff(i,0,ans.size()-1)    cout << ans[i] << " ";
    cout << "\n";
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
