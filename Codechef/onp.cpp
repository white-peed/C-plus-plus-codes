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
	string s, ans = "";
    cin >> s;
    stack<char> A;
    ff(i,0,s.size()-1)
    {
        // cout << "It is " << s[i] << "\n";
        if(isalnum(s[i]))
        {
            ans += s[i];
            // continue;
            // cout << "HERE1\n";
        }
        else if(s[i] != '(' and s[i] != ')')
        {
            A.push(s[i]);
            // cout << "HERE2\n";

        }
        else if(s[i] == ')')
        {
            ans += A.top();
            // cout << "HERE3 " << A.top() << " \n";
            A.pop();
        }
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
