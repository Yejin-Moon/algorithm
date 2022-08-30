#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    scanf("%d",&T);

	for (test_case = 1; test_case <= T; ++test_case)
	{
		char str[200001];
        scanf("%s",str);

		int answer = 0;
		string cur = "";
		string pre = "";
        int len = strlen(str);
		for (int i = 0; i < len; i++) {
			cur += str[i];
			if (cur != pre) {
				answer++;
				pre = cur;
				cur = "";
			}
		}
        printf("#%d %d\n",test_case,answer);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}