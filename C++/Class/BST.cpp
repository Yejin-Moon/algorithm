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

    void _preorderTraversal(Node* cursor)
    {
        if(!cursor)
        {
            return;
        }
        cout<<cursor->value<<" ";
        this->_preorderTraversal(cursor->left);
        this->_preorderTraversal(cursor->right);
    }

public:
    void insert(const int& value)
    {
        if(!this->root)
        {
            this->root = new Node(value);
            return;
        }
        this->_insert(this->root, value);
    }

    Node* find(const int& value)
    {
        Node* cursor = this->root;
        if(!cursor)
        {
            return nullptr;
        }
        return this->_find(cursor, value);
    }

    void remove(const int& value)
    {
        Node* parent;
        Node* deleteTarget;
        Node* cursor = this->root;
        while(cursor)
        {
            if(cursor->left)
            {
                if(cursor->left->value == value)
                {
                    parent = cursor;
                }
            }
            else if(cursor->right)
            {
                if(cursor->right->value == value)
                {
                    parent = cursor;
                }
            }

            if(cursor->value == value)
            {
                deleteTarget = cursor;
                break;
            }
            else if(cursor->value > value)
            {
                cursor = cursor->left;
            }
            else
            {
                cursor = cursor->right;
            }
        }

        if(deleteTarget->right == nullptr && deleteTarget->left == nullptr)
        {
            if(parent->left == deleteTarget)
            {
                parent->left = nullptr;
            }
            else if(parent->right == deleteTarget)
            {
                parent->right = nullptr;
            }
            delete deleteTarget;
            return;
        }

        if(deleteTarget->right == nullptr && deleteTarget->left != nullptr)
        {
            if(!parent)
            {
                this->root = deleteTarget->left;
                delete deleteTarget;
            }
            else
            {
                if(parent->left == deleteTarget)
                {
                    parent->left = parent->left->left;
                }
                else if(parent->right == deleteTarget)
                {
                    parent->right = parent->right->left;
                }
                delete deleteTarget;
            }
            return;
        }

        else if(deleteTarget->right != nullptr && deleteTarget->left == nullptr)
        {
            if(!parent)
            {
                this->root = deleteTarget->right;
                delete deleteTarget;
            }
            else
            {
                if(parent->left == deleteTarget)
                {
                    parent->left = parent->left->right;
                }
                else if(parent->right == deleteTarget)
                {
                    parent->right = parent->right->right;
                }
                delete deleteTarget;
            }
            return;
        }
        else
        {
            Node* tmp;
            cursor = deleteTarget->right;
            if(cursor->left)
            {
                while(cursor->left)
                {
                    tmp = cursor;
                    cursor = cursor->left;
                }
                int tmpValue = tmp->left->value;
                tmp->left->value = deleteTarget->value;
                deleteTarget->value = tmpValue;

                delete tmp->left;
                tmp->left = nullptr;
            }
            else if(cursor->right)
            {
                while(cursor->right)
                {
                    tmp = cursor;
                    cursor = cursor->right;
                }
                int tmpValue = tmp->right->value;
                tmp->right->value = deleteTarget->value;
                deleteTarget->value - tmpValue;

                delete tmp->right;
                tmp->right = nullptr;
            }
            return;
        }
    }
    void printTree()
    {
        this->_preorderTraversal(this->root);
        cout<<endl;
    }
};
