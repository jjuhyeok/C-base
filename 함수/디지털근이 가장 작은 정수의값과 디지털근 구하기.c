#pragma warning(disable:4996)
#include <stdio.h>
int add_digits(int N) {//�����б��� ����� �Լ� ����
	int z = 0;//���� z�� 0�� ����
	int sum = 0;//���� sum�� 0�� ����
	for (int i = 1; i <= N; i = i * 10) {//N��ŭ �ݺ��Ǵ� �ݺ���
		z = (N % (i * 10)) / (i);//�� �ڸ��� ���� z�� ����
		sum = sum + z;//sum�� z�� ���ϱ�
		z = 0;//z�� 0���� �ʱ�ȭ
	}
	int h = sum;//sum�� ���� h�� ����
	int sum1 = 0;//sum1���� �� 0���� �ʱ�ȭ
	int k = 10;//����k�� ���� �� 10 ����
	while (1) {//���ѷ���
		sum1 = (sum % k) / (k / 10) + sum1;//sum1�� �����б� �����ϱ�
		k = k * 10;//k�ǰ� 10�� ���ϱ�
		if (k > sum * 10)//k�ǰ��� sum*10�̻��� ����
			break;//Ż��
	}int sum2 = 0;//���� sum2�� ����
	if (sum1 >= 10) {//�����б��� 10�̻��� ����
		sum2 = sum1 % 10 + sum1 / 10;//�ٽ� �ɰ��� �����ֱ�
		sum1 = sum2;//sum2�� ���� sum1�� ����
	}
	return sum1;//sum1 ��ȯ�ϱ�
}
int main() {//�����Լ�����
	int a;//���� a ����
	int c = 0;//���� c����
	int sum = 0;//���� sum����
	int b = 0;//���� b����
	while (1) {//���ѷ���
		scanf("%d", &a);//a�� ���� ����
		if (a < 0)//a�� 0���� ��������
			break;//Ż��
		if (c == 0) {//ó�� �ݺ��� ����
			sum = add_digits(a);//sum�� add_digits(a)�Լ� ����
			b = a;//b�� a����
		}
		c = c + 1;//c�� �� 1�� ����
		if (sum > add_digits(a)) {//sum�� ���� add_digits(a)���� ū ����
			sum = add_digits(a);//sum�� add_digits(a) ����
			b = a;//b�� a����
		}
	}
	printf("%d %d", b, sum);//�����б��� ���� ���� �����ǰ��� �����б� ���
	return 0;
}