#include<iostream>

using namespace std;

int main()
{
	char operate;      //�����ַ�����
	double num1,num2,result;  //����������������һ����������
	cout<<"pealse intput arithmetic expression:"<<endl;
	cin>>num1>>operate>>num2;
    if(num1!=0&&num2!=0&&operate!=0)    //������Ϊ0 0 0 ʱ�����˳�
	{
		switch(operate)                 //ѡ�������������
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


