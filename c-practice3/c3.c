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
//	printf("���l����͂��Ă�������\n");
//	scanf_s("%d", &x);
//	printf("%d\n%d\n%d\n",x*2,x*3,x*4);
//}

//6
//int main() {
//	int x;
//	printf("���l����͂��Ă�������\n");
//	scanf_s("%d", &x);
//	printf("%d\n%d\n%d\n", x*x, x*x*x,x*x*x*x);
//}

//7
//int main() {
//	int x,y;
//	printf("���l����͂��Ă�������\n");
//	scanf_s("%d", &x);
//	printf("���肽��������͂��Ă�������\n");
//	scanf_s("%d", &y);
//	printf("%d���܂�%d",x/y,x%y);
//}

//8
int func1(int x) {
	x++;
	return x;
}

int main() {
	int x;
	printf("���l����͂��Ă�������\n");
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
//	printf("���l����͂��Ă�������\n");
//	scanf_s("%d", &x);
//	printf("%d\n%d\n%d\n", x*x, x*x*x,x*x*x*x);
//}

//10
//int main() {
//	int x, y;
//	scanf_s("%d%d", &x,&y);
//	printf("�a %d", x + y);
//	printf("�� %d", x - y);
//	printf("��%d", x * y);
//	printf("�� %d", x / y);
//	printf("�]�� %d", x % y);
//}

//11
//int main() {
//	int x, y;
//	printf("2�̐��l����͂��Ă�������\n");
//	scanf_s("%d%d", &x,&y);
//	printf("��̐��l�̕��ϒl��%d�ł�", (x+y)/2);
//}

//12
//int main() {
//	int x;
//	printf("���Ȃ��̔N����������Ă�������\n");
//	scanf_s("%d", &x);
//	printf("���Ȃ��̐�����������%d�ł�", x * 365);
//}





