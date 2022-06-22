#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(int a, int b)
{
    if(a>b) return true;
    else return false;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        vector<int> v;
        int largestgap=0;
        int nump;
        cin>>nump;
        for(int j=0; j<nump; j++)
        {
            int score;
            cin>>score;
            v.push_back(score);
        }
        sort(v.begin(),v.end(),comp);
        for(int j=0; j<nump-1; j++)
        {
            int tmp = v[j]-v[j+1];
            if(tmp>largestgap) largestgap=tmp;
        }
        printf("Class %d\n",i+1);
        printf("Max %d, Min %d, Largest gap %d\n",v[0],v[nump-1],largestgap);
    }
}