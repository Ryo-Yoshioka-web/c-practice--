#include <stdio.h>

//1
//main() {
//	int i;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("SPAM\n");
//	}
//}

//2
//main() {
//	int i;
//	for ( i =1; i < 10; i++)
//	{
//		printf("%d\n", 3*i);
//	}
//}

//3
//int main() {
//	int i ;
//	int x = 1;
//	for (i = 1; i <= 8; i++)
//	{
//		x *= 2;
//		printf("2の%d乗=%d\n", i, x);
//	}
//}

//4
//int main() {
//	int i;
//	int x = 1;
//	for ( i = 1; i <= 7; i++)
//	{
//		x *= i;
//		printf("%d\n",x);
//	}
//}

//5
//int main() {
//	int i;
//	int num;
//	int sum = 0;
//	for ( i = 1; i <= 10; i++)
//	{
//		scanf_s("%d", &num);
//		sum += num;
//	}
//	printf("%d", sum / 10);
//}




//6
//int main() {
//	int w = 0;
//	int l = 0;
//	int i;
//	int num;
//	printf("0or1を10回入力してください\n");
//	for ( i = 1; i <= 10; i++)
//	{
//		scanf_s("%d\n", &num);
//		if (num == 0) {
//			l++;
//		}
//		else
//		{
//			w++;
//		}
//	}
//	printf("勝=%d 負=%d",w,l);
//}

//6
//int main() {
//	int wins = 0;
//	int result;
//	int i;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &result);
//
//		if (result == 1)
//			wins++;
//	}
//
//	printf("勝ち%d回、負け%d回", wins, 10 - wins);
//}






//7
//int main() {
//	int i;
//	int j;
//	int t;
//	int sumt= 0;
//	int sumj = 0;
//	for ( i = 1; i <= 9; i++)
//	{
//		printf("%d表、巨人の得点は？",i);
//		scanf_s("%d",&j);
//		sumj += j;
//		printf("%d裏、阪神の得点は？", i);
//		scanf_s("%d", &t);
//		sumt+= t;
//	}
//	printf("巨人：%d点\n", sumj);
//	printf("阪神：%d点\n", sumt);
//	if (sumj < sumt)
//	{
//		printf("阪神の勝ち");
//	}
//	else
//	{
//		printf("巨人の勝ち");
//	}
//}




//8
//int main() {
//	int i;
//	int num;
//	int max = 0;
//	for ( i = 1; i <= 10; i++)
//	{
//		scanf_s("%d\n", &num);
//		if (num > max)
//		{
//			max = num;
//		}
//	}
//	printf("最大値は%dです", max);
//}

//9
//int main() {
//	int i;
//	int num;
//	int max = 0;
//	int min = 0;
//	for ( i = 1; i < 10; i++)
//	{
//		scanf_s("%d\n", &num);
//		
//		if (num > max)
//		{
//			max = num;
//			min = num;
//		}
//		else if (num < min)
//		{
//			min = num;
//		}
//	}
//	printf("最大値%d\n最小値%d\n", max, min);
//
//}

//9
//int main() {
//	int max_value;
//	int min_value;
//	int value;
//	int i;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &value);
//		// 一回目の入力で比較対象を作るためmaxやminにも代入してあげる。
//
//		if (i == 0)
//		{
//			max_value = value;
//			min_value = value;
//		}
//		else
//		{
//			if (value > max_value)
//				max_value = value;
//
//			if (value < min_value)
//				min_value = value;
//		}
//	}
//
//	printf("最大値=%d 最小値=%d", max_value, min_value);
//
//
//}

//10
//int main() {
//	int i;
//	int num;
//	printf("数値を入力してください\n");
//	scanf_s("%d", &num);
//	for ( i = 1; i <= num; i++)
//	{
//		printf("*");
//	}
//}

//10
// while文で繰り返しを使う　一個ずつ引き算をしていって0になったら終わる。
//int main() {
//    int count;
//
//    scanf("%d", &count);
//
//    while (count > 0)
//    {
//        printf("*");
//        count--;
//    }
//}

//11
//int main() {
//	int i;
//	int num;
//	printf("数値を入力してください\n");
//	scanf_s("%d", &num);
//	for ( i = 1; i <= num; i++)
//	{
//		if (i == 10)
//		{
//			i = 0;
//		}
//		printf("%d",i);
//	}
//}

//11
// もしくは%10でわっていくとでてくる
//int main() {
//	int count;
//	int i;
//	int out = 0;
//
//	scanf("%d", &count);
//
//	for (i = 0; i < count; i++)
//	{
//		printf("%d", out++);
//
//		if (out > 9)
//			out = 0;
//	}
//}

//12 
//int main() {
//	int i;
//	int count = 30;
//	for ( i = 3; i < count; i*=3)
//	{
//		printf("%d", i);
//	}
//}


//12 
// // whileで繰り返しを使っていく　×３ずつを代入していく
//int main() {
// int pow = 3;
// while (pow < 10000)
//{
//	printf("%d ", pow);
//
//	pow *= 3;
//}
//}


//13
//int main() {
//	int i;
//	int num;
//	int sum = 0;
//	for ( i = 0; i < 100; i+=num)
//	{
//		scanf_s("%d", &num);
//		sum += num;
//	}
//	printf("%d", sum);
//}

//13
//int main() {
//	int i;
//	int sum = 0;
//	while (sum < 100)
//	{
//		scanf_s("%d", &i);
//		sum = +i;
//	}
//}

//14
//int main() {
//	int count;
//	int	s = 0;
//	int b = 0;
//	while (s < 3 && b < 4)
//	{
//		printf("ストライク=1 or ボール=2 ？");
//		scanf_s("%d", &count);
//		if (count == 1)
//		{
//			s++;
//		}
//		else if (count == 2)
//		{
//			b++;
//		}
//	}
//	printf("%dボール,%dストライク", b, s);
//}

//15 
//int main() {
//	int count;
//	int	s = 0;
//	int b = 0;
//	while (s < 3 && b < 4)
//	{
//		printf("ストライク=1 or ボール=2 or ファウル=3 ？");
//		scanf_s("%d", &count);
//		if (count == 1)
//		{
//			s++;
//		}
//		else if (count == 2)
//		{
//			b++;
//		}
//		else if (count == 3)
//		{
//			
//			if (s == 2) {
//				s == s;
//			}
//			else
//			{
//				s++;
//			}
//		}
//	}
//	printf("%dボール,%dストライク", b, s);
//}
//
//


//16
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

//17 
int main() {
	int num1;
	printf("2以上の数値を入力してください\n");
	scanf_s("%d", num1);

}









