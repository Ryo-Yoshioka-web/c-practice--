#include <stdio.h>
// R011
//int main() {
//	int kokugo, syakai, rika;
//	int sum = 0;
//	double ary;
//
//	printf("国語の点数を入力してください\n");
//	scanf_s("%d", &kokugo);
//	printf("社会の点数を入力してください\n");
//	scanf_s("%d", &syakai);
//	printf("理科の点数を入力してください\n");
//	scanf_s("%d", &rika);
//	sum = kokugo + syakai + rika;
//	ary = sum / 3;
//
//	printf("合計点数は%d\n", sum);
//	printf("平均点数は%f\n", ary );
//}

//R012
//int main() {
//	int tanka, suryou;
//	int kingaku = 0;
//
//
//	printf("単価(値段)を教えてください\n");
//	scanf_s("%d",&tanka);
//	printf("買った個数教えてください\n");
//	scanf_s("%d", &suryou);
//	kingaku = tanka * suryou;
//
//
//	printf("金額=%d 消費税込み=%d", kingaku, kingaku * 105 / 100 );
//}

//R013
//int main() {
//	int kubun;
//	int ninzu;
//	int kids = 800;
//	int adult = 1500;
//	int goukei;
//
//	printf("子供か大人をおしえてください 子供=1 大人=2\n");
//	scanf_s("%d", &kubun);
//	printf("人数を教えてください\n");
//	scanf_s("%d", &ninzu);
//	if (kubun == 1)
//	{
//		printf("料金合計 = %d", kids * ninzu);
//	}
//	else
//	{
//		printf("料金合計 = %d", adult * ninzu);
//	}
//}

//R014
//int main() {
//	int point;
//	printf("点数を入力してください\n");
//	scanf_s("%d", &point);
//	if ( point >= 80 )
//	{
//		printf("あなたの評価は'A'です");
//	}
//	else if ( point >= 60)
//	{
//		printf("あなたの評価は'B'です");
//	}
//	else
//	{
//		printf("あなたの評価は'C'です");
//	}
//}

//R015
//int main() {
//	char name1[10];
//	char name2[10];
//	int point1,point2;
//	printf("1人目の名前== ");
//	scanf_s("%s", &name1,10);
//
//	printf("1人目の点数==");
//	scanf_s("%d", &point1);
//
//	printf("2人目の名前==");
//	scanf_s("%s", &name2,10);
//
//	printf("2人目の点数==");
//	scanf_s("%d", &point2);
//
//	if (point1 > point2)
//	{
//		printf("%sさんの方が大きい", name1);
//	}
//	else
//	{
//		printf("%sさんの方が大きい", name2);
//	}
//
//}

// R016
//int main() {
//	int fee;
//	int ninzu;
//	int kingaku = 0;
//	int case1 = 800;
//	int case2 = 1000;
//	int case3 = 1500;
//
//	printf("料金区分を選んでください 1 or 2 or 3\n");
//	scanf_s("%d", &fee);
//	printf("人数を入力してください\n");
//	scanf_s("%d", &ninzu);
//
//	switch (fee)
//	{
//	case 1: kingaku = case1 * ninzu;
//		printf("料金==%d 金額==%d", case1, kingaku);
//		break;
//	case 2 : kingaku = case2 * ninzu;
//		printf("料金==%d 金額==%d", case2, kingaku);
//		break;
//	case 3: kingaku = case3 * ninzu;
//		printf("料金==%d 金額==%d", case3, kingaku);
//		break;
//	default:
//		break;
//	}
//}


// R016
//int main() {
//	int fee;
//	int ninzu;
//	int kingaku = 0;
//
//	printf("料金区分を選んでください 1 or 2 or 3\n");
//	scanf_s("%d", &fee);
//	printf("人数を入力してください\n");
//	scanf_s("%d", &ninzu);
//
//	switch (fee)
//	{
//	case 1: kingaku = 800;
//		break;
//	case 2: kingaku = 1000;
//		break;
//	case 3: kingaku = 1500;
//		break;
//	default:
//		break;
//	}
//	printf("料金==%d 金額==%d",kingaku,kingaku * fee );
//}

// R017
//int main() {
//	int fee;
//	int tanka;
//	int suryou;
//	int ritu;
//	int kingaku;
//
//	printf("値引き区分を選んでください 1 or 2 or 3\n");
//	scanf_s("%d", &fee);
//	printf("単価を入力してください\n");
//	scanf_s("%d", &tanka);
//	printf("数量を入力してください\n");
//	scanf_s("%d", &suryou);
//
//	switch (fee)
//	{
//	case 1: ritu = 5;
//		break;
//	case 2: ritu = 10;
//		break;
//	case 3: ritu = 15;
//		break;
//	default: ritu = 0;
//		break;
//	}
//
//	kingaku = tanka * suryou * (100 - ritu) / 100;
//	printf("値引き率 ==%d 金額==%d", ritu, kingaku);
//}

//R018
//int main() {
//	int time, hour, min, sec;
//	printf("秒数で表される時間を入力してください\n");
//	scanf_s("%d",&time);
//	hour = time / 3600;
//	min = (time - 3600 * hour) / 60;
//	sec = (time - 3600 * hour) % 60;
//
//	printf("%d秒　＝　%d時間　 %d分　 %d秒",time,hour,min,sec);
//
//}

int main() {
	int time, hour, min, sec;
	printf("秒数で表される時間を入力してください\n");
	scanf_s("%d", &time);

	min = time / 60;
	sec = time % 60;
	hour = min / 60;
	min = min % 60; //分数を求めて60で割った余りが正式な分数になる
	


	printf("%d秒　＝　%d時間　 %d分　 %d秒", time, hour, min, sec);

}