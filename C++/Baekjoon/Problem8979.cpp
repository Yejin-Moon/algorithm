#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> v[1002];
	int karr[3];
	int res = 1;

	for (int i = 0; i < n; i++)
	{
		int cn;
		cin >> cn;
		for (int j = 0; j < 3; j++)
		{
			int a;
			cin >> a;
			if (cn == k) karr[j] = a;
			v[cn].push_back(a);
		}
	}
	for (int i = 1; i <= n; i++)
	{
        if(i==k) continue;
		if (v[i][0] > karr[0]) res++;
		else if (v[i][0] == karr[0])
		{
			if (v[i][1] > karr[1]) res++;
			else if (v[i][1] == karr[1])
			{
				if (v[i][2] > karr[2]) res++;
			}
		}
	}
	cout << res;
}