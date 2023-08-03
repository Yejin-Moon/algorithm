#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int len = myString.length();
    int plen = pat.length();
    for(int i=0; i<=len-plen; i++) {
        string tmp = myString.substr(i,plen);
        if(tmp.compare(pat)==0) answer++;
    }
    return answer;
}
