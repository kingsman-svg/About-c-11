#include<iostream>
using namespace std;
// override关键字
// 表明override修饰的函数是重写的继承的父类的函数

class Base
{
    public:
        virtual void test() //父类的虚函数,可被子类重写
        {
            cout<<"Base class...";
        }
};

class child : public Base
{
    public:
        void test() override 
        {
            cout<<"child class...";
        }
};



class grandChild : public child
{
    public:
        /*void testt() override 可以检查出拼写错误
        {
            cout<<"grandChild class...";
        } 
        */
};
