#include<bits/stdc++.h>

#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>

using namespace std;

struct Node
{
    int value = 0;
};

int main()
{
	int t;
	map<int,Node> X, Y;
	map<int,Node>::iterator itr;
	cin >> t;
	while(t--)
	{
        int n;
        cin >> n;
        X.clear();
        Y.clear();
        lli a, b;
        ff(i,1,4*n - 1)
        {
            cin >> a >> b;
            if(X[a].value == 0)
                X[a].value++;
            else
                X.erase(a);
            if(Y[b].value == 0)
                Y[b].value++;
            else
                Y.erase(b);
        }
        itr = X.begin();
        cout << itr->first << " ";
        itr = Y.begin();
        cout << itr->first << "\n";
	}
	return 0;
}
