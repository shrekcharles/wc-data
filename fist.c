#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	/*实现功能，控制台输入两个数，加法运算*/
	/*int num1, num2, sun;
	printf("请输入两个整数\n");
	scanf_s("%d%d", &num1, &num2);
	sun = num1 + num2;
	printf("%d",sun);*/ 



	INT_MAX;//int类型最大值2147483647
	INT_MIN;//int类型最小值-（2147483647 -1）
	/*实现功能，不使第三个变量，交换两个int的值*/
	/*这是方法一，由于int类型大小限制，可能会导致溢出，出错，*/
	/*int a = 3;
	int b = 5;
	printf("交换前：a=%d b=%d\n",a,b);
	a = a + b;
	printf("a=%d\n", a);//a = a+b 的和8
	b = a - b;
	printf("b=%d\n", b);//b = a-b 的差3
	a = a - b;
	printf("a=%d",a);//a =  a - b 的差5

	printf("交换后：a=%d b=%d\n",a,b);*/

	/*这是方法二，在企业里会采用第三个变量的方法，代码的可读性更高，执行效率更，
	异或的操作，可读性差，执行效率低于其他方法！ */
	/*int a = 5,b = 3;
	printf("交换前：a=%d b=%d\n", a, b);

	a = a ^ b;//^在C语言是按（二进制）位异或的意思，相同为0，相异为1
	b = a ^ b;
	a = a ^ b;
	printf("交换后：a=%d b=%d\n", a, b);*/

	/*在一个非空整形数组，只有一个只会出现一次，其他的每个元素均会出现二次，找到那个只出现一次的元素*/
	/*方法一使用嵌套循环，在数组长度大的情况下，执行效率非常低，*/
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int length = sizeof(arr) / sizeof(arr[0]);//计算length的个数
	/*printf("数组的长度为: %d\n", length);
	for (int i = 0; i < length; i++)
	{
		int count = 0;//计数器
		for (int j = 0; j < length; j++)
		{
			if (arr[i] == arr[j])
			{
				count++; 
			}
		}
		if (count == 1)
		{
			printf("只出现一次的那个元素是%d\n",arr[i]);
			break;
		}
	}*/
	/*方法二，采用按(二进制)位异或*/
	/*小知识：0异或任何数子都等于0*/
	/*int ret = 0;//
	for (int  i = 0; i < length; i++)
	{
		ret = ret ^ arr[i];
		printf("%d\n",ret);
	}
	printf("只出现一次的那个元素是%d\n", ret);*/

	/*程序运行，你的电脑在一分钟后关机，如果你输入你是猪，就取消关机*/
	//system();专门用来执行window系统指令
	system("stutdown -s -t 60" );//倒计时60秒关机
	char input[20] = {0};
again:
	printf("你的电脑在一分钟后关机，如果你输入你是猪，就取消关机\n");
	scanf_s("%s",input);//%s打印字符串格式
	if (strcmp(input, "你是猪") == 0)//判断input里面放的是不是你是猪，strcmp()用于比较两个字符串并根据比较结果返回整数
	{
		system("stutdown -a");//取消关机
	}
	else
	{
		goto again;//再给一次机会，跳到指定的地方
	}
	return 0;
}