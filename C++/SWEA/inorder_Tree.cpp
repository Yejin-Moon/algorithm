#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int number=100;

typedef struct node *tree;
typedef struct node
{
	string data;
    tree left, right;
}node;

void inorder(tree ptr)
{
    if(ptr)
    {
        inorder(ptr->left);
        cout<<ptr->data;
        inorder(ptr->right);
    }
}

int main(int argc, char** argv)
{
	int test_case;
	int T=10;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        node nodes[100+1];
		int n;
        cin>>n;
        for(int i=0; i<=n; i++)
        {
            string s;
            getline(cin,s);
            stringstream ss(s);
            ss.str(s);
            string a,b,c,d;
            ss>>a>>b>>c>>d;
            int idx=0;
            stringstream ssInt(a);
            ssInt>>idx;
            nodes[idx].data=b;
            nodes[idx].left=nodes[idx].right=0;
        }
        
        for(int i=1; i<=n; i++)
        {
            if(i%2==0) nodes[i/2].left=&nodes[i];
            else nodes[i/2].right = &nodes[i];
        }
        printf("#%d ",test_case);
        inorder(&nodes[1]);
        printf("\n");
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}