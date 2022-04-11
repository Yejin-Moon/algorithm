#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	int l1 = str1.length();
	int l2 = str2.length();
	int ascii = 48;
	int rin1 = 0, rin2 = 0;
	for (int i = 0; i < l1; i++)
	{
		rin1 += (str1[i] - ascii)*pow(10, i);
	}
	for (int j = 0; j < l2; j++)
	{
		rin2 += (str2[j] - ascii)*pow(10, j);
	}
	int pres = rin1 + rin2;
	string s = to_string(pres);
	for (int a = s.length(); a >= 0; a--)
	{
		if (s[a] == '0') a--;
		cout << s[a];
	}

	return 0;
}