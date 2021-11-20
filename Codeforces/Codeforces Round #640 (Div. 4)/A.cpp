#include<bits/stdc++.h>

#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vii vector<vi>
#define vlli vector<lli>
#define pii pair<int,int>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
        lli n;
        cin >> n;
        vlli num;
        while( n != 0 )
        {
            int b = log10(n);
            int c = n / pow(10,b);
            lli a = c * pow(10,b) ;
            n -= a;
            num.push_back(a);
        }
        cout << num.size() << "\n";
        for (int i = 0; i < num.size(); i++)
            cout << num[i] << " ";
        cout << "\n";
	}
	return 0;
}
