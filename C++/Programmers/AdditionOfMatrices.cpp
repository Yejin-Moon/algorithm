#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int len = arr1.size();
    int elelen = arr1[0].size();
    vector<vector<int>> answer(len,vector<int>(elelen,0));
    for(int i=0; i<len*elelen; i++)
    {
        answer[i%len][i/len] = arr1[i%len][i/len]+arr2[i%len][i/len];
    }
    return answer;
}