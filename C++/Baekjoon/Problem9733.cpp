#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[7]={0,0,0,0,0,0,0};
    int total = 0;
    string str;
    while(cin>>str)
    {
        if(str=="Re") arr[0]++;
        else if(str=="Pt") arr[1]++;
        else if(str=="Cc") arr[2]++;
        else if(str=="Ea") arr[3]++;
        else if(str=="Tb") arr[4]++;
        else if(str=="Cm") arr[5]++;
        else if(str=="Ex") arr[6]++;
        total++;
    }
    printf("Re %d %.2f\n",arr[0],(float)arr[0]/(float)total);
    printf("Pt %d %.2f\n",arr[1],(float)arr[1]/(float)total);
    printf("Cc %d %.2f\n",arr[2],(float)arr[2]/(float)total);
    printf("Ea %d %.2f\n",arr[3],(float)arr[3]/(float)total);
    printf("Tb %d %.2f\n",arr[4],(float)arr[4]/(float)total);
    printf("Cm %d %.2f\n",arr[5],(float)arr[5]/(float)total);
    printf("Ex %d %.2f\n",arr[6],(float)arr[6]/(float)total);
    printf("Total %d %.2f\n",total,(float)total/(float)total);
}