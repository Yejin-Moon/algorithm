#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int start=-1, end=-1;
    int len = arr.size();
    for(int i=0; i<len; i++) {
        if(start==-1 && arr[i]==2) start=i;
        else if(arr[i]==2) end=i;
    }
    if(start==-1) {
        answer.push_back(-1);
        return answer;
    }
    else if(end==-1) end=start;
    for(int i=start; i<=end; i++) answer.push_back(arr[i]);
    return answer;
}
