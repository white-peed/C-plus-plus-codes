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

int match(string s)
{
    if(s == "H")
        return 1;
    else if(s == "2B")
        return 2;
    else if(s == "HR")
        return 3;
    else if(s == "3B")
        return 4;
    else
        return 0;
}

int main()
{
	string w, x, y, z;
    cin >> w >> x >> y >> z;
    vi A;
    A.pb(match(w));
    A.pb(match(x));
    A.pb(match(y));
    A.pb(match(z));
    sort(A.begin(), A.end());    
    cout << (A[0] == 1 and A[1] == 2 and A[2] == 3 and A[3] == 4 ? "Yes" : "No");
	return 0;
}