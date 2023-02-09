git add #include <stdio.h>
// R011
//int main() {
//	int kokugo, syakai, rika;
//	int sum = 0;
//	double ary;
//
//	printf("����̓_������͂��Ă�������\n");
//	scanf_s("%d", &kokugo);
//	printf("�Љ�̓_������͂��Ă�������\n");
//	scanf_s("%d", &syakai);
//	printf("���Ȃ̓_������͂��Ă�������\n");
//	scanf_s("%d", &rika);
//	sum = kokugo + syakai + rika;
//	ary = sum / 3;
//
//	printf("���v�_����%d\n", sum);
//	printf("���ϓ_����%f\n", ary );
//}

//R012
//int main() {
//	int tanka, suryou;
//	int kingaku = 0;
//
//
//	printf("�P��(�l�i)�������Ă�������\n");
//	scanf_s("%d",&tanka);
//	printf("�������������Ă�������\n");
//	scanf_s("%d", &suryou);
//	kingaku = tanka * suryou;
//
//
//	printf("���z=%d ����ō���=%d", kingaku, kingaku * 105 / 100 );
//}

//R013
//int main() {
//	int kubun;
//	int ninzu;
//	int kids = 800;
//	int adult = 1500;
//	int goukei;
//
//	printf("�q������l���������Ă������� �q��=1 ��l=2\n");
//	scanf_s("%d", &kubun);
//	printf("�l���������Ă�������\n");
//	scanf_s("%d", &ninzu);
//	if (kubun == 1)
//	{
//		printf("�������v = %d", kids * ninzu);
//	}
//	else
//	{
//		printf("�������v = %d", adult * ninzu);
//	}
//}

//R014
//int main() {
//	int point;
//	printf("�_������͂��Ă�������\n");
//	scanf_s("%d", &point);
//	if ( point >= 80 )
//	{
//		printf("���Ȃ��̕]����'A'�ł�");
//	}
//	else if ( point >= 60)
//	{
//		printf("���Ȃ��̕]����'B'�ł�");
//	}
//	else
//	{
//		printf("���Ȃ��̕]����'C'�ł�");
//	}
//}

//R015
//int main() {
//	char name1[10];
//	char name2[10];
//	int point1,point2;
//	printf("1�l�ڂ̖��O== ");
//	scanf_s("%s", &name1,10);
//
//	printf("1�l�ڂ̓_��==");
//	scanf_s("%d", &point1);
//
//	printf("2�l�ڂ̖��O==");
//	scanf_s("%s", &name2,10);
//
//	printf("2�l�ڂ̓_��==");
//	scanf_s("%d", &point2);
//
//	if (point1 > point2)
//	{
//		printf("%s����̕����傫��", name1);
//	}
//	else
//	{
//		printf("%s����̕����傫��", name2);
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
//	printf("�����敪��I��ł������� 1 or 2 or 3\n");
//	scanf_s("%d", &fee);
//	printf("�l������͂��Ă�������\n");
//	scanf_s("%d", &ninzu);
//
//	switch (fee)
//	{
//	case 1: kingaku = case1 * ninzu;
//		printf("����==%d ���z==%d", case1, kingaku);
//		break;
//	case 2 : kingaku = case2 * ninzu;
//		printf("����==%d ���z==%d", case2, kingaku);
//		break;
//	case 3: kingaku = case3 * ninzu;
//		printf("����==%d ���z==%d", case3, kingaku);
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
//	printf("�����敪��I��ł������� 1 or 2 or 3\n");
//	scanf_s("%d", &fee);
//	printf("�l������͂��Ă�������\n");
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
//	printf("����==%d ���z==%d",kingaku,kingaku * fee );
//}

// R017
//int main() {
//	int fee;
//	int tanka;
//	int suryou;
//	int ritu;
//	int kingaku;
//
//	printf("�l�����敪��I��ł������� 1 or 2 or 3\n");
//	scanf_s("%d", &fee);
//	printf("�P������͂��Ă�������\n");
//	scanf_s("%d", &tanka);
//	printf("���ʂ���͂��Ă�������\n");
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
//	printf("�l������ ==%d ���z==%d", ritu, kingaku);
//}

//R018
//int main() {
//	int time, hour, min, sec;
//	printf("�b���ŕ\����鎞�Ԃ���͂��Ă�������\n");
//	scanf_s("%d",&time);
//	hour = time / 3600;
//	min = (time - 3600 * hour) / 60;
//	sec = (time - 3600 * hour) % 60;
//
//	printf("%d�b�@���@%d���ԁ@ %d���@ %d�b",time,hour,min,sec);
//
//}

// R019
//int main() {
//	int time, hour, min, sec;
//	printf("�b���ŕ\����鎞�Ԃ���͂��Ă�������\n");
//	scanf_s("%d", &time);
//
//	min = time / 60;
//	sec = time % 60;
//	hour = min / 60;
//	min = min % 60; //���������߂�60�Ŋ������]�肪�����ȕ����ɂȂ�
//	
//
//
//	printf("%d�b�@���@%d���ԁ@ %d���@ %d�b", time, hour, min, sec);
//
//}

// R021
//int main() {
//	int num;
//	int sum = 0;
//	int i;
//	printf("10���̐�������͂��Ă�������\n");
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d���", i + 1);
//		scanf_s("%d", &num);
//		sum += num;
//	}
//	printf("���v��%d�ł�", sum);
//}
//



//R022
int main() {
	int num;
	int sum = 0;
	int max = 0;
	int min = 999;
	int i;
	printf("10���̐�������͂��Ă�������\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d���", i + 1);
		scanf_s("%d", &num);
		sum += num;
		if (max < num)
		{
			max = num;
		}
		else if(min > num)
		{
			min = num;
		}
	}
	printf("���v��%d �ő�l��%d �ŏ��l��%d�ł�", sum,max,min);
}