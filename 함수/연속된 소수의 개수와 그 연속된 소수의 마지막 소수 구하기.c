#pragma warning(disable:4996)
#include <stdio.h>
int count_prime_number(int cnt, int num) {//���ӵ� �Ҽ��� ������ ���� ���� �Լ� ����
	for (int i = 2; i <= num; i++) {//2���� num���� 1�� �����ϴ� �ݺ���
		if (num % i == 0)//����� ����
			cnt = cnt + 1;//cnt 1�� ����
	}
	if (cnt == 2)//�Ҽ��� ����
		return cnt;//cnt�� ��ȯ
	else//�Ҽ��� �ƴ� ����
		return 0;//0�� ��ȯ
}
int is_prime_number(int num) {//�Ҽ��� �Ǻ��ϴ� �Լ� ����
	int cnt = 0;//cnt�� 0���� �ʱ�ȭ
	for (int i = 1; i <= num; i++) {//1���� num���� 1�� �����ϴ� �ݺ���
		if (num % i == 0)//i�� ����������� ����
			cnt = cnt + 1;//cnt 1�� ����
	}
	if (cnt == 2)//�Ҽ��� ����
		return 1;//1��ȯ
	else//�Ҽ��� �ƴ� ����
		return 0;//0��ȯ
}
int main() {//�����Լ�����
	int x[9999];//�迭x����
	int N;//����N����
	int M = 0;//����M���� �� 0���� �ʱ�ȭ
	scanf("%d", &N);//N�� �����ϱ�
	for (int i = 0; i < N; i++) {//N��ŭ �ݺ��ϴ� �ݺ���
		scanf("%d", &x[M]);//�迭x�� �����ϱ�
		M = M + 1;//M�ǰ� 1�� ����
	}
	int d = 0;//���� d ���� �� 0���� �ʱ�ȭ
	int max = 0;//���ӵ� �Ҽ��� ������ ���� max���� ���� �� �ʱ�ȭ
	int max1 = 0;//���ӵ� �Ҽ��� ������ �Ҽ��� ������ ���� max1���� ���� �� �ʱ�ȭ
	for (int i = 0; i < N; i++) {//N��ŭ �ݺ��ϴ� �ݺ���
		if (is_prime_number(x[i]) && x[i] < 100) {//����x[i]�� �Ҽ��̸鼭 100�̸��� ����
			d = d + 1;//d�ǰ� 1�� ����
		}
		else {
			if (max < d) {//max�� d���� ���� ����
				max = d;//max�� d ����
				max1 = x[i - 1];//max1�� x[i-1]����
			}
			d = 0;//d�� 0���� �ʱ�ȭ
		}
		if (i == N - 1) {//i�� ���� N-1�� ����
			if (max < d) {//max�� ���� d���� ���� ����
				max = d;//max�� d����
				max1 = x[i];//max1�� x[i]����
			}
			d = 0;//d�� 0���� �ʱ�ȭ
		}
	}
	if (max == 0)//�Ҽ��� ������ ����
		printf("0");
	else//�Ҽ��� �־��� ����
		printf("%d\n%d", max, max1);//���ӵ� �Ҽ��� ������ �� ���ӵ� �Ҽ��� ������ �Ҽ� ���
	return 0;
}