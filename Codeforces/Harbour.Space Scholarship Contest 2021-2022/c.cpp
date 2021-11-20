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

int A[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};

int fun(string s)
{
    int a = 0, b = 0, i = 1;
    for(; i <= 10; i++)
    {
        if(s[i-1] == '1' and i%2 == 1)
            a++;
        if(s[i-1] == '1' and i%2 == 0) 
            b++;
        //cout << a << " " << b << " " << i << "\n";
        if(i%2 == 0)
        {
            if((b > ((10-i)/2 + a)) or (a > ((10-i)/2 + b)))
                return i;
        }
        else
        {
            if((a > ((10-i+1)/2 + b)) or (b > ((10-i-1)/2 + a)))
                return i;
        }
    }
    //cout << a << " " << b << " " << i << "\n";
    return 10;
}

void solve()
{
    string s, t, u;
    cin >> s;
    vi B;
    int a = 0, ans = 10;
    ff(i,0,s.size() - 1)
        if(s[i] == '?')
        {    
            B.push_back(i);
            a++;
        }
    int b = A[a];
    ff(i,1,b)
    {
        t = s;
        if(B.size() == 0)
        {
            ans = fun(s);
            break;
        }
        ff(j,0,B.size()-1)
            t[B[j]] = ((i>>j)%2 == 0 ? '1' : '0');
        u = t;
        ans = min(ans, fun(t));
        //if(ans == fun(t)) 
        //    cout << u << " " << ans << "\n";
    }
    cout << ans << "\n";
}

int main()
{
	int t;
	cin >> t;
	while(t--)
        solve();
	return 0;
}
