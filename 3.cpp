#include<iostream>
using namespace std;
//有关类成员变量的初始化
class Base
{
    public:
    //一、在类的构造函数中初始化
    Base() : a(250)
    {

    };
    Base(int num) : a(num) {};


    //二、在类的内部初始化
    //c++11中在类内部有两种初始化方式： 1、=  2、{}
    int a{4};
    int b = 1;
    //c++11中不允许直接在类中对静态成员初始化
    static int c;
    static const double d;
    //静态常量除外，注意这个常量的变量类型是整形或枚举类型
    const static int f = 0;

};

int Base::c = 0; 
const double Base::d = 3.14;

//内部初始化逻辑：先在类的内部进行初始化，然后调用构造函数初始化（称作赋值更为合适）
//因此上面的a最后为250，而不是4

int main()
{
    Base b;
    cout<<"a Value:"<<b.a;
    return 0;
}



