#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> s;
    s.push(0);
    int len = board.size();
    queue<int> q[30];
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len; j++)
        {
            if(board[j][i]==0) continue;
            q[i].push(board[j][i]);
        }
    }
    int mlen = moves.size();
    for(int i=0; i<mlen; i++)
    {
        if(q[moves[i]-1].empty()) continue;
        int n = q[moves[i]-1].front();
        q[moves[i]-1].pop();
        cout<<s.top()<<endl;
        
        if(s.top()!=0 && n==s.top())
        {
            s.pop();
            answer++;
        }
        else s.push(n);
    }
    return answer*2;
}