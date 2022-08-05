#include<iostream>
#include<string>
using namespace std;

int lcs[1001][1001];

int retmax(int a, int b)
{
    if(a>b) return a;
    else return b;
}

int main(int argc, char** argv)
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int test_case;
	int T;
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
        string s1,s2;
        cin>>s1>>s2;
        
        int s1len=s1.length();
        int s2len=s2.length();
        
        for(int i=1; i<=s1len; i++)
        {
            for(int j=1; j<=s2len; j++)
            {
                if(s1[i-1]==s2[j-1]) lcs[i][j]=lcs[i-1][j-1]+1;
                else lcs[i][j]=retmax(lcs[i-1][j],lcs[i][j-1]);
            }
        }
        cout<<"#"<<test_case<<' '<<lcs[s1len][s2len]<<'\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}