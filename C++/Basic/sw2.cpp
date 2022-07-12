#include <iostream>
using namespace std;
/*
typedef struct node
{
    int mId;
    int mGrade;
    char mGender;
    int mScore;
    struct node*next;
}node;

node*head=0;
node*cur=0;
int maxscore=0;
int maxid=0;
int minscore=0;
int minid=0;

void init()
{
    head=0;
    cur=0;
}

int add(int id, int grade, char gender[], int score)
{
    node* newnode = (node*)malloc(sizeof(node));
    newnode->mId=id;
    newnode->mGrade=grade;
    newnode->mGender=gender[0];
    newnode->mScore=score;
    newnode->next=0;
    maxscore=0;
    maxid=0;

    if(head==0)
    {
        head=newnode;
        cur=head;
        return id;
    }
    cur->next=newnode;
    cur=newnode;
    
    node*tmp=head;
    while(tmp!=0)
    {
        if(tmp->mGender==gender[0] && tmp->mGrade==grade)
        {
            if(tmp->mScore>maxscore)
            {
                maxscore=tmp->mScore;
                maxid = tmp->mId;
            }
            else if(tmp->mScore==maxscore&&tmp->mId>maxid)
            {
                maxscore=tmp->mScore;
                maxid=tmp->mId;
            }
        }
    }
    return maxid;
}

int remove(int id)
{
    minscore=0;
    minid=0;
    node*del, *del_next;
    del_next=head;
    if(head->mId==id)
    {
        del=head;
        head=head->next;
        free(del);
        return 0;
    }
    else
    {
        while(del_next!=0)
        {
            if(del_next->next->mId==id)
            {
                del=del->next->next;
                del_next->next=del->next;
                free(del);
            }
            else
            {
                if(del_next->)
                del_next=del_next->next;
            }
        }
    }
    //if(del_next->mId!=id)
    return 0;
}
*/

//학년 성별별 구조체 배열 만들기
//min힙으로 만들기

//sll 6개 생성

typedef struct node
{
    int mId;
    int mGrade;
    char mGender;
    int mScore;
    struct node*next;
}node;

node*head[6]={0,0,0,0,0,0};
node*cur[6]={0,0,0,0,0,0};
node*p[6];

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

int add(int id, int grade, char gender[7], int score)
{
    node*newnode = (node*)malloc(sizeof(node));
    newnode->mId=id;
    newnode->mGrade=grade;
    newnode->mGender=gender[0];
    newnode->mScore=score;
    newnode->next=0;

    int idx = retidx(grade,gender[0]);

    if(head[idx]==0)
    {
        head[idx]=newnode;
        cur[idx]=head[idx];
        return id;
    }
    node*tmp = head[idx];
    while(tmp->mScore<score&&tmp->next!=0)
    {
        tmp=tmp->next;
        //if(tmp==0) break;//
    }
    if(tmp->mScore==score)
    {
        while(tmp->mId<id)
        {
            if(tmp==0) break;
            if(tmp->mScore>score) break;
            //if(tmp==cur[idx]) cur[idx]=cur[idx]->next;
            tmp=tmp->next;
        }
    }
    if(tmp==head[idx])
    {
        node*t=head[idx];
        //tmp->next=head[idx];
        head[idx]=newnode;
        newnode->next=t;
    }
    else
    {
        if(tmp->next!=0)
        {
            //if(tmp==cur[idx]) cur[idx]=tmp->next;
            newnode->next=tmp->next;
            tmp->next=newnode;
        }
        else
        {
            //if(tmp==cur[idx]->next) cur[idx]=tmp->next;
            tmp->next=newnode;
        }
    }
    node*c=head[idx];
    while(c->next!=0)
    {
        c=c->next;
    }
    return c->mId;
}

int remove(int id)
{
    for(int i=0; i<6; i++)
    {
        if(head[i]==0) continue;
        node*del, *del_n;
        del_n=head[i];
        if(head[i]->mId==id)
        {
            del=head[i];
            head[i]=head[i]->next;
            free(del);
            if(head[i]==0) return 0;
            else return head[i]->mId;
        }
        else
        {
            while(del_n->next!=0)
            {
                if(del_n->next->mId==id)
                {
                    del=del_n->next;
                    del_n->next=del->next;
                    free(del);
                    if(head[i]==0) return 0;
                    else return head[i]->mId;
                }
                else
                {
                    del_n=del_n->next;
                }
            }
        }
    }
    return 0;
}

int query(int mGradeCnt, int mGrade[],int mGenderCnt, char mGender[][7], int mScore)
{
    int small = 300000;
    int smallid = 0;
    for(int i=0; i<mGradeCnt; i++)
    {
        for(int j=0; j<mGradeCnt; j++)
        {
            int idx = retidx(mGrade[i],mGender[j][0]);
            if(head[idx]->mScore<small && head[idx]->mScore>=mScore)
            {
                small=head[idx]->mScore;
                smallid=head[idx]->mId;
            }
        }
    }
    return smallid;
}

int main()
{
    char mgen[7]="female";
    cout<<add(1236,1,mgen,100)<<endl;
    cout<<add(1235,1,mgen,100)<<endl;
    cout<<add(1233,1,mgen,90)<<endl;
    cout<<add(1237,1,mgen,105)<<endl;
    cout<<remove(1237)<<endl;
    cout<<remove(1233)<<endl;
    cout<<head[1]->mId<<endl;
    cout<<head[1]->next->mId<<endl;
    //cout<<head[1]->next->next->mId<<endl;
    if(head[1]->next->next==0) cout<<"tes";
    //cout<<head[1]->next->next->next->mId<<endl;
    
   return 0;

}