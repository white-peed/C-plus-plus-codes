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

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		lli n;
        cin >> n;
        vi A;
        while(n != 0)
        {
            A.push_back(n%10);
            n /= 10;
        }
        reverse(A.begin(),A.end());
        int a = A.size();
        if(A[a-1]%2 == 0)
            cout << "0\n";
        else if(A[0]%2 == 0)
            cout << "1\n";
        else
        {
            bool ise = false;
            ff(i,0,a-1) if(A[i]%2 == 0)
                ise = true;
            cout << (ise ? "2\n" : "-1\n");
        }
	}
	return 0;
}
