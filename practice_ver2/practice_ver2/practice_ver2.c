#include <stdio.h>
//main() {
//	int years;
//	printf("�N�����͂��Ă�������\n");
//	scanf_s("%d", &years);
//	printf("%d��", years);
//}

//main() {
//	int x, y, temp;
//
//	x = 3;
//	y = 7;
//
//	// ������x��y�̒l�����ւ���
//	temp = x;
//	x = y;
//	y = temp;
//
//	printf("x=%d, y=%d", x, y);
//}

//main() {
//	int x = 30;
//	printf("%d", x);
//}

//main() {
//	int month;
//	printf("�������ł���\n");
//	scanf_s("%d", &month);
//	switch (month)
//	{
//	case 1: 
//		printf("�����A���l�̓�");
//		break;
//	case 2:
//		printf("�����L�O�̓�");
//		break;
//	case 3:
//		printf("�t���̓�");
//		break;
//	case 4:
//		printf("���a�̓�");
//		break;
//	case 5:
//		printf("���@�L�O���A�݂ǂ�̓��A���ǂ��̓�");
//		break;
//	case 7:
//		printf("�C�̓�");
//		break;
//	case 9:
//		printf("�h�V�̓��A�H���̓�");
//		break;
//	case 10:
//		printf("�̈�̓�");
//		break;
//	case 11:
//		printf("�����̓��A�ΘJ���ӂ̓�");
//		break;
//	case 12:
//		printf("�V�c�a����");
//		break;
//	default: printf("�j���͂���܂���");
//	}
//}

//main() {
//	int i;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("SPAM");
//	}
//}

//main() {
//	int i ;
//	for (i = 1; i < 10; i++)
//	{
//		printf("%d\n", i * 3);
//	}
//}

//main() {
//	int i;
//	int x = 1;
//	for (i = 1; i < 9; i++)
//	{
//		x *= 2;
//		printf("%d",x);
//	}
//}


//main() {
//	int num , i;
//	int k = 1;
//	printf("��������͂��Ă�������\n");
//	scanf_s("%d", &num);
//	for ( i = 1; i <= num; i++)
//	{
//		k *= i;
//	}
//	printf("%d", k);
//}

//main() {
//	int num[10];
//	int i;
//	int max = 0;
//	printf("������10����͂��Ă�������\n");
//	for ( i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &num[i]);
//		max += num[i];
//	}
//
//	printf("���ϓ_��%d�_�ł�", max / 10);
//}

//main() {
//	int num;
//	int i;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &num);
//		max += num;
//	}
//	printf("%d", max / 10);
//}

//main() {
//	int i;
//	int num;
//	int w = 0;
//	int l = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("0��1����͂��Ă�������\n");
//		scanf_s("%d", &num);
//		if (num == 0)
//		{
//			l++;
//		}
//		else
//		{
//			w++;
//		}
//	}
//	printf("��=%d ��=%d", w,l);
//}

//main() {
//	int i,num;
//	int max = 0;
//	int min = 9999;
//	printf("������10����͂��Ă�������");
//	for ( i = 0; i < 10; i++)
//	{
//		scanf_s("%d",&num);
//		if (max < num)
//		{
//			max = num;
//		} 
//		else if (min > num)
//		{
//			min = num;
//		}
//	}
//	printf("�ő�l==%d  �ŏ��l==%d", max, min);
//}

//main() {
//	int i, num;
//	int max ;
//	int min ;
//	printf("������10����͂��Ă�������");
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &num);
//		if (i == 0)
//		{
//			max = num;
//			min = num;
//		}
//		else
//		{
//			if (max < num)
//			{
//				max = num;
//			}
//			if (min > num)
//			{
//				min = num;
//			}
//		}
//	}
//	printf("�ő�l==%d  �ŏ��l==%d", max, min);
//}


//main() {
//	int num;
//	int i;
//	printf("������͂��Ă�������\n");
//	scanf_s("%d", &num);
//	for ( i = 0; i < num; i++)
//	{
//		printf("*");
//	}
//}

//main() {
//	int num;
//	int i;
//	printf("������͂��Ă�������");
//	scanf_s("%d", &num);
//	for ( i = 0; i < num; i++)
//	{
//		printf("%d ", i % 10);
//	}
//}

//main() {
//	int num;
//	int i;
//	for ( i = 3; i < 10000; )
//	{
//	
//		printf("%d ", i);
//		i *= 3;
//	}
//}

//main() {
//	int i = 3;
//	while (i < 10000)
//	{
//		printf("%d ", i);
//		i *= 3;
//	}
//}

//main() {
//	int num;
//	int sum = 0;
//	printf("��������͂��Ă�������\n");
//	while (sum < 100)
//	{
//		scanf_s("%d", &num);
//		sum += num;
//	}
//	printf("%d", sum);
//}


//main() {
//	int num;
//	int i;
//	printf("��������͂��Ă�������\n");
//	scanf_s("%d", &num);
//		for ( i = 2; i < num; i++)
//		{
//			if (num % i == 0) {
//				printf("�f���ł�");
//				break;
//			}
//		}
//}



// 16
//int main() {
//	int num,i;
//	printf("���͂��Ă�������\n");
//	scanf_s("%d", &num);
//	for ( i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//		{
//			break;
//		}
//	}if (num == i)
//	{
//		printf("%d�͑f���ł�", num);
//	}
//	else
//	{
//		printf("%d�͑f���ł͂���܂���", num);
//	}
//}


//int main() {
//	int num;
//	int i;
//	printf("��������͂��Ă�������\n");
//	scanf_s("%d", &num);
//	for ( i = 2; i < num; i++)
//	{
//		if (num % i == 0) {
//			break;
//		}
//	}
//	if (num == i)
//	{
//		printf("�f���ł�");
//	}
//	else
//	{
//		printf("�f���ł͂Ȃ��ł�");
//	}
//}
//
//int main() {
//    int     n, x;
//
//    scanf_s("%d", &n);
//
//    for (x = 2; n > 1; x++)
//    {
//        while ((n % x) == 0)
//        {
//            printf("%d ", x);
//            n /= x;
//        }
//    }
//
//}

//int main() {
//	int num;
//	int sum = 0;
//	int i = 0;
//	printf("���l����͂��Ă�������\n");
//	do
//	{
//		scanf_s("%d", &num);
//		sum += num;
//		i++;
//	} while (!num == 0);
//	printf("���ϓ_	%d", sum / (i-1));
//}

//int main() {
//    int size;
//    int i, j;
//
//    scanf_s("%d", &size);
//
//    for (i = 0; i < size; i++)
//    {
//        for (j = 0; j <= i; j++)
//            printf("$");
//
//        printf("\n");
//    }
//}


