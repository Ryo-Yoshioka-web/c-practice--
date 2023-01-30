#include <stdio.h>
// 6-1
//int main() {
//	int i;
//	int num[10] = { 2, 4, 1, 6, 8, 6, 4, 5, 8, 6 };
//	for ( i = 0; i < 10; i++)
//	{
//		printf("二倍にした数=%d\n", num[i] * 2);
//
//	}
//	
//}

// 6-2
//int main() {
//	int i;
//	int num[] = { 2,3,4,5,2,4,6,3,5,9 };
//	for ( i = 9; i >= 0 ; i--)
//	{
//		printf("反対=%d\n", num[i]);
//	}
//}

// //6-3
//int main() {
//	int num[10];
//	int i;
//	for ( i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &num[i]);
//	}
//	printf("偶数:");
//	for ( i = 0; i <10; i++)
//	{
//		if (num[i] % 2 == 0)
//		{
//			printf("%d", num[i]);
//		}
//	}
//	printf("奇数:");
//	for (i = 0; i < 10; i++)
//	{
//		if (num[i] % 2 == 1)
//		{
//			printf("%d", num[i]);
//		}
//	}
//}

//6-4
//int main() {
//	int i ,sum,j;
//	int num[10];
//	sum = 0;
//	printf("数値を入力してください");
//	for ( i = 0; sum <= 100 && i < 10 ; i++)
//	{
//		scanf_s("%d", &num[i]);
//		sum += num[i];
//	}
//
//
//	for ( j = 0; j < i; j++)
//	{
//		printf("%d", num[j]);
//	}
//
//}

//6-5
//int main() {
//	int binary[16];
//	int value;
//	int i;
//
//	scanf_s("%d", &value);
//
//	// 配列 binaryに0か1を代入する\
//
//	for (i = 15; i >= 0; i--)
//	{
//		binary[i] = value % 2;
//		value /= 2;
//	}
//
//
//	for (i = 0; i < 16; i++)
//		printf("%d", binary[i]);
//}

//6-6
//int main() {
//    int kuku[9][9];
//    int i, j;
//
//    // 配列 kuku に値を代入する
//    for ( i = 0; i < 9; i++)
//    {
//        for ( j = 0; j < 9; j++)
//        {
//            kuku[i][j] = (i+1) * (j+1);
//        }
//    }
//
//    for (i = 0; i < 9; i++)
//    {
//        for (j = 0; j < 9; j++)
//            printf(" %2d", kuku[i][j]);
//
//        printf("\n");
//    }
// }


//6-7
//int main() {
//    int kuku[9][9];
//    int i, j;
//    int num1, num2;
//
//    // 配列 kuku に値を代入する
//    for ( i = 0; i < 9; i++)
//    {
//        for ( j = 0; j < 9; j++)
//        {
//            kuku[i][j] = (i+1) * (j+1);
//        }
//    }
//    printf("2つの数字を入力してください\n");
//    scanf_s("%d %d", &num1, &num2);
//    printf("結果:%d", kuku[num1-1][num2-1]);
// }

//6-8
int main() {
	int i, j,max;
	int temp;
	int num[10];

	for ( i = 0; i < 10; i++)
	{
		scanf_s("%d" ,&num[i]);
	}

	for ( i = 0; i < 10; i++)
	{
		max =  i;
		for ( j = i + 1; j < 10; j++)
		{
			
			if (num[max] < num[j]) {
				max = j;
			}
		}
		temp = num[i];
		num[i] = num[max];
		num[max] = temp;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", num[i]);
	}

}
