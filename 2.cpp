#include<iostream>
using namespace std;

int main()
{
    //有符号
    long long num1 = 1000LL;
    //无符号
    unsigned long long num2 = 1000ULL;

    //占内存大小最小是  8  字节

    //定义了三个宏
    cout<<"long long max: "<< LLONG_MAX;
    cout<<"\n";
    cout<<"long long min: "<< LLONG_MIN;
    cout<<"\n";
    cout<<"unsigned long long: "<< ULLONG_MAX;

    //隐式类型转换 
    /*
        整形的等级：
        1、内存越大等级越高
        2、内存相等时，标准int高于自定义int
        3、有符号转换为无符号
    */
    //1、低等级int到高等级int
    char c = 6;
    long long d = c;//相当于 long long d = (long long)c;

    //2、标准int到自定义int
    typedef int aa;
    aa bb = 5;
    int num = bb;
    long long num1 = bb;

    //有符号int转为无符号int
    unsigned int num2 = num1;

    return 0;

}
