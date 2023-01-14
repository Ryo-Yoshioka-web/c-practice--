#include <stdio.h>

// 1
int main() {
	int num;
	printf("年齢を入力してください\n");
	scanf_s("%d",&num);
	printf("あなたの年齢は%dです",num);
}

//2
int main() {
	int y, m, d;
	printf("何年生まれですか\n");
	scanf_s("%d", &y);
	printf("何月生まれですか\n");
	scanf_s("%d", &m);
	printf("何日生まれですか\n");
	scanf_s("%d", &d);
	printf("あなたの誕生日は%d年 %d月 %d日ですね\n",y,m,d);
}

//3
int main() {
	int x =11;
	printf("X=%d", x);
}

//4
int main() {
	int x = 13;
	int y = 17;
	printf("x=%d y=%d",x,y);
}

//5
int main() {
	int x,y,z;
	printf("xとyの値を入れてください");
	scanf_s("%d%d", &x,&y);
	z = x;
	x = y;
	y = z;
	printf("x=%d, y=%d", x, y);
}


//6
int main() {
	int x;
	printf("xの値を入れてください");
	scanf_s("%d",&x);
	printf("x=%d",x);
}