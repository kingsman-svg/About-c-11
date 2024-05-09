#include<iostream>
#include<string>
using namespace std;

int main()
{

    //原始字面量
    //R"(要输出的原始字符)"
    string str1 = R"(F:\c++11新特性)";
    cout<<str1<<"\n";

    string str2 =R"(
    <html>
    <head>
    <title>
    </title>
    </head>)";
    cout<<str2;
    return 0;
}