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

//5-3
//int main() {
//	int num;
//	printf("1�`9�̐�����͂��Ă�������\n");
//	scanf_s("%d", &num);
//	switch (num)
//	{
//	case 1:
//	case 2: 
//		printf("�o�b�e��-");
//		break;
//	case 3:
//	case 4:
//	case 5:
//	case 6:
//		printf("�����");
//		break;
//	case 7:
//	case 8:
//	case 9:
//		printf("�O���");
//		break;
//	default:
//		printf("���͂��ꂽ����ʒu�͂���܂���");
//		break;
//	}
//}

//int main() {
//	int num;
//	printf("1�`9�̐�����͂��Ă�������\n");
//	scanf_s("%d", &num);
//	if (num == 1 || num == 2)
//	{
//		printf("�o�b�e��-");
//	}
//	else if (num == 3 || num == 4 || num == 5 || num == 6)
//	{
//		printf("�����");
//	}
//	else if (num == 7 || num == 8 || num == 9)
//	{
//		printf("�O���");
//	}
//	else
//	{
//		printf("���͂��ꂽ����ʒu�͂���܂���");
//	}
//}

//int main() {
//	int i;
//	int apple = 120;
//	int mikan = 400;
//	int money = 3000;
//	printf("�����S ");
//	for ( i = 0; apple * i < money; i++)
//	{
//		printf("*");
//	}
//	printf(" �]��%d�~\n", money - (apple * i));
//
//	printf("�݃��� ");
//	for (i = 0; mikan * i < money; i++)
//	{
//		printf("*");
//	}
//	printf(" �]��%d�~\n", money - (mikan * i - mikan) );
//}

//int main() {
//	int i;
//	int answer;
//	int num;
//	answer = rand() % 10;
//	printf("***�����ăQ�[��(���x��1)***\n�񓚂̃`�����X��4��܂łł�\n1���̐�����͂��Ă�������:\n");
//
//	for ( i = 0; i < 4; i++)
//	{
//		scanf_s("%d", &num);
//		if (answer == num)
//		{
//			printf("������܂��� %d��ڂł�\n", i +1);
//			break;
//		}
//		else
//		{
//			if (answer < num)
//			{
//				printf("���͂��ꂽ���̕����傫���ł�\n");
//			}
//			else
//			{
//				printf("���͂��ꂽ���̕����������ł�\n");
//			}
//		}
//	}
//	if (answer != num) {
//		printf("������%d�ł�", answer);
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
//	struct BOOK text = {"�l��",230,2};
//	struct BOOK dictionary = { "����",320,3 };
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
    /* ���K6-5�������� */
    typedef struct {
        String title;       // ����
        String from;        // ���M�����[���A�h���X
        String datetime;    // ��M����
        int size;           // �T�C�Y(KB)
        bool attached;      // �Y�t�t�@�C���̗L��
        String body;        // �{��
    } Mail;

    Mail m = { "�����܂��Ă��߂łƂ�", "sugawara@miyabilink.jp",
        "2022/01/01 10:10:58", 302, false };

    printf("%s���񂩂�A%s�Ƀ��[���ł��B�T�C�Y��(%d)KB,(%s)�B", m.from, m.datetime, m.size, m.attached ? "����" : "�Ȃ�");
    /* ���K6-5�����܂� */

    return 0;
}
