#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	/*ʵ�ֹ��ܣ�����̨�������������ӷ�����*/
	/*int num1, num2, sun;
	printf("��������������\n");
	scanf_s("%d%d", &num1, &num2);
	sun = num1 + num2;
	printf("%d",sun);*/ 



	INT_MAX;//int�������ֵ2147483647
	INT_MIN;//int������Сֵ-��2147483647 -1��
	/*ʵ�ֹ��ܣ���ʹ��������������������int��ֵ*/
	/*���Ƿ���һ������int���ʹ�С���ƣ����ܻᵼ�����������*/
	/*int a = 3;
	int b = 5;
	printf("����ǰ��a=%d b=%d\n",a,b);
	a = a + b;
	printf("a=%d\n", a);//a = a+b �ĺ�8
	b = a - b;
	printf("b=%d\n", b);//b = a-b �Ĳ�3
	a = a - b;
	printf("a=%d",a);//a =  a - b �Ĳ�5

	printf("������a=%d b=%d\n",a,b);*/

	/*���Ƿ�����������ҵ�����õ����������ķ���������Ŀɶ��Ը��ߣ�ִ��Ч�ʸ���
	���Ĳ������ɶ��Բִ��Ч�ʵ������������� */
	/*int a = 5,b = 3;
	printf("����ǰ��a=%d b=%d\n", a, b);

	a = a ^ b;//^��C�����ǰ��������ƣ�λ������˼����ͬΪ0������Ϊ1
	b = a ^ b;
	a = a ^ b;
	printf("������a=%d b=%d\n", a, b);*/

	/*��һ���ǿ��������飬ֻ��һ��ֻ�����һ�Σ�������ÿ��Ԫ�ؾ�����ֶ��Σ��ҵ��Ǹ�ֻ����һ�ε�Ԫ��*/
	/*����һʹ��Ƕ��ѭ���������鳤�ȴ������£�ִ��Ч�ʷǳ��ͣ�*/
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int length = sizeof(arr) / sizeof(arr[0]);//����length�ĸ���
	/*printf("����ĳ���Ϊ: %d\n", length);
	for (int i = 0; i < length; i++)
	{
		int count = 0;//������
		for (int j = 0; j < length; j++)
		{
			if (arr[i] == arr[j])
			{
				count++; 
			}
		}
		if (count == 1)
		{
			printf("ֻ����һ�ε��Ǹ�Ԫ����%d\n",arr[i]);
			break;
		}
	}*/
	/*�����������ð�(������)λ���*/
	/*С֪ʶ��0����κ����Ӷ�����0*/
	/*int ret = 0;//
	for (int  i = 0; i < length; i++)
	{
		ret = ret ^ arr[i];
		printf("%d\n",ret);
	}
	printf("ֻ����һ�ε��Ǹ�Ԫ����%d\n", ret);*/

	/*�������У���ĵ�����һ���Ӻ�ػ��������������������ȡ���ػ�*/
	//system();ר������ִ��windowϵͳָ��
	system("stutdown -s -t 60" );//����ʱ60��ػ�
	char input[20] = {0};
again:
	printf("��ĵ�����һ���Ӻ�ػ��������������������ȡ���ػ�\n");
	scanf_s("%s",input);//%s��ӡ�ַ�����ʽ
	if (strcmp(input, "������") == 0)//�ж�input����ŵ��ǲ���������strcmp()���ڱȽ������ַ��������ݱȽϽ����������
	{
		system("stutdown -a");//ȡ���ػ�
	}
	else
	{
		goto again;//�ٸ�һ�λ��ᣬ����ָ���ĵط�
	}
	return 0;
}