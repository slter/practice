/*
     ����������
           ��д���򣬴���һ�� Employee �࣬���������ַ����飬��ʾ�������Ա����䡣��
           �캯����ʼ��ÿ����Ա��display()�����������Ķ������ݴ�ӡ���������е����ݳ�Ա
           �Ǳ����ģ������ǹ����ġ�
     ���������
           ���һ��Employee�࣬��������������  init������display������
           ��������public���Σ����ݳ�Ա��private����


*/

#include <iostream>

using namespace std;

class Employee {
public:              //���ж�  ��Ա����
    void init(string n,char s,int y);   //��ʼ��
    void display();                     //��ӡ���ݳ�Ա
private:             //˽�ж�  ���ͳ�Ա
    string name;     //����
    char sex;        //�Ա�
    int year;        //����
};
void Employee:: init(string n,char s,int y) {  //���캯��
    name=n; sex=s; year=y;
}
void Employee:: display() {
    cout<<name<<"  "<<sex<<"  "<<year<<endl;
}

int main()
{
    Employee e;        //��������e
    e.init("zhangsan",'M',30);
    e.display();
    e.init("lishi",'M',25);
    e.display();
    e.init("lihong",'W',30);
    e.display();


}
