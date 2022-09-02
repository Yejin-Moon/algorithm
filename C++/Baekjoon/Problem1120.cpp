#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A,B;
    cin>>A>>B;
    int lenA = A.length();
    int lendiff = B.length()-A.length();
    int cnt,min=50;

    for(int i=0; i<=lendiff; i++)
    {
        cnt=0;
        for(int j=0; j<lenA; j++)
        {
            if(A[j]!=B[j+i]) cnt++;
        }
        if(min>cnt) min=cnt;
    }
    cout<<min;
}