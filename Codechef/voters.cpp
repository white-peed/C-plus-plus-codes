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
	int n1, n2, n3, x;
    cin >> n1 >> n2 >> n3;
    map<int, vi> M;
    vi A;
    ff(i,1,n1)
    {
        cin >> x;
        M[x].push_back(1);
    }
    ff(i,1,n2)
    {
        cin >> x;
        M[x].push_back(2);
    }
    ff(i,1,n3)
    {
        cin >> x;
        M[x].push_back(3);
    }
    map<int, vi> ::iterator itr;
    // for (itr = M.begin(); itr != M.end(); ++itr) {
    //     cout << '\t' << itr->first << "\t";
    //     ff(i, 0, (itr->second).size()-1)
    //         cout << (itr->second)[i] << "\t";
    //     cout << "\n";
    // }
    for(itr = M.begin(); itr != M.end(); itr++)
    {
        // cout << "Hellp\n";
        if((itr->second).size() >= 2)
            A.push_back(itr->first);
    }
    cout << A.size() << "\n";
    for(auto i : A)
        cout << i << "\n";
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
