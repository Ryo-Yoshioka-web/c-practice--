#include <stdio.h>
//1
//int main() {
//	int x, y;
//	printf("���l����͂��Ă�������\n");
//	scanf_s("%d%d", &x, &y);
//	if (x > y) {
//		printf("x��y���傫��");
//	}
//	else
//	{
//		printf("x��y��菬����");
//	}
//
//}

//2,3,4
//int main() {
//	int x, y;
//	printf("���l����͂��Ă�������\n");
//	scanf_s("%d%d", &x, &y);
//	if (x > y) {
//		printf("x��y���傫��");
//	}
//	else if (x < y) {
//		printf("x��y��菬����");
//	}
//	else
//	{
//		printf("x��y�͓�����");
//	}
//
//}

//5
//int main() {
//	int x;
//	printf("���l����͂��Ă�������\n");
//	scanf_s("%d", &x);
//	if ((x % 2) == 0) {
//		printf("�����ł�\n");
//	}
//	else
//	{
//		printf("��ł�\n");
//	}
//
//}

//6
//int main() {
//	int x;
//	printf("���l����͂��Ă�������\n");
//	scanf_s("%d", &x);
//	if (0 <= x)
//	{
//		if ( x % 2 == 0) {
//			printf("���̋����ł�\n");
//		}
//		else
//		{
//			printf("���̊�ł�\n");
//		}
//	}
//	else
//	{
//		if (x % 2 == 0)
//		{
//			printf("���̋����ł�\n");
//		}
//		else
//		{
//			printf("���̊�ł�\n");
//		}
//	}
//
//}



//7
//int main() {
//	int x,y;
//	printf("�_������͂��Ă�������\n");
//	scanf_s("%d", &x);
//	printf("�ǂ̃P�[�X�Ŏ��s���܂���\n");
//	scanf_s("%d", &y);
//	switch (y)
//	{
//	case 1:
//		if (x >= 60)
//		{
//			printf("���i");
//			break;
//		}
//		else
//		{
//			printf("�s���i");
//			break;
//		}
//	case 2: 
//		if (x >= 80)
//		{
//			printf("�����ւ�悭�ł��܂����B");
//			break;
//		}
//		else if ( 60<= x < 80)
//		{
//			printf("�悭�ł��܂����B");
//			break;
//		}
//		else 
//		{
//			printf("����˂�ł����B");
//			break;
//		}
//	case 3:
//		if (x >= 80)
//		{
//			printf("�D");
//			break;
//		}
//		else if (70 <= x < 80)
//		{
//			printf("�D");
//			break;
//		}
//		else if (60 <= x < 70)
//		{
//			printf("��");
//			break;
//		}
//		else
//		{
//			printf("�s��");
//			break;
//		}
//	}
//	
//}



//8
//int main() {
//	int x,y;
//	printf("���ԃe�X�g�̓_������͂��Ă�������\n");
//	scanf_s("%d", &x);
//	printf("�����e�X�g�̓_������͂��Ă�������\n");
//	scanf_s("%d", &y);
//	if (60 <= x && 60 <= y)
//	{
//		printf("���i\n");
//	}
//	else if (x + y >= 130) {
//		printf("���i\n");
//	}
//	else if ((x + y >= 100) && ( x >= 90 || y > 90))
//	{
//		printf("���i\n");
//	}
//	else
//	{
//		printf("�s���i\n");
//	}
//
//	}

//9
//int main() {
//	int week, time;
//	printf("0=���j�A1=���j�A2=�Ηj�A3=���j�A4=�ؗj�A5=���j�A6=�y�j\n");
//	scanf_s("%d", &week);
//	printf("0=�ߑO�A1=�ߌ�A2=���\n");
//	scanf_s("%d", &time);
//	switch (week)
//	{
//	case 0:
//		printf("�x�f�ł�");
//		break;
//	case 1:
//		printf("�f�@���ł�");
//		break;
//	case 2:
//		if (!time == 0)
//		{
//			printf("�f�@���ł�");
//			break;
//		}
//		else
//		{
//			printf("�x�f�ł�");
//			break;
//		}
//		break;
//	case 3:
//		if (!time == 2)
//		{
//			printf("�f�@���ł�");
//			break;
//		}
//		else
//		{
//			printf("�x�f�ł�");
//			break;
//		}
//		break;
//	case 4:
//		printf("�f�@���ł�");
//		break;
//	case 5:
//		if (!time == 0)
//		{
//			printf("�f�@���ł�");
//			break;
//		}
//		else
//		{
//			printf("�x�f�ł�");
//			break;
//		}
//		break;
//	case 6:
//		if (time == 0)
//		{
//			printf("�f�@���ł�");
//			break;
//		}
//		else
//		{
//			printf("�x�f�ł�");
//			break;
//		}
//		break;
//	}
//}


//10

//int main() {
//	int x, y;
//	printf("x\n");
//	scanf_s("%d", &x);
//	printf("y\n");
//	scanf_s("%d", &y);
//	if (x< y && (x % 2 == 0 && y % 2 == 0)) {
//		printf("x��y��菬�����A���Ax��y�͋��ɋ����ł���B\n");
//	}
//		
//
//	else if (x == y && (x < 0 && y < 0)) {
//		printf("x��y�͓������A���A���̐��ł���B\n");
//	}	
//	
//
//	else if (x < y || x % 2 == 0) {
//		printf("x��y��菬�����A�܂��́Ax�͋����ł���B\n");
//	}
//	
//
//	else if ( (x <= 10 || x >= 100) && ( 10 <= y <= 100) ) {
//		printf("x��10�ȉ��܂���100�ȏ�ŁA���Ay��10�ȏォ��100�ȉ��ł���B\n");
//	}
//		
//
//	else if (!(x < 0 && y < 0) ) {
//		printf("x��y�����̐��ł���A�ł͂Ȃ��B\n");
//	}
//	
//
//}

//11

