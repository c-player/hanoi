/*��ŵ������*/

/*******
����˵��5�����ӣ�����A��5�������Ƶ�C��
��һ������A��4������ͨ��C�Ƶ�B
�ڶ�������A�����һ�������Ƶ�C
����������B��4������ͨ��A�Ƶ�C
**********
��һ��������ת��Ϊ����A��4�������Ƶ�B
һ��1������A��3������ͨ��B�Ƶ�C
һ��2������A�����һ�������Ƶ�B
һ��3������C��3������ͨ��A�Ƶ�B
��һ��������ת��Ϊ����A��3�������Ƶ�C
����
*/
#include <stdio.h>

void hanoi(int n, char A, char B, char C);

void move(char x, char y);

int main()
{
	int m;
	printf("input a number of diskes:");
	scanf("%d", &m);
	printf("The step to  moving %d disks:\n", m);
	hanoi(m, 'A', 'B', 'C');
	return 0;
}

void hanoi(int n, char A, char B, char C)
{
	if(n == 1) move(A, C);
	else
	{
		hanoi(n-1, A, C, B);//��A����n-1�����ӣ�������C���ƶ�����B
		move(A, C);         //��A�����1�����ӣ��ƶ�����C
		hanoi(n-1, B, A, C);//��B����n-1�����ӣ�������A���ƶ�����C
	}
}

void move(char x, char y)
{
	printf("%c--->%c\n", x, y);
}