#include<iostream>
#include<string>
#include<map>
using namespace std;

//模板的优化
template <typename T>
class Container
{
public:
    void print(T& t)
    {
        auto it = t.begin();
        for(;it != t.end(); ++it)
        {
            cout<< it->first<<","<<it->second<<endl;
        }
    }
};


int main()
{
    map<int,string> m;
    m.insert(make_pair(1,"ace"));
    m.insert(make_pair(2,"sabo"));
    m.insert(make_pair(3,"luffty"));
    Container <map<int,string>> c;//优化了右尖括号
    c.print(m);

    return 0;
}