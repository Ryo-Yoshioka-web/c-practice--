#include <stdio.h>
#include <stdlib.h>
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