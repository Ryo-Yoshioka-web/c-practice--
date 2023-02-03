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

//5-3
//int main() {
//	int num;
//	printf("1～9の数を入力してください\n");
//	scanf_s("%d", &num);
//	switch (num)
//	{
//	case 1:
//	case 2: 
//		printf("バッテリ-");
//		break;
//	case 3:
//	case 4:
//	case 5:
//	case 6:
//		printf("内野手");
//		break;
//	case 7:
//	case 8:
//	case 9:
//		printf("外野手");
//		break;
//	default:
//		printf("入力された守備位置はありません");
//		break;
//	}
//}

//int main() {
//	int num;
//	printf("1～9の数を入力してください\n");
//	scanf_s("%d", &num);
//	if (num == 1 || num == 2)
//	{
//		printf("バッテリ-");
//	}
//	else if (num == 3 || num == 4 || num == 5 || num == 6)
//	{
//		printf("内野手");
//	}
//	else if (num == 7 || num == 8 || num == 9)
//	{
//		printf("外野手");
//	}
//	else
//	{
//		printf("入力された守備位置はありません");
//	}
//}

//int main() {
//	int i;
//	int apple = 120;
//	int mikan = 400;
//	int money = 3000;
//	printf("リンゴ ");
//	for ( i = 0; apple * i < money; i++)
//	{
//		printf("*");
//	}
//	printf(" 余り%d円\n", money - (apple * i));
//
//	printf("みヵん ");
//	for (i = 0; mikan * i < money; i++)
//	{
//		printf("*");
//	}
//	printf(" 余り%d円\n", money - (mikan * i - mikan) );
//}

//int main() {
//	int i;
//	int answer;
//	int num;
//	answer = rand() % 10;
//	printf("***数あてゲーム(レベル1)***\n回答のチャンスは4回までです\n1桁の数を入力してください:\n");
//
//	for ( i = 0; i < 4; i++)
//	{
//		scanf_s("%d", &num);
//		if (answer == num)
//		{
//			printf("当たりました %d回目です\n", i +1);
//			break;
//		}
//		else
//		{
//			if (answer < num)
//			{
//				printf("入力された数の方が大きいです\n");
//			}
//			else
//			{
//				printf("入力された数の方が小さいです\n");
//			}
//		}
//	}
//	if (answer != num) {
//		printf("正解は%dです", answer);
//	}
//}



// 6-2
//int main() {
//	struct BOOK {
//		String name;
//		int price;
//		int date;
//	};
//}

//6-3
//int main() {
//	struct BOOK {
//		String name;
//		int price;
//		int date;
//	};
//
//	struct BOOK text = {"人生",230,2};
//	struct BOOK dictionary = { "辞書",320,3 };
//
//}

//6-4
//int main() {
//	typedef struct  {
//		String name;
//		int date;
//		int price;
//	} Meisi;
//}



int main(void)
{
    /* 練習6-5ここから */
    typedef struct {
        String title;       // 件名
        String from;        // 送信元メールアドレス
        String datetime;    // 受信日時
        int size;           // サイズ(KB)
        bool attached;      // 添付ファイルの有無
        String body;        // 本文
    } Mail;

    Mail m = { "あけましておめでとう", "sugawara@miyabilink.jp",
        "2022/01/01 10:10:58", 302, false };

    printf("%sさんから、%sにメールです。サイズは(%d)KB,(%s)。", m.from, m.datetime, m.size, m.attached ? "あり" : "なし");
    /* 練習6-5ここまで */

    return 0;
}
