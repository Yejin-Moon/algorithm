#include <iostream>
#include <string>
using namespace std;

typedef struct Node* node;

struct Node
{
    node left = NULL;
    node right = NULL;
    int data;
};

class deque
{
private:
    node front = NULL;
    node rear = NULL;
    int n=0;
public:
    void push_front(int X)
    {
        if(n==0) front=rear=new Node;
        else 
        {
            node tmp = new Node;
            tmp->right = front;
            front->left=tmp;
            front =tmp;
        }
        front->data = X;
        n++;
    }

    void push_back(int x)
    {
        if(n==0) front=rear=new Node;
        else
        {
            node tmp = new Node;
            tmp->left = rear;
            rear->right = tmp;
            rear = tmp;
        }
        rear->data = x;
        n++;
    }

    int pop_front()
    {
        if(n==0) return -1;
        //if(front==NULL) return -1;
        int x;
        x=front->data;
        node tmp = front;
        front = front->right;
        delete tmp;
        if(front!=NULL) front->left=NULL;
        else rear = NULL;
        n--;
        return x;
    }

    int pop_back()
    {
        if(n==0) return -1;
        int x;
        x=rear->data;
        node tmp = rear;
        rear = rear->left;
        delete tmp;
        if(rear!=NULL) rear->right=NULL;
        else front = NULL;
        n--;
        return x;
    }

    int size()
    {
        return n;
    }

    int empty()
    {
        if(n==0) return 1;
        else return 0;
    }

    int getfront()
    {
        if(front==NULL) return -1;
        else return front->data;
    }

    int getback()
    {
        if(rear==NULL) return -1;
        else return rear->data;
    }
};

int main()
{
    int n;
    cin>>n;
    deque d;
    string str;
    int a;

    for(int i=0; i<n; i++)
    {
        cin>>str;

        if(str=="push_front")
        {
            cin>>a;
            d.push_front(a);
        }
        else if(str=="push_back")
        {
            cin>>a;
            d.push_back(a);
        }
        else if(str=="pop_front") cout<<d.pop_front()<<'\n';
        else if(str=="pop_back") cout<<d.pop_back()<<'\n';
        else if(str=="size") cout<<d.size()<<'\n';
        else if(str=="empty") cout<<d.empty()<<'\n';
        else if(str=="front") cout<<d.getfront()<<'\n';
        else if(str=="back") cout<<d.getback()<<'\n';
    }
}