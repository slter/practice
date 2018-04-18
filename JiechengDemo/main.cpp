/*
      问题描述：
              使用循环来计算并存储前 0 到 16 的阶乘，并显示

      问题分析：
              阶乘最大值：16！> int 范围
              所以用long int 存储结果
*/
#include <iostream>

using namespace std;

int main()
{
    int n;   //
    long int result=1;
    cout<<"Please input a number(1~16): ";
    cin>>n;
    if(n==0)
        cout<<n<<"!="<<result<<endl;
    else {
        for(int i=2;i<=n;i++) {
            result=result*i;
        }
        cout<<n<<"!="<<result<<endl;
    }

}
