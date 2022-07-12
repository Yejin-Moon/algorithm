#include <iostream>
using namespace std;

typedef struct node
{
    int mId;
    int mGrade;
    char mGender;
    int mScore;
    struct node*next;
    struct node*prev;
}node;

node*head=0;
node*cur[6] = {0,0,0,0,0,0};

int retidx(int mGrade, char mGender)
{
    if(mGender=='m')
    {
        if(mGrade==1) return 0;
        else if(mGrade==2) return 2;
        else return 4;
    }
    else
    {
        if(mGrade==1) return 1;
        else if(mGrade==2) return 3;
        else return 5;
    }
}


int add(int mId, int mGrade, char mGender[], int mScore)
{
    node*newnode = (node*)malloc(sizeof(node));
    newnode->mId=mId;
    newnode->mGrade = mGrade;
    newnode->mGender = mGender[0]; //m or f
    newnode->mScore = mScore;
    newnode->next=newnode->prev=0;
    int idx = retidx(mGrade, mGender[0]);

    if(head==0)
    {
        head=newnode;
        cur[idx]=head;
        return mId;
    }
    if(cur[idx]==0)
    {

    }
    //cur는 맨 끝을 가리키도록
    node*tmp = cur[idx-1];
    while(tmp->mScore<mScore)
    {
        if(tmp==cur[idx]) break;
        tmp=tmp->next;
    }
    if(tmp->mScore == mScore)
    {
        while(tmp->mId<mId)
        {
            if(tmp==cur[idx+1]) break;
            tmp=tmp->next;
        }
    }
}

int main()
{
    char str[7]="female";
    add(123,100,str,100);
}