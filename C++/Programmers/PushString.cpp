#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    if(A==B) return 0;
    int len = A.length();
    for(int i=1; i<len; i++) {
        string tmp = A.substr(len-i) + A.substr(0,len-i);
        if(tmp==B) return i;
    }
    return -1;
}
