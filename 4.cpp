/*
      ����������

        ��дһ����������ĳ��Ա��ÿ�ܹ���ʱ�䣨��Сʱ�ƣ���ÿСʱ�Ĺ�������
        ���㲢������Ĺ��ʡ�����Ա�ܹ���Сʱ����40 Сʱ���򳬹����ְ�ԭ��
        �ʵ�1.5 ���ļӰ๤�������㡣����Աÿ�ܹ���Сʱ����60 Сʱ���򳬹�
        60 �Ĳ��ְ�ԭ���ʵ�3 ���ļӰ๤�������㣬��40 ��50 Сʱ�Ĺ����԰�
        ��ԭ���ʵ�1.5 ���ļӰ๤�������㡣
	  
      ���������
	  
		Ҫ�������ͬʱ��εĹ��ʲ��죬��Ҫ���ò�νṹ������ͬʱ��ε�
		���ʣ��ܹ��������㼶������νṹ���Բ��� if��else ���� switch ���
	  
	  ������ƣ�
	    �ٲ���if��else
		�ڲ���switch
*/

#include<iostream>

using namespace std;

int main()
{
	double time,salary,sum;   //ʱ�䣬ÿСʱ���ʣ��ܽ��        
	cout<<"Please input employee's work time and wage_per_hour:"<<endl;
	cin>>time;
	cin>>salary;
	if(time>60)               
		sum=40*salary+20*salary*1.5+(time-60)*3;
	if(time<=60&&time>40)
		sum=(time-40)*salary*1.5+40*salary;
	if(time<=40)
		sum=time*salary;
	cout<<"The employee's wage :"<<endl;
	cout<<sum<<endl;
     return 0;
}

