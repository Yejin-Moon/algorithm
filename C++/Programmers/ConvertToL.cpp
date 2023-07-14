#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    int len = myString.length();
    for(int i=0; i<len; i++) {
        if(myString[i]<'l') answer+='l';
        else answer+=myString[i];
    }
    return answer;
}
