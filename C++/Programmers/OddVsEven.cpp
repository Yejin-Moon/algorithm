#include <string>
#include <vector>

using namespace std;

int max(int a, int b) {
    int tmp;
    a>b?tmp=a:tmp=b;
    return tmp;
}

int solution(vector<int> num_list) {
    int answer = 0;
    int len = num_list.size();
    int odd=0, even=0;
    for(int i=0; i<len; i++) {
        if(i%2==0) even+=num_list[i];
        else odd+=num_list[i];
    }
    answer = max(even, odd);
    return answer;
}
