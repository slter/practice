/*
     �������⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ����Ӷ���Ϊ���٣�
     
    ��������� 1  2  3  4  5  6  7  8  9  
        1  1  2  3  5  8  13 21    
 */

import java.util.Scanner;

public class RabbitDemo {
	public static void main(String[] args) {
		int n,b;
		System.out.println("Please input the month you want to view:\n");
		Scanner in=new Scanner(System.in);
		
		n=in.nextInt();
		b=fun(n);
		System.out.println(fun(n));
	}
private static int fun(int n) {
	if(n==1||n==2)
		return 1;
	else
		return fun(n-1)+fun(n-2);
}
}
