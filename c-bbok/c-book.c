#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
typedef char String[1024];

// 3-3
//int main() {
//	srand((unsigned)time(NULL));
//	printf("四桁の暗証番号を生成します\n");
//	int a = rand() % 10;
//	int b = rand() % 10;
//	int c = rand() % 10;
//	int d = rand() % 10;
//	printf("暗証番号:%d%d%d%d", a, b, c, d);
//}

//3-4
//int main() {
//	String s;
//	printf("カレンダーから縦に並んだ数字を3つ選び、その合計を入力してください\n");
//	scanf_s("%s", &s,1024);
//	int num = atoi(s) / 3;
//	printf("選んだ数字は%dと%dと%dですね",num-7,num,num+7);
//}

//4-4
//int main(void) {
//	printf("いただきます\nバナナを食べます\n");
//	bool more = true;
//	if (more == true)
//	{
//		printf("おかわりをください\n");
//	}
//	else
//	{
//		printf("お腹がいっぱいです\n");
//	}
//	printf("ごちそうさまでした\n");
//	return 0;
//}

//4-5
//int main() {
//	int num  = 1;
//	int temp = 30;
//	
//	while (num == 1)
//	{
//		printf("現在の設定温度:");
//		printf("%d\n", temp);
//		printf("暑いですか? Yes=1 No=0\n");
//		scanf_s("%d", &num);
//		if (num == 1)
//		{
//			temp -= 1;
//		}
//		else {
//			printf("設定を終了します");
//		}
//	}
//}