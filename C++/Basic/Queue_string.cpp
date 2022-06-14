#include <iostream>
#include <string.h>
using namespace std;
#define sz 10
char* queue[sz];
int front=0, rear=0;

void enque(char * s)
{
    if((rear+1)%sz==front) return;
    rear=rear+1;
    rear=rear%sz;
    queue[rear]=s;
}

char* deque()
{
    if(front==rear) return 0;
    front=front+1;
    front=front%sz;
    return queue[front];
}

int main()
{
    char str[30];
    char *v;
    for(int i=0; i<9; i++)
    {
        scanf("%s",str);
        v=(char*)malloc(strlen(str)+1);
        strcpy(v,str);
        enque(v);
    }
    for(int i=0; i<9; i++)
    {
        cout<<deque()<<endl;
    }
}