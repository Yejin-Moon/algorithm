#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    if(arr1.size()<arr2.size()) answer=-1;
    else if(arr2.size()<arr1.size()) answer=1;
    else {
        int ar1=0, ar2=0;
        for(auto a1:arr1) ar1+=a1;
        for(auto a2:arr2) ar2+=a2;
        if(ar1<ar2) answer=-1;
        else if(ar2<ar1) answer=1;
        else answer=0;
    }
    return answer;
}
