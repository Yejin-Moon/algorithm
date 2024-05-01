#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) return false;
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    vector<int> nums;
    set<int> s;
    int len = numbers.size();
    for(int i=0; i<len; i++) nums.push_back(numbers[i]);
    sort(nums.begin(),nums.end());

    for(int idx=1; idx<=len; idx++) {
        do{
            string str = "";
            for(int i=0; i<idx; i++) {
                str+=nums[i];
            }
            s.insert(stoi(str));
            reverse(nums.begin()+idx, nums.end());
        }while(next_permutation(nums.begin(),nums.end()));
    }

    for(auto it=s.begin(); it!=s.end(); it++) {
        if(*it==1||*it==0) continue;
        if(isPrime(*it)) answer++;
    }

    return answer;
}
