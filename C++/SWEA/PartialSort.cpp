#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_INPUT 10000
#define MAX_NUM 30000

extern void init();
extern void addUser(int uID, int income);
extern int getTop10(int result[10]);

static int input[MAX_INPUT];

static unsigned int seed = 13410;

static unsigned int pseudoRand() {
	seed = seed * 214013 + 2531011;
	return (unsigned int)(seed >> 11) % MAX_NUM;
}

static void makeInput(int inputLen) {
	for (int i = 0; i < inputLen; i++) {
		input[i] = pseudoRand();
	}
}

static int run() {
	int N, userNum, uID = 0;
	int score = 100, result[10], cnt;
	int sum, check;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &userNum);
		makeInput(userNum);
		for (int j = 0; j < userNum; j++) {
			addUser(uID++, input[j]);
		}
		cnt = getTop10(result);

		sum = 0;
		for (int j = 0; j < cnt; j++)
			sum += result[j];
		scanf("%d", &check);
		if (check != sum)
			score = 0;
	}
	return score;
}

int main(void) {
	setbuf(stdout, NULL);
	//freopen("partial_sort_input.txt", "r", stdin);
	int T;
	scanf("%d", &T);
	for (int tc = 1; tc <= T; tc++) {
		init();
		printf("#%d %d\n", tc, run());
	}
	return 0;
}

#include <malloc.h>
struct node
{
    int id;
    int income;
    struct node*next;
}nodes[100002];

node *head=0;

node* getNode(int id, int income)
{
    nodes[id].id = id;
 	nodes[id].income = income;
    nodes[id].next=0;
    return &nodes[id];
}

void init()
{
    head=0;
}

int getTop10(int result[10]) 
{
    node*cur = head;
    int tmp=0;
    for(int i=0; i<10; i++)
    {
        if(cur==0) break;
        result[i]=cur->id;
        tmp++;
        cur=cur->next;
    }
    return tmp;
}


void addUser(int id, int income)
{
    int c=0;
    node*newnode = getNode(id,income);

    if(head==0)
    {
        head=newnode;
        return;
    }
    node*cur=head;
    while(cur->next!=0)
    {
        if(c>10) return;
        if(cur->next->income<income) break;
        if(cur->next->income==income)
        {
            while(cur->next->id==id) cur=cur->next;
        }
        cur=cur->next;
        c++;
    }
    if(cur==head&&cur->income<income)
    {
        newnode->next=head;
        head=newnode;
        return;
    }
    if(cur->next!=0)
    {
        newnode->next=cur->next;
    }
    cur->next=newnode;
}