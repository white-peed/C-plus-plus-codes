#include<bits/stdc++.h>

using namespace std;

vector<int> A[2001];
vector<int> nodes;

int dfs(int n)
{
	if(A[n].size() == 0)
		return 1;
	int a, h = 0;
	for(int i = 0; i < A[n].size(); i++)
	{
		int a = 1 + dfs(A[n][i]);
		if(h < a)
			h = a;
	}
	return h;
}

int main()
{
	int n, a, h = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a;
		if(a == -1)
			nodes.push_back(i);
		else
			A[a].push_back(i);	
	}
	h = dfs(nodes[0]);
	for(int i = 1; i < nodes.size(); i++)
	{
		int a = dfs(nodes[i]);
		if(h < a)
			h = a;
	}
	cout << h;
	return 0;
}
