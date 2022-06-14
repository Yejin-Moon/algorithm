#include <vector>
#include <iostream>
using namespace std;

vector<int> v;
void push(int x)
{
    v.push_back(x);
    return;
}

int pop()
{
    if(v.empty()) return -1;
    int a=v.front();
    v.erase(v.begin());
    return a;
}

int size()
{
    return v.size();
}

int empty()
{
    return (v.empty())?1:0;
}

int front()
{
    if(v.empty()) return -1;
    return v.front();
}

int back()
{
    if(v.empty()) return -1;
    return v.back();
}

int main()
{
    int n;
    scanf("%d",&n);
    char str[10];
    for(int i=0; i<n; i++)
    {
        scanf("%s",str);
        if(str[0]=='p')
        {
            if(str[1]=='u')
            {
                int a;
                scanf("%d",&a);
                push(a);
            }
            else printf("%d\n",pop());
        }
        else if(str[0]=='s') printf("%d\n",size());
        else if(str[0]=='e') printf("%d\n",empty());
        else if(str[0]=='f') printf("%d\n",front());
        else printf("%d\n",back());
    }
}