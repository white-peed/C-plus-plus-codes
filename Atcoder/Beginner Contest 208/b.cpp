#include<bits/stdc++.h>
#define lli long long int

using namespace std;

lli deno[] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
int m = 10;

void findMin(lli V)
{
    vector<int> ans;

    for (int i = m - 1; i >= 0; i--) 
	{
 
        while (V >= deno[i]) {
            V -= deno[i];
            ans.push_back(deno[i]);
        }
    }

    cout << ans.size();
}

int main()
{
	lli V;
	cin >> V;
	findMin(V);
	return 0;
}

