#include<stdio.h>

int main() {

    int a;//���� ����
    scanf("%d", &a);//���� a �Է�
    int x[20];//�迭x�� ũ�� 20���� ����
    int i, j, h;//���� ����
    int max;//���� ����
    int min;//���� ����
    int xmax[20] = { 0 };//�迭 ����
    int xmin[20] = { 0 };//�迭 ����
    for (i = 0; i < a; i++) {//i�� 0���� a�̸����� 1�� �����ϸ� �ݺ�
        scanf("%d", &x[i]);//�迭 x[i]�� �Է�
        xmax[i] = x[i];//xmax[i]�� x[i]�� ����
        xmin[i] = x[i];//xmin[i]�� x[i]�� ����
    }
    for (i = a - 1; 0 <= i; i--) {//i�� a-1���� 0<=i���� 1�� �پ��� �ݺ�
        printf(" %d", x[i]);//�迭 ���
    }
    int p = 0;//���� ����
    if (a == 1) //a�� 1�� ����
        printf("%d %d", xmax[0], xmin[0]);//���
    while (a > 1) {//a>1�̸� �ݺ�
        p = 0;//���� p�� �ʱ�ȭ
        for (h = 0; h < a; h = h + 3) {
            max = xmax[h];//max�� xmax[h] ����
            min = xmin[h];//min�� xmin[h] ����
            for (j = h + 1; j < h + 3 && j < a; j++) {//i�� ����ĭ ���� �ٴ��� ĭ���� �׸��� j<N���� ���� ���� �ݺ�
                if (max < xmax[j]) {//max <xmax[j]�� ����
                    max = xmax[j];//max�� xmax[j] ����
                }
                if (min > xmin[j]) {//min > xmin[j]�� ����
                    min = xmin[j];//min�� xmin[j] ����
                }
            }
            xmax[p] = max;//xmax[p]�� max ����
            xmin[p] = min;//xmin[p]�� min ����
            p = p + 1;//p�� 2����
        }
        if (a % 3 != 0) //a % 3 �� 0�� �ƴ� ����
            a = a / 3 + 1;// a�� a / 3 +1 ����
        else  // a % 3�� 0�� ����
            a = a / 3;//a�� a / 3 ����
        int k;//���� ����
        int c = 1;//���� ����
        if (c == 1)//c�� 1�� ����
            printf("\n");// �ٹٲ�
        for (k = 0; k < a; k++) {//k�� 0�������� a�̸����� 1�������ϸ� �ݺ�
            printf(" %d", xmax[k]);//xmax ���
        }
        printf("\n");//�ٹٲ�
        for (k = 0; k < a; k++) {//k�� 0�������� a�̸����� 1�������ϸ� �ݺ�
            printf(" %d", xmin[k]);//xmin ���
        }
    }

    return 0;
}