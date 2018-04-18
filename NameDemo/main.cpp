/*
    问题描述：
           编写一个程序，它要求用户首先输入其名，然后输入其姓；然后程序使用一个空格将姓和
           名组合起来，并存储和显示其组合结果。

    问题分析：
           输入其名，其姓就相当于输入两个字符串,再加一个空格字符
           将3个字符串按要求相加即可
*/

#include <iostream>

using namespace std;

int main()
{
    string ming;
    string xing;
    string space=" ";
    cout<<"Enter your first name: ";
    cin>>ming;
    cout<<"Enter your last name: ";
    cin>>xing;
    string name=xing+space+ming;
    cout<<"Your name: "<<name;
}
