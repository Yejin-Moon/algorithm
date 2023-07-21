#include <string>
#include <vector>

using namespace std;
int arr[52];
vector<int> solution(string my_string) {
    vector<int> answer;
    int len = my_string.length();
    int lowidx = 'a'-'A'+26;
    for(int i=0; i<len; i++) {
        if(my_string[i]<'a') arr[my_string[i]-'A']++;
        else arr[my_string[i]-'a'+26]++;
    }
    for(int i=0; i<52; i++) answer.push_back(arr[i]);
    return answer;
}
