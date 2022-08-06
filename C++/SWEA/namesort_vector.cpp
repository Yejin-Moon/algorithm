#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool cmp(string s1, string s2)
{
    if(s1.length()==s2.length())
    {
        return (s1.compare(s2)<0);
    }
    else return (s1.length()<s2.length());
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
    scanf("%d",&T);
	for(test_case = 1; test_case <= T; ++test_case)
	{
        vector<string> v;
    	int n;
    	scanf("%d",&n);
    	for(int i=0; i<n; i++)
    	{
        	char str[51];
        	scanf("%s",str);
        	v.push_back(str);
    	}
    	sort(v.begin(),v.end(),cmp);
		printf("#%d\n",test_case);
    	for(int i=0; i<n; i++)
    	{
        	if(v[i]==v[i+1]) continue;
        	printf("%s\n",v[i].c_str());
    	}
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}