#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<string> nums;
    stringstream sstream(s);
    string tok;
    while(getline(sstream, tok, ',')) nums.push_back(tok);
    
    int n=nums.size();
    int res=0;
    for(int i=0; i<n; i++)
    {
        res+=stoi(nums[i]);
    }
    cout<<res;
}