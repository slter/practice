/*
     问题描述：
           编写程序，创建一个 Employee 类，该类中有字符数组，表示姓名，性别，年龄。构
           造函数初始化每个成员，display()函数把完整的对象数据打印出来。其中的数据成员
           是保护的，函数是公共的。
     问题分析：
           设计一个Employee类，里面有两个函数  init（），display（）。
           函数是用public修饰，数据成员用private修饰


*/

#include <iostream>

using namespace std;

class Employee {
public:              //公有段  成员函数
    void init(string n,char s,int y);   //初始化
    void display();                     //打印数据成员
private:             //私有段  类型成员
    string name;     //名字
    char sex;        //性别
    int year;        //年龄
};
void Employee:: init(string n,char s,int y) {  //构造函数
    name=n; sex=s; year=y;
}
void Employee:: display() {
    cout<<name<<"  "<<sex<<"  "<<year<<endl;
}

int main()
{
    Employee e;        //创建对象e
    e.init("zhangsan",'M',30);
    e.display();
    e.init("lishi",'M',25);
    e.display();
    e.init("lihong",'W',30);
    e.display();


}
