#pragma warning(disable:4996)
#include <stdio.h>
int multiple(x, y) {//����� �� ���ϴ� �Լ�
	if (x % y == 0)//���� x % y�� 0������
		return 1;//1��ȯ
	else//������ ������ �ʴ� ����
		return 0;//0��ȯ
}
int maximum(x, y) {//max���ϴ� �Լ�
	if (x >= y)//x��y���� ���ų� ũ��
		return x;//x ��ȯ
	else//y�� x���� ū ����
		return y;//y ��ȯ
}
int digit_maximum(x) {//
	int z = 0;//z�� 0 ����
	int max = 0;//max�� 0 ����
	for (int i = 10; i <= x * 10; i = i * 10) {//�ݺ���
		z = 0;//z�� 0 ����
		z = (x % i) / (i / 10);//�������� ����
		if (i == 10)//ó�� �ݺ����� ������ ����
			max = z;//max�� z ����
		if (max < z)//z�� max���� ū ����
			max = z;//max�� z ����
	}
	return max;//max ��ȯ
}
int main() {//���� �Լ� ����
	int N, M, K;//���� ����
	int a;
	int c = 0;//���� ���� �� �ʱ�ȭ
	int c1 = 0;
	int mm;//�������� ������ ���� ����
	scanf("%d %d %d", &N, &M, &K);//����N,M,K�� ����
	for (M; M >= N; M--) {//M���� N���� 1�� �پ������ �ݺ�
		c = c + 1;//c�� �� 1�� ����
		if (multiple(M, K)) {//multiple�Լ��� M,K ����
			c1 = c1 + 1;//c1�� �� 1�� ����
			if (c1 == 1)//c1�� 1�� ����
				a = digit_maximum(M);//a�� digit_maximum(M)����
			if (digit_maximum(M) > a)//digit_maximum(M)�� a���� ū ����
				a = digit_maximum(M);//a�� digit_maximum(M)����
		}
		if (c == 1)//c�� 1�� ����
			mm = M % K;//mm�� M%k����
		if (mm < M % K)//mm���� M % K �� ū ����
			mm = M % K;//mm�� M % K ����
	}
	if (a > mm)//���������� �ִ밪���� �ڸ����� �ִ밪�� ū ����
		printf("%d", a);//�ڸ����� �ִ밪 ���
	else//�ڸ����� �ִ밪�� ū ��캸�� ���������� �ִ밪�� ū ����
		printf("%d", mm);//���������� �ִ밪 ���
}