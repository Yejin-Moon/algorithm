#include<iostream>
#include<string>
#include<cstring>
using namespace std;
string book, word;
int P[100001];

void KMP()
{
    P[0]=0;
    for(int i=1; word[i]; i++)
    {
        int j = P[i-1];
        while(j>0)
        {
            if(word[i]==word[j]) break;
            j=P[j-1];
        }
        if(word[i]==word[j]) P[i]=j+1;
        else P[i]=0;
    }
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
        //memset(P,0,sizeof(P));
        cin>>book>>word;
        KMP();
        int piv=0, ans=0, cnt=0;
        while(book[piv])
        {
            if(book[piv] == word[cnt])
            {
                if(!word[cnt+1])
                {
                    ans++;
                    cnt=P[cnt];
                }
                else cnt++;
                piv++;
            }
            else if(cnt>0) cnt=P[cnt-1];
            else piv++;
        }
        printf("#%d %d\n",test_case,ans);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}