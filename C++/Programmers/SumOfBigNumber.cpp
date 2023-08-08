#include <string>
#include <vector>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    int alen = a.length(), blen = b.length();
    if(alen>blen) {
        for(int i=0; i<alen-blen; i++) b='0'+b;
    }
    else {
        for(int i=0; i<blen-alen; i++) a='0'+a;
    }
    int flag=0, len = a.length();
    for(int i=len-1; i>=0; i--) {
        int tmp=(a[i]-'0')+(b[i]-'0');
        if(flag==1) {
            answer=(char)(((tmp+1)%10)+'0')+answer;
            if(tmp+1<10) flag=0;
        }
        else {
            answer=(char)((tmp%10)+'0')+answer;
            if(tmp>=10) flag=1;
        }
        if(i==0 && flag==1) answer='1'+answer;
    }
    return answer;
}
