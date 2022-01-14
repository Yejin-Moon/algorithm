#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdbool>
using namespace std;

int main()
{
    char str1[] = "Result";
    char str2[30];
    char str3[] = " is";

    printf("%d\n",strlen(str1)); //6
    printf("%s\n",strcat(str1, str3)); //result is
    printf("%s\n",strcpy(str2, str1)); //result is
    printf("%d\n",strcmp(str3,str1)); //-1
    return 0;
}