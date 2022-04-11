#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[10001] = { 0, };
	int n, a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		arr[a]++;
	}
	int b = 0;
	int cnt = 0;
	while (1)
	{
		if (cnt >= n) break;
		if (arr[b] == 0) b++;
		for (int j = 0; j < arr[b]; j++)
		{
			cout << b<< '\n';
			cnt++;
		}
		b++;
	}
	return 0;
}