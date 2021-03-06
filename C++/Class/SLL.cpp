#include <iostream>
using namespace std;

template<typename T>
struct Node
{
    T data;
    Node<T>* nextNode;

    Node<T>(T value) : data(value), nextNode(NULL) {}
};

template<typename T>
class LinkedList
{
    Node<T>* head;
    Node<T>* tail;
    int size = 0;

public:
    LinkedList() : head(NULL), tail(NULL) {}
    ~LinkedList()
    {
        Node<T>* deleteNode;
        while (head->nextNode != NULL)
        {
            deleteNode = head;
            head = head->nextNode;
            delete deleteNode;
        }
    }
    void addNode(T data)
    {
        Node<T>* newNode = new Node<T>(data);
        ++size;

        if(head == NULL)
        {
            head = tail = newNode;
            return;
        }
        tail->nextNode = newNode;
        tail = newNode;
    }

    void showList() const
    {
        Node<T>* findNode = head;

        while(findNode != NULL)
        {
            cout<<findNode->data<<" ";
            findNode = findNode->nextNode;
        }
        cout<<endl;
    }

    Node<T>* findNode(int location) const
    {
        Node<T>* searchNode = head;
        int index = location;
        while(searchNode != NULL && --index >= 0)
        {
            searchNode = searchNode->nextNode;
        }
        return searchNode;
    }

    T findNodeData(int location) const
    {
        Node<T>* searchNode = head;
        int index = location;

        while(searchNode != NULL && --index >= 0)
        {
            searchNode = searchNode->nextNode;
        }
        return searchNode->data;
    }

    void removeNode(T data)
    {
        Node<T>* findNode = head;
        Node<T>* deleteNode;

        while(findNode != NULL)
        {
            if(findNode->nextNode != NULL && findNode->nextNode->data == data)
            {
                break;
            }
            findNode = findNode->nextNode;
        }
        if(findNode != NULL)
        {
            deleteNode = findNode->nextNode;
            findNode->nextNode = deleteNode->nextNode;
            --size;

            delete deleteNode;
        }

        void insertNode(T data, int index)
        {
            if(index > size || index < 0)
            {
                cout<<"invalid index : "<< index<<endl;
                return;
            }

            Node<T>* newNode = new Node<T>(data);

            if(index ==0)
            {
                if(head == NULL)
                {
                    tail = newNode;
                }
                newNode -> nextNode =head;
                head = newNode;
            }
            else if(index == size)
            {
                if(head == NULL)
                {
                    head = tail = newNode;
                }
                else
                {
                    tail->nextNode = newNode;
                    tail = newNode;
                }
            }
            else
            {
                Node<T>* findNode = head;
                Node<T>* nextNode = findNode -> nextNode;

                for(int i=1; i<index; ++i)
                {
                    findNode = nextNode;
                    nextNode = findNode->nextNode;
                }
                newNode->nextNode = nextNode;
                findNode->nextNode = newNode;
            }
            ++size;
        }
    }
    void showList() const
    {
        Node<T>* findNode = head;
        cout<<"size of SLL : "<<size<<endl;
        while(findNode != NULL)
        {
            cout<<findNode ->data<<" ";
            findNode = findNode->nextNode;
        }
        cout<<endl;
    }
};