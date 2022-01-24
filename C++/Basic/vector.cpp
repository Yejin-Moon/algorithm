#include <iostream>
#include <vector>

using namespace std;

void print(vector<int>& v){
    for(unsigned int i = 0; i<v.size(); i++){
        cout << v[i] << '\t';
    }
    cout<<endl;
}

int main()
{
    vector<int> v{10,20,30};

    cout<<"Changing the value"<<endl;
    cout<<v[0]<<", "<<v[1]<<endl;
    v[0]=1000;
    cout<<v[0]<<", "<<v[1]<<endl;

    cout<<"push back"<<endl;
    v.push_back(2000);
    print(v);

    cout<<"pop back"<<endl;
    v.pop_back();
    print(v);
    
    return 0;
}