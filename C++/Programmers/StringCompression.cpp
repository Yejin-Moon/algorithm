#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    int len = s.length();
    int small = len;
    for(int i=1; i<len-1; i++)
    {
        string stm;
        stack<string> st;
        int cnt=1;
        string tmp;
        for(int j=0; j<len; j+=i)
        {
            tmp = s.substr(j,i);
            if(st.empty()) st.push(tmp);
            else if(st.top()==tmp) cnt++;
            else if(!st.empty()&&st.top()!=tmp)
            {
                if(cnt==1) stm+=st.top();
                else stm+=to_string(cnt)+st.top();
                st.pop();
                st.push(tmp);
                cnt=1;
            }
        }
        if(cnt!=1) stm+=to_string(cnt)+tmp;
        else stm+=tmp;
        if(small>stm.length()) small = stm.length();
    }
    return small;
}