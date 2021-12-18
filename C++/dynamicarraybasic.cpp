#include <iostream>

using namespace std;

int main()
{
    int size;

    cout<<"size : ";
    cin >> size;
    int* dyarr;
    dyarr = new int [size];

    for(int i = 0;i<size;i++)
    {
        cin >> dyarr[i];
    }

    int *curr = 0;
    int* begin, *end;
    begin = dyarr;
    end = dyarr + size;

    curr = begin;
    while(curr != end){
        cout << *(curr)<<"\t";
        curr++;
    }
    cout << endl;

    delete[] dyarr;

    return 0;
}