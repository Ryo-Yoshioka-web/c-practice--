#include <stdio.h>

// 1
int main() {
	int num;
	printf("�N�����͂��Ă�������\n");
	scanf_s("%d",&num);
	printf("���Ȃ��̔N���%d�ł�",num);
}

//2
int main() {
	int y, m, d;
	printf("���N���܂�ł���\n");
	scanf_s("%d", &y);
	printf("�������܂�ł���\n");
	scanf_s("%d", &m);
	printf("�������܂�ł���\n");
	scanf_s("%d", &d);
	printf("���Ȃ��̒a������%d�N %d�� %d���ł���\n",y,m,d);
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
	printf("x��y�̒l�����Ă�������");
	scanf_s("%d%d", &x,&y);
	z = x;
	x = y;
	y = z;
	printf("x=%d, y=%d", x, y);
}


//6
int main() {
	int x;
	printf("x�̒l�����Ă�������");
	scanf_s("%d",&x);
	printf("x=%d",x);
}