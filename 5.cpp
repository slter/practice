#include<iostream>

using namespace std;

int main()
{
	char operate;      //定义字符变量
	double num1,num2,result;  //定义两个输入数，一个输出结果数
	cout<<"pealse intput arithmetic expression:"<<endl;
	cin>>num1>>operate>>num2;
    if(num1!=0&&num2!=0&&operate!=0)    //当输入为0 0 0 时程序退出
	{
		switch(operate)                 //选择进行那种运算
		{
		case '+':
			result=num1+num2;
			cout<<num1<<operate<<num2<<"="<<result<<endl;
			break;
		case '-':
			result=num1+num2;
			cout<<num1<<operate<<num2<<"="<<result<<endl;
			break;
		case '*':
			result=num1*num2;
			cout<<num1<<operate<<num2<<"="<<result<<endl;
			break;
		case '/':
			result=num1/num2;
			cout<<num1<<operate<<num2<<"="<<result<<endl;
			break;
        default:
			cout<<"your operate is false"<<endl;
		}
	}
	return 0;

}


