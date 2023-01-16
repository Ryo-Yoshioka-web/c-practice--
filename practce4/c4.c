#include <stdio.h>
//1
//int main() {
//	int x, y;
//	printf("”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
//	scanf_s("%d%d", &x, &y);
//	if (x > y) {
//		printf("x‚Íy‚æ‚è‘å‚«‚¢");
//	}
//	else
//	{
//		printf("x‚Íy‚æ‚è¬‚³‚¢");
//	}
//
//}

//2,3,4
//int main() {
//	int x, y;
//	printf("”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
//	scanf_s("%d%d", &x, &y);
//	if (x > y) {
//		printf("x‚Íy‚æ‚è‘å‚«‚¢");
//	}
//	else if (x < y) {
//		printf("x‚Íy‚æ‚è¬‚³‚¢");
//	}
//	else
//	{
//		printf("x‚Æy‚Í“™‚µ‚¢");
//	}
//
//}

//5
//int main() {
//	int x;
//	printf("”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
//	scanf_s("%d", &x);
//	if ((x % 2) == 0) {
//		printf("‹ô”‚Å‚·\n");
//	}
//	else
//	{
//		printf("Šï”‚Å‚·\n");
//	}
//
//}

//6
//int main() {
//	int x;
//	printf("”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
//	scanf_s("%d", &x);
//	if (0 <= x)
//	{
//		if ( x % 2 == 0) {
//			printf("³‚Ì‹ô”‚Å‚·\n");
//		}
//		else
//		{
//			printf("³‚ÌŠï”‚Å‚·\n");
//		}
//	}
//	else
//	{
//		if (x % 2 == 0)
//		{
//			printf("•‰‚Ì‹ô”‚Å‚·\n");
//		}
//		else
//		{
//			printf("•‰‚ÌŠï”‚Å‚·\n");
//		}
//	}
//
//}



//7
//int main() {
//	int x,y;
//	printf("“_”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
//	scanf_s("%d", &x);
//	printf("‚Ç‚ÌƒP[ƒX‚ÅÀs‚µ‚Ü‚·‚©\n");
//	scanf_s("%d", &y);
//	switch (y)
//	{
//	case 1:
//		if (x >= 60)
//		{
//			printf("‡Ši");
//			break;
//		}
//		else
//		{
//			printf("•s‡Ši");
//			break;
//		}
//	case 2: 
//		if (x >= 80)
//		{
//			printf("‚½‚¢‚Ö‚ñ‚æ‚­‚Å‚«‚Ü‚µ‚½B");
//			break;
//		}
//		else if ( 60<= x < 80)
//		{
//			printf("‚æ‚­‚Å‚«‚Ü‚µ‚½B");
//			break;
//		}
//		else 
//		{
//			printf("‚´‚ñ‚Ë‚ñ‚Å‚µ‚½B");
//			break;
//		}
//	case 3:
//		if (x >= 80)
//		{
//			printf("—D");
//			break;
//		}
//		else if (70 <= x < 80)
//		{
//			printf("—D");
//			break;
//		}
//		else if (60 <= x < 70)
//		{
//			printf("‰Â");
//			break;
//		}
//		else
//		{
//			printf("•s‰Â");
//			break;
//		}
//	}
//	
//}



//8
//int main() {
//	int x,y;
//	printf("’†ŠÔƒeƒXƒg‚Ì“_”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
//	scanf_s("%d", &x);
//	printf("Šú––ƒeƒXƒg‚Ì“_”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
//	scanf_s("%d", &y);
//	if (60 <= x && 60 <= y)
//	{
//		printf("‡Ši\n");
//	}
//	else if (x + y >= 130) {
//		printf("‡Ši\n");
//	}
//	else if ((x + y >= 100) && ( x >= 90 || y > 90))
//	{
//		printf("‡Ši\n");
//	}
//	else
//	{
//		printf("•s‡Ši\n");
//	}
//
//	}

//9
//int main() {
//	int week, time;
//	printf("0=“ú—jA1=Œ—jA2=‰Î—jA3=…—jA4=–Ø—jA5=‹à—jA6=“y—j\n");
//	scanf_s("%d", &week);
//	printf("0=Œß‘OA1=ŒßŒãA2=–éŠÔ\n");
//	scanf_s("%d", &time);
//	switch (week)
//	{
//	case 0:
//		printf("‹xf‚Å‚·");
//		break;
//	case 1:
//		printf("f@’†‚Å‚·");
//		break;
//	case 2:
//		if (!time == 0)
//		{
//			printf("f@’†‚Å‚·");
//			break;
//		}
//		else
//		{
//			printf("‹xf‚Å‚·");
//			break;
//		}
//		break;
//	case 3:
//		if (!time == 2)
//		{
//			printf("f@’†‚Å‚·");
//			break;
//		}
//		else
//		{
//			printf("‹xf‚Å‚·");
//			break;
//		}
//		break;
//	case 4:
//		printf("f@’†‚Å‚·");
//		break;
//	case 5:
//		if (!time == 0)
//		{
//			printf("f@’†‚Å‚·");
//			break;
//		}
//		else
//		{
//			printf("‹xf‚Å‚·");
//			break;
//		}
//		break;
//	case 6:
//		if (time == 0)
//		{
//			printf("f@’†‚Å‚·");
//			break;
//		}
//		else
//		{
//			printf("‹xf‚Å‚·");
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
//		printf("x‚Íy‚æ‚è¬‚³‚­A‚©‚ÂAx‚Æy‚Í‹¤‚É‹ô”‚Å‚ ‚éB\n");
//	}
//		
//
//	else if (x == y && (x < 0 && y < 0)) {
//		printf("x‚Æy‚Í“™‚µ‚­A‚©‚ÂA•‰‚Ì”‚Å‚ ‚éB\n");
//	}	
//	
//
//	else if (x < y || x % 2 == 0) {
//		printf("x‚Íy‚æ‚è¬‚³‚¢A‚Ü‚½‚ÍAx‚Í‹ô”‚Å‚ ‚éB\n");
//	}
//	
//
//	else if ( (x <= 10 || x >= 100) && ( 10 <= y <= 100) ) {
//		printf("x‚Í10ˆÈ‰º‚Ü‚½‚Í100ˆÈã‚ÅA‚©‚ÂAy‚Í10ˆÈã‚©‚Â100ˆÈ‰º‚Å‚ ‚éB\n");
//	}
//		
//
//	else if (!(x < 0 && y < 0) ) {
//		printf("x‚ày‚à•‰‚Ì”‚Å‚ ‚éA‚Å‚Í‚È‚¢B\n");
//	}
//	
//
//}

//11

