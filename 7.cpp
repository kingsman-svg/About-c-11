#include<iostream>
using namespace std;
//函数模板允许添加默认参数

template<typename T = long, typename U = int>
void mytest(T t ='A', U u = 'B')
{
    cout<<"t: " << t <<", u: "<< u << endl;  
}


int main()
{
    mytest('a','b');//自动推导，即mytest<char,char>
    mytest<int>('a','b');// mytest<int,char>,输出 97,b
    mytest<char,int>('a','b');//mytest<char,int>,输出a,98
    mytest();//mytest<long,int>,这时数据类型和参数都是默认的
    return 0;
}