#include <iostream>

using namespace std;

int main()
{
    int iv1,iv2;    //��������int�ͱ���
    char cv1,cv2;   //��������char�ͱ���
    cout<<"iv1="<<iv1<<" in2="<<iv2<<endl;
    cout<<"size of iv1: "<<sizeof(iv1)<<endl;  //����int����ռ���ֽ���
    cout<<"size of cv1: "<<sizeof(cv1)<<endl;  //����char����ռ���ֽ���
    cout<<"please enter two number:";
    cin>>iv1>>iv2;       //������������ֵ
    cv1=++iv1;           //��int�ͱ���ǿ��ת��Ϊchar
    cv2=iv2++;
    cout<<"cv1="<<cv1<<",cv2="<<cv2<<endl;
    cv2=125;
    cout<<cv2<<endl;
    return 0;
}

