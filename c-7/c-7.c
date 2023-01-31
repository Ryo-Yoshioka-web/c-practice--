#include <stdio.h>
// 7-1
//int main() {
//	char a;
//	char	b;
//	char	c;
//	a = 'A';
//	b = 'B';
//	c = 'C';
//	printf("%c%c%c", a, b, c);
//}

//7-2
//int main() {
//	char a = 'A';
//		a + 0x20;
//		printf("%c",a);
//}

//7-3
//int main() {
//	char alp = 'a';
//	int i;
//	int row;
//
//	printf("列を何行で分けますか");
//	//scanf_s("%d", row);
//
//
//	for ( i = 0; i < 26; i++)
//	{
//		//alp = 0x60 + i;
//		printf("%c", alp + i);
//	}
//}

//7-3
//int main() {
//	int     col;
//	int     i;
//
//	scanf("%d", &col);
//
//	for (i = 0; i < 26; i++)
//	{
//		if (i > 0 && (i % col) == 0)
//			printf("\n");
//
//		printf("%c", 'a' + i);
//	}
//}

// 7-4
//int main() {
//	char    binary[17];
//	int     value;
//	int     i;
//
//	scanf("%d", &value);
//
//	// 配列 sbinaryに'0'か'1'を代入する
//	for ( i = 0; i < 16; i++)
//	{
//		binary = value % 2;
//		binary /= 2;
//	}
//
//	printf("%s", binary);
//}

//7-4
//int main() {
//    char    sbinary[17];
//    int     value;
//    int     i;
//
//    scanf_s("%d", &value);
//
//    for (i = 15; i >= 0; i--)
//    {
//        sbinary[i] = '0' + (value % 2);
//        value /= 2;
//    }
//
//    sbinary[16] = 0;
//
//    printf("%s", sbinary);
//}

// 2進数にするため
//int main() {
//	int binary[16];
//	int value;
//	int i;
//
//	scanf_s("%d", &value);
//
//	// 配列 binaryに0か1を代入する
//	for ( i =15; i >= 0; i--)
//	{
//		binary[i] = value % 2;
//		value /= 2;
//	}
//
//	for (i = 0; i < 16; i++)
//		printf("%d", binary[i]);
//}

//7-5
//int main() {
//	char value[100];
//	scanf_s("%s", &value, 100);
//	printf("%s", value);
//}


//7-6
//int main() {
//	int i;
//	char str[100];
//	scanf_s("%s", str, 100);
//	for ( i = 0; str[i] !=0 ;)
//	{
//		i++;
//	}
//	printf("%d", i);
//}

//7-7
//int main() {
//	int i;
//	char str[100];
//	scanf_s("%s", str, 100);
//	for (i = 0; str[i] != 0;)
//	{
//		i++;
//	}
//	printf("%d", i);
//	for ( i ; i == 0;)
//	{
//		printf("%c", str[i]);
//		i--;
//	}
//
//}


//int main() {
//	int i;
//	char str[100];
//	scanf_s("%s", str, 100);
//	for (i = 0; str[i] != 0; i++) {
//	}
//	printf("%d\n", i);
//	for (i--; i >= 0; i--) {
//		printf("%c", str[i]);
//	}
//	printf("\n");
//	return 0;
//}

//7-8
//int main() {
//	int i;
//	char str[100];
//	scanf_s("%s", str, 100);
//	for ( i = 0; str[i] !=0 ; i++)
//	{
//		printf("%c", str[i]-0x20);
//	}
//}

//7-8
//int main() {
//	char    str[100];
//	int     i;
//
//	scanf_s("%s", str,100);
//
//	for (i = 0; str[i] != 0; i++)
//	{
//		if ('a' <= str[i] && str[i] <= 'z')
//			str[i] -= 'a' - 'A';
//	}
//
//	printf("%s", str);
//}

//7-9
//int main() {
//	int i,j;
//	char arr[81];
//	for ( i = 0; i < 20; i++)
//	{
//		for ( j = 0; j < 4; j++)
//		{
//			printf("SPAM");
//		}
//	}
//}

//7-9
//int main() {
//
//	char    str[100];
//	int     i;
//
//	for (i = 0; i < 20; i++)
//	{
//		str[i * 4] = 'S';
//		str[(i * 4) + 1] = 'P';
//		str[(i * 4) + 2] = 'A';
//		str[(i * 4) + 3] = 'M';
//		str[(i * 4) + 4] = 0;
//	}
//
//	printf("%s", str);
//}

//7-10
//int main() {
//
//	char    str[100];
//	int     i, j;
//
//	scanf_s("%s", str,100);
//
//	for (i = 0, j = 0; str[i] != 0; i++)
//	{
//		if (!('a' <= str[i] && str[i] <= 'z'))
//			str[j++] = str[i]; // 後置インクリメントになるため,インクリメントする前のjの値をstrに代入
//	}
//
//	str[j] = 0;
//
//	printf("%s", str);
//}


//7-11
//int main() {
//	char    str1[100] = "Hello ";
//	char    str2[] = "World";
//
//	// str1にstr2を結合する
//	str1 += str2;
//
//	printf("%s\n", str1);
//}


//int main() {
//	char    str1[100] = "Hello ";
//	char    str2[] = "World";
//	int     i;
//	int     n = 0;
//
//	while (str1[n] != 0)
//		n++;
//
//	for (i = 0; str2[i] != 0; i++)
//		str1[n++] = str2[i];
//
//	str1[n] = 0;
//
//	printf("%s\n", str1);
//}

// 7-12
//int main() {
//	char str[] = "Hello World";
//	int i;
//
//	// strの要素を逆順にする
//	for ( i = 0; str[i] !=0; )
//	{
//		i++;
//	}
//	for ( i--; i >= 0; i--)
//	{
//		printf("%c", str[i]);
//	}
//
//}


int main() {
	char    str[] = "Hello World";
	int     n = 0;
	int     i;
	char    t;

	while (str[n] != 0)
		n++;

	for (i = 0; i < (n / 2); i++)
	{
		t = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = t;
	}

	printf("%s\n", str);
}