#include <iostream>
using namespace std;
struct node
{
    int mId;
    int mScore;
    struct node*next;
}nodes[6];

node* getNode(int id, int teamnum, int score) {
	nodes[teamnum].mId = id;
    nodes[teamnum].mScore = score;
	nodes[teamnum].next = 0;
	return &nodes[teamnum];
}
node*cur[6];
int bestsc[6]={0,0,0,0,0,0};
int bestid[6]={0,0,0,0,0,0};
node*loc;
void init()
{
    for(int i=1; i<=5; i++)
    {
        node*newnode = getNode(0,i,0);
        cur[i]=newnode;
        bestsc[i]=0;
        bestid[i]=0;
    }
    return;
}

int findloc(int mid)//찾는 노드 이전을 가리키도록
{
    for(int i=1; i<=5; i++)
    {
        //if(cur[i]->mId>mid) continue;
        node*tmp = &nodes[i];
        while(tmp->next!=0)
        {
            if(tmp->next->mId<mid) break;
            if(tmp->next->mId==mid)
            {
                loc = tmp;
                return i;
            }
            tmp=tmp->next;
        }
    }
}

void hire(int mID, int mTeam, int mScore)
{
    node*newnode = (node*)malloc(sizeof(node));
    newnode->mId=mID;
    newnode->mScore=mScore;
    newnode->next=0;
    node*tmp = &nodes[mTeam];
    while(tmp->next!=0)
    {
        if(tmp->next->mId<mID) break;
        tmp=tmp->next;
    }

    if(tmp->next!=0) 
    {
        newnode->next=tmp->next;
        tmp->next=newnode;
    }
    else
    {
        tmp->next=newnode;
        cur[mTeam]=newnode;
    }
    return;
}

void fire(int mID)
{
    int i = findloc(mID);
    node*del = loc->next;
    if(del->next!=0) 
    {
        loc->next=del->next;
        cur[i]=del->next;
    }
    else 
    {
        loc->next=0;
        cur[i]=loc;
    }
    return;
}

void updateSoldier(int mID, int mScore)
{
    int i = findloc(mID);
    loc->next->mScore=mScore;
    return;
}

void updateTeam(int mTeam, int mChangeScore)
{
    node*tmp = nodes[mTeam].next;
    while(tmp!=0)
    {
        int sc = tmp->mScore+mChangeScore;
        if(sc>5) tmp->mScore=5;
        else if(sc<1) tmp->mScore=1;
        else tmp->mScore=sc;
        tmp=tmp->next;
    }
    return;
}

int bestSoldier(int mTeam)
{
    node*tmp=nodes[mTeam].next;
    int bestscore = 0;
    int bestid=0;
    while(tmp!=0)
    {
        if(tmp->mScore>bestscore)
        {
            bestscore=tmp->mScore;
            bestid=tmp->mId;
        }
        if(tmp->mScore==bestscore)
        {
            if(tmp->mId>bestid) bestid=tmp->mId;
        }
        tmp=tmp->next;
    }
    
    return bestid;
}

int main()
{
    init();
    hire(21,1,5);
    hire(16,1,5);
    //fire(16);
    //fire(21);
    //cout<<nodes[1].next->mId<<' ';
    hire(25,1,2);
    hire(1,1,2);
    hire(49,1,2);
    //fire(49);
    //fire(16);
    fire(1);
    //cout<<nodes[1].next->next->mId<<' ';
    //cout<<bestSoldier(1)<<endl;

    
    //cout<<nodes[1].next->mId;
    //cout<<"print\n";
    
    node*tmp = nodes[1].next;
    while(tmp!=0)
    {
        cout<<tmp->mId<<' ';
        tmp=tmp->next;
    }

    //node*tmp2 = nodes[2].next;
    //while(tmp2!=0)
    //{
    //    cout<<tmp2->mId<<' ';
    //    tmp2=tmp2->next;
    //}

}