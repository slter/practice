/*
      ����������
              ʹ��ѭ�������㲢�洢ǰ 0 �� 16 �Ľ׳ˣ�����ʾ

      ���������
              �׳����ֵ��16��> int ��Χ
              ������long int �洢���
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
