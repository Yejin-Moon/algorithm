#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Stack
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
        r = v.back();
        v.pop_back();
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

    int top()
    {
        if(v.empty()) return -1;
        else return v.back();
    }
};

int main()
{
    Stack stack;
    int n;
    cin>>n;
    string str;
    int a;
    for(int i=0; i<n; i++)
    {
        cin>>str;
        if(str=="push") cin>>a;

        if(str=="push") stack.push(a);
        else if(str=="pop") cout<<stack.pop()<<'\n';
        else if(str=="size") cout<<stack.size()<<'\n';
        else if(str=="empty") cout<<stack.empty()<<'\n';
        else if(str=="top") cout<<stack.top()<<'\n';
    }
    return 0;
}