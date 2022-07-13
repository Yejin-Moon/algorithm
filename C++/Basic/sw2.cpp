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

node*head[6]={0,0,0,0,0,0};
int big[6]={0,0,0,0,0,0};
node*cur[6]={0,0,0,0,0,0};

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

int add(int mId, int mGrade, char mGender[7], int mScore) {
    node*newnode = (node*)malloc(sizeof(node));
    newnode->mId=mId;
    newnode->mGrade=mGrade;
    newnode->mGender=mGender[0];
    newnode->mScore=mScore;
    newnode->next=newnode->prev = 0;

    int idx = retidx(mGrade,mGender[0]);

    if(head[idx]==0)
    {
        head[idx]=newnode;
        cur[idx]=head[idx];
        return mId;
    }
    node*tmp = head[idx];
    while(1)
    {
        if(tmp==0) 
        {
            cur[idx]=tmp->prev;
            break;
        }
        if(tmp->mScore<mScore) 
        {
            if(tmp->next==0)
            {
                tmp->next=newnode;
                newnode->prev=tmp;
                cur[idx]=newnode;
                return newnode->mId;
            }
            else tmp=tmp->next;
        }
        else break;
    }
    
    if(tmp->mScore==mScore)
    {
        while(tmp->mId<mId)
        {
            if(tmp==0) 
            {
                cur[idx]=tmp->prev;
                break;
            }
            if(tmp->mScore!=mScore) break;
            else tmp=tmp->next;
        }
    }
    if(tmp==head[idx])
    {
        newnode->next=tmp;
        tmp->prev=newnode;
        head[idx]=newnode;
    }
    else
    {
        tmp->prev->next=newnode;
        newnode->prev=tmp->prev;
        tmp->prev=newnode;
        newnode->next=tmp;
        if(tmp->next==0) cur[idx]=tmp;
    }
    /*
    node*c=head[idx];
    while(c->next!=0)
    {
        c=c->next;
    }
    */
    node*c=cur[idx];
    while(c!=0)
    {
        if(c->mScore<cur[idx]->mScore) break;
        c=c->prev;
    }
    return c->mId;
}

int remove(int id)
{
    for(int i=0; i<6; i++)
    {
        bool flag=false;
        if(head[i]==0) continue;
        node*cur = head[i];
        while(1)
        {
            if(cur==0) 
            {
                flag=true;
                break;
            }
            if(cur->mId!=id) cur=cur->next;
            else break;
        }
        if(flag) continue;
        if(cur==head[i])
        {
            head[i]=head[i]->next;
            if(head[i]!=0) head[i]->prev=0;
            else 
            {
                head[i]=0;
                return 0;
            }
            free(cur);
            return head[i]->mId;
        }
        else
        {
            cur->prev->next=cur->next;
            if(cur->next!=0) cur->next->prev=cur->prev;
            free(cur);
            return head[i]->mId;
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
        for(int j=0; j<mGenderCnt; j++)
        {
            int idx = retidx(mGrade[i],mGender[j][0]);
            if(head[idx]==0) continue;
            node*cur = head[idx];
            while(cur!=0)
            {
                if(cur->mScore<=small && cur->mScore>=mScore)
                {
                    if(cur->mScore==small)
                    {
                        if(cur->mId<smallid) smallid=cur->mId;
                    }
                    else
                    {
                        small=cur->mScore;
                        smallid=cur->mId;
                    }
                }
                cur=cur->next;
            }
        }
    }
    return smallid;
}

int main()
{
    char mgen[7];
    int id,grade, score;
    for(int i=0; i<7; i++)
    {
        scanf("%d %d %s %d",&id, &grade, mgen,&score);
        cout<<add(id,grade,mgen,score)<<endl;
        //cout<<"head "<<head[3]->mId<<endl;
    }
    cout<<remove(800)<<endl;
    /*
    int gradearr[3];
    char genarr[2][7];
    //cout<<remove(300);

    scanf("%d %s %s",&gradearr[0],genarr[0],genarr[1]);
    cout<<query(1,gradearr,2,genarr,2200)<<endl;
    */
    /*
    cout<<add(1235,1,mgen,100)<<endl;
    cout<<add(1233,1,mgen,90)<<endl;
    cout<<add(1237,1,mgen,105)<<endl;
    cout<<remove(1237)<<endl;
    cout<<remove(1233)<<endl;
    cout<<head[1]->mId<<endl;
    cout<<head[1]->next->mId<<endl;
    //cout<<head[1]->next->next->mId<<endl;
    //cout<<head[1]->next->next->next->mId<<endl;
    */

   /*
   char ctr[7]="female";
   cout<<add(900,2,ctr,2500)<<endl;
   cout<<add(300,2,ctr,2000)<<endl;
   cout<<add(100,2,ctr,2500)<<endl;
   cout<<remove(400)<<endl;
   cout<<endl;
   cout<<head[3]->mId<<endl;
   cout<<head[3]->next->mId<<endl;
   */
   //cout<<head[3]->next->next->mId<<endl;
   return 0;

}