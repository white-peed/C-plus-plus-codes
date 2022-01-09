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
    string s, a = "", b = "";
    bool flag = false;
    cin >> s;
    ff(i,0,n-1)
    {
        if(flag)
        {
            a += "0"; 
            b += s[i];
            //cout << "Here1\n";
        }
        else
        {
            if(s[i] == '2')
            {    
                a += "1"; 
                b += "1";
                //cout << "Here2\n";
            }
            else if(s[i] == '0')
            {
                a += "0"; 
                b += "0";
                //cout << "Here3\n";
            }
            else
            {    
                a += "1"; 
                b += "0";
                flag = true;
                //cout << "Here4\n";
            }
        }
    }
    cout << a << "\n" << b << "\n";
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
