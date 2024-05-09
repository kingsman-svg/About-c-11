#include<iostream>
using namespace std;
// final关键字

//final可以修饰：1、函数 2、类
//final的位置：1、函数参数列表的后面 2、类名的后面
class Base
{
    public:
        virtual void test() //父类的虚函数
        {
            cout<<"Base class...";
        }
};

class child final: public Base
{
    public:
        void test() final //表示在child类的子类中重写test是错误的
        {
            cout<<"child class...";
        }
};

/*
这时父类child不能够被继承
class grandChild : public child
{
    public:
    
        这时在子类的重写中是错误的
        void test()
        {
            cout<<"grandChild class...";
        } 
};
*/