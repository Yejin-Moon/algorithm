#include <string>
#include <vector>

using namespace std;

string lower(string str) {
    int dis = 'a'-'A';
    string ret="";
    for(auto s:str) {
        (s<'a')? ret+=s+dis:ret+=s;
    }
    return ret;
}
int solution(string myString, string pat) {
    int answer = 0;
    int slen = myString.length();
    int plen = pat.length();
    if(plen>slen) return 0;
    string mstr = lower(myString);
    string pstr = lower(pat);
    if(mstr.find(pstr)!=string::npos) return 1;
    return answer;
}
