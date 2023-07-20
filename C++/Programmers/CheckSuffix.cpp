#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    int mylen = my_string.length();
    for(int i=0; i<mylen; i++) {
        string tmp = my_string.substr(i);
        if(tmp.compare(is_suffix)==0) return 1;
    }
    return answer;
}
