#include<iostream>
#include<string>
#define MAX 1001
using namespace std;

struct node
{
    bool isnum;
    int num;
    int child[2];
}nodes[MAX];

double postorder(int idx)
{
    if(nodes[idx].isnum) return nodes[idx].num;
    double v1 = postorder(nodes[idx].child[0]);
    double v2 = postorder(nodes[idx].child[1]);
    if(nodes[idx].num=='+') return v1+v2;
    else if(nodes[idx].num=='-') return v1-v2;
    else if(nodes[idx].num=='*') return v1*v2;
    else if(nodes[idx].num=='/') return v1/v2;
    else return -1;
    return -1;
}
int main(int argc, char** argv)
{
	int test_case;
	int T=10;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int n;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            int idx;
            cin>>idx;
            char s[10];
            cin>>s;
            if(s[0]=='+' || s[0]=='-' || s[0]=='*' || s[0]=='/')
            {
                int c1,c2;
                cin>>c1>>c2;
                nodes[idx].isnum=false;
                nodes[idx].num=s[0];
                nodes[idx].child[0]=c1;
                nodes[idx].child[1]=c2;
            }
            else
            {
                nodes[idx].isnum=true;
                int num = 0;
                for(int i = 0; s[i]; i++) {
                    num *= 10;
                    num += s[i] - '0';
                }
                nodes[idx].num = num;
            }
        }
        printf("#%d ",test_case);
        int res = postorder(1);
        printf("%d\n",res);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}