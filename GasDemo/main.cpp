/*
      问题描述：
          编写程序，设计一个类，此类包含 3 个私有数据：汽油 a 价格 20 元/升，汽油 b 价
          格 15 元/升，以及当天总收入 total。请以构造函数方式建立值，输入所加的汽油量，
          输出对应的总收入。
      问题分析：
          设计两个函数：
               ①sum函数:通过实参对形参的赋值计算出当天的总收入
               ②display函数：输出总收入
*/
#include <iostream>

using namespace std;

class gas {
public:
    double sum(double a1,double b1);
    void display(double a1,double b1);
private:
    int a=20,b=30;
    double total;
};
double gas:: sum(double a1,double b1) {
    total=a1*a+b1*b;
    return total;
}
void gas:: display(double a1,double b1) {
    cout<<"今天加的a类汽油为:"<<a1<<"升\n";
    cout<<"今天加的b类汽油为:"<<b1<<"升\n";
    cout<<"今天的总收入为："<<total<<"元\n";
}

int main()
{
    gas g;
    double a1,b1;
    cout<<"输入今天所加的a类，b类汽油各是多少:"<<endl;
    cin>>a1>>b1;
    g.sum(a1,b1);
    g.display(a1,b1);
}
