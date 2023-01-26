#include <iostream>
using namespace std;

int main()
{
	int n;
    cin>>n;
	long long int arr[46] = { 0, 1, 1, };
	int a = 3;
	
	while (1)
	{
		if (a > n || a<=2) break;
		arr[a] = arr[a - 1] + arr[a - 2];
		a++;
	}
	printf("%lld", arr[n]);
}