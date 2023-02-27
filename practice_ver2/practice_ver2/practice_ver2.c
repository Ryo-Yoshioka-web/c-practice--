#include <stdio.h>
//main() {
//	int years;
//	printf("”N—î‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
//	scanf_s("%d", &years);
//	printf("%dÎ", years);
//}

//main() {
//	int x, y, temp;
//
//	x = 3;
//	y = 7;
//
//	// ‚±‚±‚Åx‚Æy‚Ì’l‚ğ“ü‚ê‘Ö‚¦‚é
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
//	printf("¡‰½Œ‚Å‚·‚©\n");
//	scanf_s("%d", &month);
//	switch (month)
//	{
//	case 1: 
//		printf("Œ³“úA¬l‚Ì“ú");
//		break;
//	case 2:
//		printf("Œš‘‹L”O‚Ì“ú");
//		break;
//	case 3:
//		printf("t•ª‚Ì“ú");
//		break;
//	case 4:
//		printf("º˜a‚Ì“ú");
//		break;
//	case 5:
//		printf("Œ›–@‹L”O“úA‚İ‚Ç‚è‚Ì“úA‚±‚Ç‚à‚Ì“ú");
//		break;
//	case 7:
//		printf("ŠC‚Ì“ú");
//		break;
//	case 9:
//		printf("Œh˜V‚Ì“úAH•ª‚Ì“ú");
//		break;
//	case 10:
//		printf("‘Ìˆç‚Ì“ú");
//		break;
//	case 11:
//		printf("•¶‰»‚Ì“úA‹Î˜JŠ´Ó‚Ì“ú");
//		break;
//	case 12:
//		printf("“Vc’a¶“ú");
//		break;
//	default: printf("j“ú‚Í‚ ‚è‚Ü‚¹‚ñ");
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
//	printf("”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
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
//	printf("”š‚ğ10‰ñ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
//	for ( i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &num[i]);
//		max += num[i];
//	}
//
//	printf("•½‹Ï“_‚Í%d“_‚Å‚·", max / 10);
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
//		printf("0‚©1‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
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
//	printf("Ÿ=%d •‰=%d", w,l);
//}

//main() {
//	int i,num;
//	int max = 0;
//	int min = 9999;
//	printf("”š‚ğ10‰ñ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
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
//	printf("Å‘å’l==%d  Å¬’l==%d", max, min);
//}

//main() {
//	int i, num;
//	int max ;
//	int min ;
//	printf("”š‚ğ10‰ñ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
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
//	printf("Å‘å’l==%d  Å¬’l==%d", max, min);
//}


//main() {
//	int num;
//	int i;
//	printf("ŒÂ”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
//	scanf_s("%d", &num);
//	for ( i = 0; i < num; i++)
//	{
//		printf("*");
//	}
//}

//main() {
//	int num;
//	int i;
//	printf("ŒÂ”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
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
//	printf("”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
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
//	printf("”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
//	scanf_s("%d", &num);
//		for ( i = 2; i < num; i++)
//		{
//			if (num % i == 0) {
//				printf("‘f”‚Å‚·");
//				break;
//			}
//		}
//}



// 16
//int main() {
//	int num,i;
//	printf("“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
//	scanf_s("%d", &num);
//	for ( i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//		{
//			break;
//		}
//	}if (num == i)
//	{
//		printf("%d‚Í‘f”‚Å‚·", num);
//	}
//	else
//	{
//		printf("%d‚Í‘f”‚Å‚Í‚ ‚è‚Ü‚¹‚ñ", num);
//	}
//}


//int main() {
//	int num;
//	int i;
//	printf("”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
//	scanf_s("%d", &num);
//	for ( i = 2; i < num; i++)
//	{
//		if (num % i == 0) {
//			break;
//		}
//	}
//	if (num == i)
//	{
//		printf("‘f”‚Å‚·");
//	}
//	else
//	{
//		printf("‘f”‚Å‚Í‚È‚¢‚Å‚·");
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
//	printf("”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
//	do
//	{
//		scanf_s("%d", &num);
//		sum += num;
//		i++;
//	} while (!num == 0);
//	printf("•½‹Ï“_	%d", sum / (i-1));
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


