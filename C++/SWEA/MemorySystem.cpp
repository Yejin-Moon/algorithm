#include <iostream>
#include <set>
#include <map>
using namespace std;

int total;
set<pair<int,int>> empty_b;
map<int,int> alloc;

void init(int N)
{
    total = N;
    empty_b.clear();
    alloc.clear();
    alloc.emplace(N,0);
}

int allocate(int mSize)
{
    auto it = empty_b.lower_bound({mSize,0});
    if(it==empty_b.end()) return -1;//못찾음
    int size = it->first;
    int addr = it->second;
    empty_b.erase(it);
    alloc[addr] = mSize;
    if(size>mSize) empty_b.emplace(size-mSize,addr+mSize);
    return addr;
}

int release(int mAddr)
{
    auto it = alloc.find(mAddr);
    if(it==alloc.end()) return -1;
    int size = it->second;
    int res = size;
    it = alloc.erase(it);

    int after_size = 0;//이후로 빈공간있는지
    int asize = mAddr+size;
    if(it!=alloc.end()) after_size=it->first-asize;
    else if(asize<total) after_size=total-asize;

    if(after_size>0)
    {
        empty_b.erase({after_size,asize});
        size+=after_size;
    }

    int before_size = 0;
    if(it!=alloc.begin())
    {
        --it;
        before_size = mAddr-(it->first+it->second);
    }
    else if(mAddr>0) before_size = mAddr;

    if(before_size>0)
    {
        empty_b.erase({before_size,mAddr-before_size});
        size+=before_size;
        mAddr-=before_size;
    }

    empty_b.emplace(size,mAddr);
    return res;
}