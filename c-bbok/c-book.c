#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
typedef char String[1024];

// 3-3
//int main() {
//	srand((unsigned)time(NULL));
//	printf("�l���̈Ïؔԍ��𐶐����܂�\n");
//	int a = rand() % 10;
//	int b = rand() % 10;
//	int c = rand() % 10;
//	int d = rand() % 10;
//	printf("�Ïؔԍ�:%d%d%d%d", a, b, c, d);
//}

//3-4
//int main() {
//	String s;
//	printf("�J�����_�[����c�ɕ��񂾐�����3�I�сA���̍��v����͂��Ă�������\n");
//	scanf_s("%s", &s,1024);
//	int num = atoi(s) / 3;
//	printf("�I�񂾐�����%d��%d��%d�ł���",num-7,num,num+7);
//}

//4-4
//int main(void) {
//	printf("���������܂�\n�o�i�i��H�ׂ܂�\n");
//	bool more = true;
//	if (more == true)
//	{
//		printf("����������������\n");
//	}
//	else
//	{
//		printf("�����������ς��ł�\n");
//	}
//	printf("�����������܂ł���\n");
//	return 0;
//}

//4-5
//int main() {
//	int num  = 1;
//	int temp = 30;
//	
//	while (num == 1)
//	{
//		printf("���݂̐ݒ艷�x:");
//		printf("%d\n", temp);
//		printf("�����ł���? Yes=1 No=0\n");
//		scanf_s("%d", &num);
//		if (num == 1)
//		{
//			temp -= 1;
//		}
//		else {
//			printf("�ݒ���I�����܂�");
//		}
//	}
//}