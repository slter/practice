/*
      ����������
          ��д�������һ���࣬������� 3 ��˽�����ݣ����� a �۸� 20 Ԫ/�������� b ��
          �� 15 Ԫ/�����Լ����������� total�����Թ��캯����ʽ����ֵ���������ӵ���������
          �����Ӧ�������롣
      ���������
          �������������
               ��sum����:ͨ��ʵ�ζ��βεĸ�ֵ����������������
               ��display���������������
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
    cout<<"����ӵ�a������Ϊ:"<<a1<<"��\n";
    cout<<"����ӵ�b������Ϊ:"<<b1<<"��\n";
    cout<<"�����������Ϊ��"<<total<<"Ԫ\n";
}

int main()
{
    gas g;
    double a1,b1;
    cout<<"����������ӵ�a�࣬b�����͸��Ƕ���:"<<endl;
    cin>>a1>>b1;
    g.sum(a1,b1);
    g.display(a1,b1);
}
