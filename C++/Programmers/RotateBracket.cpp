#include <string>
#include <vector>
#include <deque>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    deque<char> dq;
    int len = s.length();
    for(int i=0; i<len; i++) dq.push_back(s[i]);
    
    for(int i=0; i<len; i++) {
        char tmp = dq.front();
        dq.pop_front();
        dq.push_back(tmp);

        stack<char> st;
        bool flag=true;
        for(int j=0; j<len; j++) {
            char c = dq[j];

            if(c=='(' || c=='{' || c=='[') st.push(c);
            else {
                if(st.empty()) {
                    flag=false;
                    break;
                } 
                else if((c==')' && st.top()!='(') || (c=='}' && st.top()!='{') || (c==']' && st.top()!='[') ) {
                    flag=false;
                    break;
                }
                else st.pop();
            }
        }
        if(flag && st.empty()) answer++;
    }
    return answer;
}
