#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    int len = my_string.length();
    int dist = 'a'-'A';
    for(int i=0; i<len; i++) {
        if(my_string[i]<'a') answer+=(my_string[i]+dist);
        else answer+=(my_string[i]-dist);
    }
    return answer;
}
