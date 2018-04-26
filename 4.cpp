/*
      问题描述：

        编写一个程序，输入某雇员的每周工作时间（以小时计）和每小时的工资数，
        计算并输出他的工资。若雇员周工作小时超过40 小时，则超过部分按原工
        资的1.5 倍的加班工资来计算。若雇员每周工作小时超过60 小时，则超过
        60 的部分按原工资的3 倍的加班工资来计算，而40 到50 小时的工资仍按
        照原工资的1.5 倍的加班工资来计算。
	  
      问题分析：
	  
		要计算出不同时间段的工资差异，需要采用层次结构来区别不同时间段的
		工资（总共有三个层级）。层次结构可以采用 if—else 语句和 switch 语句
	  
	  问题设计：
	    ①采用if—else
		②采用switch
*/

#include<iostream>

using namespace std;

int main()
{
	double time,salary,sum;   //时间，每小时工资，总金额        
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

