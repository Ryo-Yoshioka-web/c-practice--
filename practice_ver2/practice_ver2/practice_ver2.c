#include <stdio.h>
//main() {
//	int years;
//	printf("年齢を入力してください\n");
//	scanf_s("%d", &years);
//	printf("%d歳", years);
//}

//main() {
//	int x, y, temp;
//
//	x = 3;
//	y = 7;
//
//	// ここでxとyの値を入れ替える
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
//	printf("今何月ですか\n");
//	scanf_s("%d", &month);
//	switch (month)
//	{
//	case 1: 
//		printf("元日、成人の日");
//		break;
//	case 2:
//		printf("建国記念の日");
//		break;
//	case 3:
//		printf("春分の日");
//		break;
//	case 4:
//		printf("昭和の日");
//		break;
//	case 5:
//		printf("憲法記念日、みどりの日、こどもの日");
//		break;
//	case 7:
//		printf("海の日");
//		break;
//	case 9:
//		printf("敬老の日、秋分の日");
//		break;
//	case 10:
//		printf("体育の日");
//		break;
//	case 11:
//		printf("文化の日、勤労感謝の日");
//		break;
//	case 12:
//		printf("天皇誕生日");
//		break;
//	default: printf("祝日はありません");
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
//	printf("数字を入力してください\n");
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
//	printf("数字を10回入力してください\n");
//	for ( i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &num[i]);
//		max += num[i];
//	}
//
//	printf("平均点は%d点です", max / 10);
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
//		printf("0か1を入力してください\n");
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
//	printf("勝=%d 負=%d", w,l);
//}

//main() {
//	int i,num;
//	int max = 0;
//	int min = 9999;
//	printf("数字を10回入力してください");
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
//	printf("最大値==%d  最小値==%d", max, min);
//}

//main() {
//	int i, num;
//	int max ;
//	int min ;
//	printf("数字を10回入力してください");
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
//	printf("最大値==%d  最小値==%d", max, min);
//}


//main() {
//	int num;
//	int i;
//	printf("個数を入力してください\n");
//	scanf_s("%d", &num);
//	for ( i = 0; i < num; i++)
//	{
//		printf("*");
//	}
//}

//main() {
//	int num;
//	int i;
//	printf("個数を入力してください");
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
//	printf("数字を入力してください\n");
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
//	printf("数字を入力してください\n");
//	scanf_s("%d", &num);
//		for ( i = 2; i < num; i++)
//		{
//			if (num % i == 0) {
//				printf("素数です");
//				break;
//			}
//		}
//}



// 16
//int main() {
//	int num,i;
//	printf("入力してください\n");
//	scanf_s("%d", &num);
//	for ( i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//		{
//			break;
//		}
//	}if (num == i)
//	{
//		printf("%dは素数です", num);
//	}
//	else
//	{
//		printf("%dは素数ではありません", num);
//	}
//}


//int main() {
//	int num;
//	int i;
//	printf("数字を入力してください\n");
//	scanf_s("%d", &num);
//	for ( i = 2; i < num; i++)
//	{
//		if (num % i == 0) {
//			break;
//		}
//	}
//	if (num == i)
//	{
//		printf("素数です");
//	}
//	else
//	{
//		printf("素数ではないです");
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
//	printf("数値を入力してください\n");
//	do
//	{
//		scanf_s("%d", &num);
//		sum += num;
//		i++;
//	} while (!num == 0);
//	printf("平均点	%d", sum / (i-1));
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


