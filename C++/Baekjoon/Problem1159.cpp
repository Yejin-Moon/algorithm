#include <iostream>
using namespace std;

char name[31];
int arr[26];
int main()
{
    bool flag = false;
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%s",name);
        arr[name[0]-'a']++;
    }

    for(int i=0; i<26; i++)
    {
        if(arr[i]>=5) 
        {
            printf("%c",i+'a');
            flag=true;
        }
    }
    if(!flag) printf("PREDAJA");
}