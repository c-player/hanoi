/*汉诺塔问题*/

/*******
比如说有5个盘子（将将A的5个盘子移到C）
第一步：将A的4个盘子通过C移到B
第二步：将A的最后一个盘子移到C
第三步：将B的4个盘子通过A移到C
**********
第一步则将问题转化为：将A的4个盘子移到B
一（1）：将A的3个盘子通过B移到C
一（2）：将A的最后一个盘子移到B
一（3）：将C的3个盘子通过A移到B
进一步将问题转化为：将A的3个盘子移到C
……
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
		hanoi(n-1, A, C, B);//将A柱的n-1个盘子，借助柱C，移动到柱B
		move(A, C);         //将A柱最后1个盘子，移动到柱C
		hanoi(n-1, B, A, C);//将B柱的n-1个盘子，借助柱A，移动到柱C
	}
}

void move(char x, char y)
{
	printf("%c--->%c\n", x, y);
}