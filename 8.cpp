#include<iostream>
using namespace std;

// 有关断言
//程序运行之后才启动断言
#include<cassert>//包含头文件

char* creatArray(int size)
{
    assert(size>0);
    char* array = new char[size];
    cout<<"success!"<<endl;
    return array;
}

int main()
{
    //char* buf = creatArray(0);//输出：  Expression: size>0
    char* buf1 = creatArray(1);



    //有关静态断言
    //写程序时就启动断言

    //   static_assert(sizeof(int)==8,"int类型大小不是8字节!");此时会报错，因为sizeof(int)!=8
    static_assert(sizeof(int)==4,"int类型的大小不是4字节!");
    cout<<"hello world"<<endl;

    return 0;
}



