#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int res, change;
string s;

void dfs(int idx, int ch)
{
    if(ch==change)
    {
        res = max(res,stoi(s));
        return;
    }
    for(int i=idx; i<s.size()-1; i++)
    {
        for(int j=i+1; j<s.size(); j++)
        {
            swap(s[i],s[j]);
            dfs(i,ch+1);
            swap(s[i],s[j]);
        }
    }
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
    cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin>>s>>change;
        res=0;
        if(change>s.size()) change = s.size();
        dfs(0,0);
        cout<<"#"<<test_case<<' '<<res<<'\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}