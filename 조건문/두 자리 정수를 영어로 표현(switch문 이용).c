#include<stdio.h>

int main() {

	int a, b, c; // ������ ����
	scanf("%d", &a); //������ �Է¹޴´�

	if (a >= 10 && a < 20)  // a�� 10�̻� 20�̸��� ����
		switch (a) {
		case 10:// a�� 10�϶�
			printf("ten"); //ten ���
			break; //case�� ������ switch�� ����������
		case 11: // a�� 11�϶�
			printf("eleven"); // eleven ���
			break; //case�� ������ switch�� ����������
		case 12: // a�� 12�϶�
			printf("twelve"); // twelve ���
			break; //case�� ������ switch�� ����������
		case 13: // a�� 13�϶�
			printf("thirteen");// thirteen ���
			break; //case�� ������ switch�� ����������
		case 14: // a�� 14�϶�
			printf("fourteen");// fourteen ���
			break; //case�� ������ switch�� ����������
		case 15: // a�� 15�϶�
			printf("fifteen");// fifteen ���
			break; //case�� ������ switch�� ����������
		case 16: // a�� 16�϶�
			printf("sixteen");// sixteen ���
			break; //case�� ������ switch�� ����������
		case 17: // a�� 17�϶�
			printf("seventeen");// seventeen ���
			break; //case�� ������ switch�� ����������
		case 18: // a�� 18�϶�
			printf("eighteen");// eighteen ���
			break; //case�� ������ switch�� ����������
		case 19: // a�� 19�϶�
			printf("nineteen");// nineteen ���
			break; //case�� ������ switch�� ����������
		}
	else if (a >= 20 && a <= 99) { //a�� 20�̻� 99������ ����

		b = a / 10; // a / 10�� ���� b�� ����
		c = a % 10; // a % 10�� ���� c�� ����

		if (b > 1 && b <= 9) // b�� 1�ʰ� 9������ ����
			switch (b) {
			case 2: // b�� 2�϶�
				printf("twenty"); // tewenty ���
				break; //case�� ������ switch�� ����������
			case 3:// b�� 3�϶�
				printf("thirty"); // thirty ���
				break; //case�� ������ switch�� ����������
			case 4:// b�� 4�϶�
				printf("forty"); // forty ���
				break; //case�� ������ switch�� ����������
			case 5:// b�� 5�϶�
				printf("fifty"); // fifty ���
				break; //case�� ������ switch�� ����������
			case 6:// b�� 6�϶�
				printf("sixty"); // sixty ���
				break; //case�� ������ switch�� ����������
			case 7:// b�� 7�϶�
				printf("seventy"); // seventy ���
				break; //case�� ������ switch�� ����������
			case 8:// b�� 8�϶�
				printf("eighty"); // eighty ���
				break; //case�� ������ switch�� ����������
			case 9:// b�� 9�϶�
				printf("ninety"); // ninety ���
				break; //case�� ������ switch�� ����������
			}

		if (c >= 0 && c <= 9) // c�� 0�̻� 9������ ����
			switch (c) {
			case 0: // c�� 0�϶�
				break; //case�� ������ switch�� ����������
			case 1: // c�� 1�϶�
				printf("-one"); //  -one ���
				break; //case�� ������ switch�� ����������
			case 2: // c�� 2�϶�
				printf("-two"); // -two ���
				break; //case�� ������ switch�� ����������
			case 3: // c�� 3�϶�
				printf("-three"); // -three ���
				break; //case�� ������ switch�� ����������
			case 4: // c�� 4�϶�
				printf("-four"); // -four ���
				break; //case�� ������ switch�� ����������
			case 5: // c�� 5�϶�
				printf("-five"); // -five ���
				break; //case�� ������ switch�� ����������
			case 6: // c�� 6�϶�
				printf("-six"); // -six ���
				break; //case�� ������ switch�� ����������
			case 7: // c�� 7�϶�
				printf("-seven"); // -seven ���
				break; //case�� ������ switch�� ����������
			case 8: // c�� 8�϶�
				printf("-eight"); // -eight ���
				break; //case�� ������ switch�� ����������
			case 9: // c�� 9�϶�
				printf("-nine"); // -nine ���
				break; //case�� ������ switch�� ����������
			}
	}



	else // a�� 2�ڸ� ������ �ƴҰ��
		printf("none"); // none���

	return 0;
}