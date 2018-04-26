#include <iostream>

using namespace std;

int main()
{
    int iv1,iv2;    //定义两个int型变量
    char cv1,cv2;   //定义两个char型变量
    cout<<"iv1="<<iv1<<" in2="<<iv2<<endl;
    cout<<"size of iv1: "<<sizeof(iv1)<<endl;  //变量int型所占的字节数
    cout<<"size of cv1: "<<sizeof(cv1)<<endl;  //变量char型所占的字节数
    cout<<"please enter two number:";
    cin>>iv1>>iv2;       //给两个变量赋值
    cv1=++iv1;           //将int型变量强制转换为char
    cv2=iv2++;
    cout<<"cv1="<<cv1<<",cv2="<<cv2<<endl;
    cv2=125;
    cout<<cv2<<endl;
    return 0;
}

