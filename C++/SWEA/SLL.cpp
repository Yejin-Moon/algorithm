#define MAX_NODE 10000

struct Node {
	int data;
	Node* next;
};

int cnt=0;
Node node[MAX_NODE];
int nodeCnt;
Node* head;
Node* cur;

Node* getNode(int data) {
	node[nodeCnt].data = data;
	node[nodeCnt].next = nullptr;
	return &node[nodeCnt++];
}

void init()
{
	head=0;
    nodeCnt=0;
    cnt=0;
}

void addNode2Head(int data) 
{
	Node*newnode = getNode(data);
    if(head==0)
    {
     	head=newnode;
        cur=newnode;
        return;
    }
    //node*cur = head;
    newnode->next=head;
    head=newnode;
    //cur=newnode;
    return;
}

void addNode2Tail(int data) 
{
	Node*newnode = getNode(data);
    if(head==0)
    {
        head=newnode;
        return;
    }
    //node[nodeCnt-1].next=newnode;
    //cur->next=newnode;
    //cur=newnode;
    
    Node*tmp = head;
    while(tmp->next!=0)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
 
    //cur=newnode;
    return;
}

void addNode2Num(int data, int num) 
{
    //if(num>nodeCnt) return;
    if(num==1)
    {
        addNode2Head(data);
        return;
    }
    if(nodeCnt<num)
    {
        addNode2Tail(data);
        return;
    }
    Node*newnode = getNode(data);
    Node*tmp=head;
    int cnt=1;
    while(tmp!=0) //
    {
        if(cnt==num-1) break;
        cnt++;
        tmp=tmp->next;
    }
    if(tmp==0) return;
    newnode->next = tmp->next;
    tmp->next=newnode;
}

void removeNode(int data) 
{
    Node*del;
    if(head->data==data)
    {
        head=head->next;
        //nodeCnt--;
        cnt++;
        return;
    }
	Node* tmp = head;
    while(tmp->next!=0)
    {
        if(tmp->next->data==data)
        {
         	del=tmp->next;
            tmp->next=del->next;
            //nodeCnt--;
            cnt++;
            return;
        }
        else tmp=tmp->next;
    }
    return;
}

int getList(int output[MAX_NODE]) 
{
    Node*tmp = head;
    for(int i=0; i<nodeCnt-cnt; i++)
    {
        output[i]=tmp->data;
        tmp=tmp->next;
    }
    return nodeCnt-cnt;
}