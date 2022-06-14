#include <iostream>
using namespace std;

typedef struct node
{
    int i;
    struct node *left;
    struct node *right;
}node;

node* root = 0;

void add(int n)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->i=n;
    newnode->left=newnode->right=0;

    if(root==0)
    {
        root= newnode;
        return;
    }
    node* cur = root;
    while(1)
    {
        if(newnode->i<cur->i)
        {
            if(cur->left==0)
            {
                cur->left=newnode;
                return;
            }
            else cur=cur->left;
        }
        else
        {
            if(cur->right==0)
            {
                cur->right=newnode;
                return;
            }
            else cur=cur->right;
        }
    }
}

node* findLeast(node*n)
{
    node*cur = n;
    while(cur->left!=0)
    {
        cur=cur->left;
    }
    return cur;
}

node* removenode(node*no,int key)
{
    if(no==0)
    {
        return 0;
    }
    if(key==no->i)
    {
        if(no->left==0 && no->right==0)
        {
            free(no);
            return 0;
        }
        else if(no->left==0) //오른쪽 자식만
        {
            node*tmp = no->right;
            free(no);
            return tmp;
        }
        else if(no->right==0) //왼쪽 자식만
        {
            node*tmp = no->left;
            free(no);
            return tmp;
        }
        else
        {
            node*toreplace = findLeast(no->right);
            no->i=toreplace->i;
            no->right=removenode(no->right, toreplace->i);
            return no;
        }
    }
    else if(key<no->i)
    {
        //왼쪽으로
        no->left=removenode(no->left,key);
        return no;
    }
    else
    {
        no->right=removenode(no->right,key);
        return no;
    }
}

void inorder(node*n)
{
    if(n==0)
    {
        return;
    }
    inorder(n->left);
    cout<<n->i<<'\n';
    inorder(n->right);
}

int main()
{
    add(10);
    add(5);
    add(20);
    add(7);

    inorder(root);

    removenode(root,7);
    inorder(root);
    return 0;
}