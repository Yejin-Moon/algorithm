#include <string>
#include <vector>
#include <iostream>
#include <bitset>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int cnt=0, rem = 0;
    while(s!="1") {
        int tmre=0;
        int len = s.length();
        for(int i=0; i<len; i++) {
            if(s[i]=='0') tmre++;
        }
        cnt++;
        rem+=tmre;
        int slen = len-tmre;
        if(slen==1) break;
        string tmp=bitset<36>(slen).to_string();
        string str="";
        bool flag = false;
        for(int i=0; i<tmp.length(); i++) {
            if(tmp[i]=='1') flag=true;
            if(flag) str+=tmp[i];
        }
        s=str;
    }
    answer={cnt,rem};
    return answer;
}
