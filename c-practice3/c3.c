#include <stdio.h>
// 1
//int main() {
//	int x;
//	x = 13 + 17;
//	printf("%d", x);
//}

//2
//int main() {
//	printf("%d", 13 * 17);
//}

//3
//int main() {
//	int x = 7;	
//	x *= 3;
//	printf("%d\n",x);
//	x /= 2;
//	printf("%d", x);
//}

//4
//int main() {
//	int x = 19;
//	int y = 23;
//	int z = x * y;
//	printf("%d",z);
//}

//5
//int main() {
//	int x;
//	printf("数値を入力してください\n");
//	scanf_s("%d", &x);
//	printf("%d\n%d\n%d\n",x*2,x*3,x*4);
//}

//6
//int main() {
//	int x;
//	printf("数値を入力してください\n");
//	scanf_s("%d", &x);
//	printf("%d\n%d\n%d\n", x*x, x*x*x,x*x*x*x);
//}

//7
//int main() {
//	int x,y;
//	printf("数値を入力してください\n");
//	scanf_s("%d", &x);
//	printf("割りたい数を入力してください\n");
//	scanf_s("%d", &y);
//	printf("%dあまり%d",x/y,x%y);
//}

//8
int func1(int x) {
	x++;
	return x;
}

int main() {
	int x;
	printf("数値を入力してください\n");
	scanf_s("%d", &x);
	x= func1(x);
	printf("%d", x);
}


//8
//int main() {
//	int x;
//
//	x = 10;
//
//	x++;
//	printf("%d\n", x);
//	x--;
//	x--;
//	printf("%d\n", x);
//
//}




//9
//int main() {
//	int x;
//	printf("数値を入力してください\n");
//	scanf_s("%d", &x);
//	printf("%d\n%d\n%d\n", x*x, x*x*x,x*x*x*x);
//}

//10
//int main() {
//	int x, y;
//	scanf_s("%d%d", &x,&y);
//	printf("和 %d", x + y);
//	printf("差 %d", x - y);
//	printf("積%d", x * y);
//	printf("商 %d", x / y);
//	printf("余り %d", x % y);
//}

//11
//int main() {
//	int x, y;
//	printf("2つの数値を入力してください\n");
//	scanf_s("%d%d", &x,&y);
//	printf("二つの数値の平均値は%dです", (x+y)/2);
//}

//12
//int main() {
//	int x;
//	printf("あなたの年齢をおしえてください\n");
//	scanf_s("%d", &x);
//	printf("あなたの生きた日数は%dです", x * 365);
//}





