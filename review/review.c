#include <stdio.h>
// 2-5
//int main() {
//	int x, y, temp;
//	scanf_s("%d %d", &x, &y);
//	temp = x;
//	x = y;
//	y = temp;
//	printf("x=%d y=%d", x, y);
//}

// 4-13
//int main() {
//	int i;
//	scanf_s("%d", i);
//	switch (i)
//	{
//	case 1: printf("1");
//		break;
//	case 2:
//	default:
//		break;
//	}
//}

// 5-3
//int main() {
//	int i, num;
//	num = 1;
//	for ( i = 1; i <= 8; i++)
//	{
//		printf("%d\n",num *= 2);
//	}
//}

// 5-4
//int main() {
//	int i;
//	int num;
//	int value = 1;
//	scanf_s("%d", &num);
//	for ( i = 2; i <= num ; i++)
//	{
//		value *= i;
//	}
//	printf("%d\n", value);
//}

// 5-4
//int main() {
//	int x = 1;
//	int i;
//
//	for (i = 2; i <= 7; i++)
//		x *= i;
//
//	printf("%d", x);
//}

// 5-16
//int	main() {
//    int value;
//    int i;
//
//    scanf_s("%d", &value);
//    for (i = 2; i <= (value / 2); i++)
//    {
//        if ((value % i) == 0)
//            break;
//    }
//
//    if (i > (value / 2))
//        printf("%dは素数です", value);
//    else
//        printf("%dは素数ではありません", value);
//}

// 素数
//int main(void) {
//
//	/* 変数を定義する */
//	int number, i;
//
//	/* 数値の入力を促すメッセージを表示 */
//	printf("Enter a number : \n");
//	scanf("%d", &number);
//	printf("\n");
//
//	/* 入力した数値に約数（1と自身以外）が存在するかを調べる */
//	for (i = 2; i < number; i++) {
//		if (number % i == 0) {
//			break;
//		}
//	}
//
//	/* 入力した数値が素数か否かを判定する */
//	if (i == number) {
//		printf("%d is a prime number.\n", number);
//	}
//	else {
//		printf("%d is NOT a prime number.\n", number);
//	}
//
//	return 0;
//}

//5-17
//int main() {
//	int value;
//	int i;
//	scanf_s("%d", &value);
//
//	for ( i = 2; i <= value; i++)
//	{
//		if (value % i == 0) {
//			break;
//		}
//	}
//}

//int main() {
//    int     n, x;
//
//    scanf("%d", &n);
//
//    for (x = 2; n > 1; x++)
//    {
//        while ((n % x) == 0)
//        {
//            printf("%d ", x);
//            n /= x;
//        }
//    }
//}

//int main() {
//	int i;
//	int num;
//
//	scanf_s("%d", &num);
//	for ( i = 1; i <= num; i++)
//	{
//		printf("$");
//	}
//}

//int main() {
//	int i, j;
//	int num;
//	scanf_s("%d", &num);
//	for ( i = 1; i <= num; i++)
//	{
//		for ( j = 1; j <= i; j++)
//		{
//			printf("$");
//		}
//		printf("\n");
//	}
//}


//int main() {
//	int i, j;
//	int num;
//	scanf_s("%d", &num);
//    for (i = 0; i < num; i++)
//    {
//        for (j = 0; j < num; j++)
//        {
//            if (i == j || (num - i - 1) == j)
//                printf("X");
//            else
//                printf(" ");
//        }
//
//        printf("\n");
//    }
//}

// 
//int main() {
//	int i;
//	int num1 = 0;
//	int num2 = 1;
//	int sum;
//
//	for ( i = 0; i < 1000; i+= sum)
//	{
//		sum = num1 + num2;
//		num2 += sum;
//		printf("%d", sum);
//	}
//}

//int main() {
//	int     n1 = 0;
//	int     n2 = 1;
//	int     n3 = n1 + n2;
//
//	while (n1 <= 1000)
//	{
//		printf("%d,", n1);
//
//		n1 = n2;
//		n2 = n3;
//		n3 = n1 + n2;
//	}
//}


//int main() {
//	int i;
//	int num[10];
//	int temp;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d",&num[i]);
//	}
//	//for ( i = 0; i < 5; i++)
//	//{
//	//	temp = num[i];
//	//	num[i] = num[9 - i];
//	//	num[9 - i] = temp;
//	//}
//
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d", num[i]);
//	}
//}

//int main() {
//	int binary[16];
//	int value;
//	int i;
//
//	scanf_s("%d", &value);
//
//	// 配列 binaryに0か1を代入する
//	for ( i = 15; i >= 0; i--)
//	{
//		binary[i] = value % 2;
//		value /= 2;
//	}
//
//	for (i = 0; i < 16; i++)
//		printf("%d", binary[i]);
//}

//
int main() {
    int values[10];
    int i, j, t;

    for (i = 0; i < 10; i++)
        scanf_s("%d", &values[i]);

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (values[i] < values[j])
            {
                t = values[i];
                values[i] = values[j];
                values[j] = t;
            }
        }
    }

    for (i = 0; i < 10; i++)
        printf("%d ", values[i]);
}


//int main() {
//	int i, j, max;
//	int temp;
//	int num[10];
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &num[i]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		max = i;
//		for (j = i + 1; j < 10; j++)
//		{
//
//			if (num[max] < num[j]) {
//				max = j;
//			}
//		}
//		temp = num[i];
//		num[i] = num[max];
//		num[max] = temp;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", num[i]);
//	}
//
//}
