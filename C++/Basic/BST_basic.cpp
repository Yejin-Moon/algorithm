#include <iostream>
using namespace std;

typedef struct node
{
    int i;
    struct node* left;
    struct node* right;
}node;

node*root = 0;

void add(int n)
{
    node* newnode = (node*)malloc(sizeof(node));
    newnode->i=n;
    newnode->left=newnode->right=0;

    if(root==0)
    {
        root = newnode;
        return;
    }
    node*cur = root;
    while(1)
    {
        if(cur->i>newnode->i)
        {
            if(cur->left!=0)
                cur=cur->left;
            else
                cur->left=newnode;
                return;
        }
        else
        {
            if(cur->right!=0)
            {
                cur=cur->right;
            }
            else
            {
                cur->right=newnode;
                return;
            }
        }
    }
}

int main()
{
    add(10);
    add(5);
    add(20);
    cout<<"root is : "<<root->i<<endl;
    cout<<"left is : "<<root->left->i<<endl;
    cout<<"right is: "<<root->right->i<<endl;
}