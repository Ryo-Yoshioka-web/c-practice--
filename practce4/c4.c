#include <stdio.h>
//1
//int main() {
//	int x, y;
//	printf("数値を入力してください\n");
//	scanf_s("%d%d", &x, &y);
//	if (x > y) {
//		printf("xはyより大きい");
//	}
//	else
//	{
//		printf("xはyより小さい");
//	}
//
//}

//2,3,4
//int main() {
//	int x, y;
//	printf("数値を入力してください\n");
//	scanf_s("%d%d", &x, &y);
//	if (x > y) {
//		printf("xはyより大きい");
//	}
//	else if (x < y) {
//		printf("xはyより小さい");
//	}
//	else
//	{
//		printf("xとyは等しい");
//	}
//
//}

//5
//int main() {
//	int x;
//	printf("数値を入力してください\n");
//	scanf_s("%d", &x);
//	if ((x % 2) == 0) {
//		printf("偶数です\n");
//	}
//	else
//	{
//		printf("奇数です\n");
//	}
//
//}

//6
//int main() {
//	int x;
//	printf("数値を入力してください\n");
//	scanf_s("%d", &x);
//	if (0 <= x)
//	{
//		if ( x % 2 == 0) {
//			printf("正の偶数です\n");
//		}
//		else
//		{
//			printf("正の奇数です\n");
//		}
//	}
//	else
//	{
//		if (x % 2 == 0)
//		{
//			printf("負の偶数です\n");
//		}
//		else
//		{
//			printf("負の奇数です\n");
//		}
//	}
//
//}



//7
//int main() {
//	int x,y;
//	printf("点数を入力してください\n");
//	scanf_s("%d", &x);
//	printf("どのケースで実行しますか\n");
//	scanf_s("%d", &y);
//	switch (y)
//	{
//	case 1:
//		if (x >= 60)
//		{
//			printf("合格");
//			break;
//		}
//		else
//		{
//			printf("不合格");
//			break;
//		}
//	case 2: 
//		if (x >= 80)
//		{
//			printf("たいへんよくできました。");
//			break;
//		}
//		else if ( 60<= x < 80)
//		{
//			printf("よくできました。");
//			break;
//		}
//		else 
//		{
//			printf("ざんねんでした。");
//			break;
//		}
//	case 3:
//		if (x >= 80)
//		{
//			printf("優");
//			break;
//		}
//		else if (70 <= x < 80)
//		{
//			printf("優");
//			break;
//		}
//		else if (60 <= x < 70)
//		{
//			printf("可");
//			break;
//		}
//		else
//		{
//			printf("不可");
//			break;
//		}
//	}
//	
//}



//8
//int main() {
//	int x,y;
//	printf("中間テストの点数を入力してください\n");
//	scanf_s("%d", &x);
//	printf("期末テストの点数を入力してください\n");
//	scanf_s("%d", &y);
//	if (60 <= x && 60 <= y)
//	{
//		printf("合格\n");
//	}
//	else if (x + y >= 130) {
//		printf("合格\n");
//	}
//	else if ((x + y >= 100) && ( x >= 90 || y > 90))
//	{
//		printf("合格\n");
//	}
//	else
//	{
//		printf("不合格\n");
//	}
//
//	}

//9
//int main() {
//	int week, time;
//	printf("0=日曜、1=月曜、2=火曜、3=水曜、4=木曜、5=金曜、6=土曜\n");
//	scanf_s("%d", &week);
//	printf("0=午前、1=午後、2=夜間\n");
//	scanf_s("%d", &time);
//	switch (week)
//	{
//	case 0:
//		printf("休診です");
//		break;
//	case 1:
//		printf("診察中です");
//		break;
//	case 2:
//		if (!time == 0)
//		{
//			printf("診察中です");
//			break;
//		}
//		else
//		{
//			printf("休診です");
//			break;
//		}
//		break;
//	case 3:
//		if (!time == 2)
//		{
//			printf("診察中です");
//			break;
//		}
//		else
//		{
//			printf("休診です");
//			break;
//		}
//		break;
//	case 4:
//		printf("診察中です");
//		break;
//	case 5:
//		if (!time == 0)
//		{
//			printf("診察中です");
//			break;
//		}
//		else
//		{
//			printf("休診です");
//			break;
//		}
//		break;
//	case 6:
//		if (time == 0)
//		{
//			printf("診察中です");
//			break;
//		}
//		else
//		{
//			printf("休診です");
//			break;
//		}
//		break;
//	}
//}


//10

//int main() {
//	int x, y;
//	printf("x\n");
//	scanf_s("%d", &x);
//	printf("y\n");
//	scanf_s("%d", &y);
//	if (x< y && (x % 2 == 0 && y % 2 == 0)) {
//		printf("xはyより小さく、かつ、xとyは共に偶数である。\n");
//	}
//		
//
//	else if (x == y && (x < 0 && y < 0)) {
//		printf("xとyは等しく、かつ、負の数である。\n");
//	}	
//	
//
//	else if (x < y || x % 2 == 0) {
//		printf("xはyより小さい、または、xは偶数である。\n");
//	}
//	
//
//	else if ( (x <= 10 || x >= 100) && ( 10 <= y <= 100) ) {
//		printf("xは10以下または100以上で、かつ、yは10以上かつ100以下である。\n");
//	}
//		
//
//	else if (!(x < 0 && y < 0) ) {
//		printf("xもyも負の数である、ではない。\n");
//	}
//	
//
//}

//11

