/*
     兔子问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子对数为多少？
     
    问题分析： 1  2  3  4  5  6  7  8  9  
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
