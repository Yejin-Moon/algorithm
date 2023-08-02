#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int len = array.size();
    for(int i=0; i<len; i++) {
        for(int j=0; j<len-1; j++) {
            if(array[j]<array[j+1]) swap(array[j],array[j+1]);
        }
    }
    answer=array[len/2];
    return answer;
}
