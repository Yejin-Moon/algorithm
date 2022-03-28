#include <iostream>
#include <queue>
using namespace std;

class Node{
public:
    int value;
    Node* left;
    Node* right;
    Node(const int& value) : value(value) {}
};

class BinarySearchTree{
private:
    Node* root;

    Node* _find(Node* cursor, const int& value) 
    {
        if(!cursor)
        {
            return nullptr;
        }
        if(cursor->value == value)
        {
            return cursor;
        }
        else
        {
            if(cursor->value > value)
            {
                return _find(cursor->left, value);
            }
            else
            {
                return _find(cursor->right, value);
            }
        }
    }

    void _insert(Node* cursor, const int& value)
    {
        Node* parent;
        while(cursor)
        {
            parent = cursor;
            if(parent->value > value)
            {
                cursor = cursor->left;
            }
            else
            {
                cursor = cursor->right;
            }
        }
        if(parent->value > value)
        {
            parent->left = new Node(value);
        }
        else if(parent->value < value)
        {
            parent->right = new Node(value);
        }
        else
        {
            cout<<"Already exists."<<endl;
        }
    }
};