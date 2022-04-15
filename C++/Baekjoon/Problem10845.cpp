#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Queue
{
    private:
    vector<int> v;

    public:
    void push(int X)
    {
        v.push_back(X);
        return;
    }
    int pop()
    {
        if(v.empty()) return -1;
        int r;
        r = v.front();
        v.erase(v.begin());
        return r;
    }
    int size()
    {
        return v.size();
    }
    int empty()
    {
        if(v.empty()) return 1;
        else return 0;
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
};

int main()
{
    Queue que;
    int n;
    cin>>n;
    string str;
    int a;
    for(int i=0; i<n; i++)
    {
        cin>>str;
        if(str=="push") 
        {
            cin>>a;
            que.push(a);
        }
        else if(str=="pop") cout<<que.pop()<<'\n';
        else if(str=="size") cout<<que.size()<<'\n';
        else if(str=="empty") cout<<que.empty()<<'\n';
        else if(str=="front") cout<<que.front()<<'\n';
        else if(str=="back") cout<<que.back()<<'\n';
    }
    return 0;
}