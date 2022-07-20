#include <iostream>
using namespace std;

void printSubsets(char arr[], int n)
{
    for(int i=0; i<(1<<n); i++) //공집합 제외하려면 1부터
    {
        cout<<i<<" : ";
        cout<<"{";
        for(int j=0; j<n; j++)
        {
            if(i&(1<<j)) cout<<arr[j];
        }
        cout<<"}"<<endl;
    }
}

int main()
{
    char data[] = {'A', 'B', 'C', 'D'};
    int size = sizeof(data)/sizeof(char);
    printSubsets(data,size);
    return 0;
}