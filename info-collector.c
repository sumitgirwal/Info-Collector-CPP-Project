/*
INFO-COLLECTOR
Student Management(FEE-ENTRY)
Minor Project In C Programming
Last Date : 13/12/2022  

*/


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>


FILE *fp, *fp1; char yes; int choice, i = 0, search = 0; int sort[100]; int temp = 0;

/*PASSWORD MUST BE 7 CHARACTER */
char s1[10], c, sumArray[10] = {'n', 'o', 'v', 'a', '1', '2', '3'}; //Password : nova123 <-----
int k, i, l = 0, j, i1 = 0;

struct student {

	int rollno;
	char name[20],
	     city[20],
	     phoneno[12],
	     date[20],
	     course[10],
	     fees[10];

} s, s2[100], temps;

void ext();
void pgl();
void cls();
void load();
void grp();
void show();
void show() {
	fp = fopen("vivo.dat", "rb");
	i = 0;
	while (fread(&s, sizeof(s), 1, fp)) {i++;}
	setbkcolor(9);
	outtextxy(3, 35, "Total Student Avalible:");
	settextstyle(1, 0, 1);
	gotoxy(25, 3);
	printf("%d", i);
	settextstyle(1, 0, 2);
	setcolor(12); outtextxy(200, 2, "    SOFT-HUB");
	line(180, 45, 200, 45);
	setcolor(WHITE);
	outtextxy(202, 2, "    SOFT-HUB");
}

void load() {
	for (k = 0; k < 4; k++) {
		settextstyle(2, 0, 6);
		if (k == 1) {outtextxy(190, 330, "       .");}
		if (k == 2) {outtextxy(190, 330, "       ..");}
		if (k == 3) {outtextxy(190, 330, "       ...");}
		for (j = 280; j <= 360; j = 10 + j) {
			for (i = 280; i <= 360; i = 10 + i) {
				circle(i, 360, 3);    circle(i, 360, 3);
			}
			setbkcolor(BLUE);
			line(100, 150, 500, 150);
			line(100, 152, 500, 152);
			settextstyle(3, 0, 5);
			outtextxy(101, 100, "SOFT-HUB ");
			outtextxy(100, 100, "SOFT-HUB ");
			outtextxy(99, 100, "SOFT-HUB ");
			setcolor(YELLOW);  settextstyle(7, 0, 1);
			outtextxy(300, 100, "  COCATHING Classes             ; ");
			outtextxy(300, 100, "  COCATHING Classes             ; ");
			setcolor(WHITE);  settextstyle(7, 0, 2);
			outtextxy(300, 100, "                     NY ");
			line(511, 123, 620, 123);
			line(511, 124, 620, 124);
			settextstyle(2, 0, 6);
			outtextxy(190, 330, "Loading ");
			if (k == 1)outtextxy(190, 330, "       . ");
			if (k == 2)outtextxy(190, 330, "       .. ");
			if (k == 3)outtextxy(190, 330, "       ... ");
			setbkcolor(BLUE);
			line(100, 150, 500, 150);
			line(100, 152, 500, 152);
			settextstyle(3, 0, 5);
			outtextxy(101, 100, "SOFT-HUB ");
			outtextxy(100, 100, "SOFT-HUB ");
			outtextxy(99, 100, "SOFT-HUB ");
			setcolor(YELLOW);
			settextstyle(7, 0, 1);
			outtextxy(300, 100, "  COCATHING Classes             ; ");
			outtextxy(300, 100, "  COCATHING Classes             ; ");
			setcolor(WHITE);
			settextstyle(7, 0, 2);
			outtextxy(300, 100, "                     NY ");
			line(511, 123, 620, 123);  line(511, 124, 620, 124);
			setcolor(WHITE);
			setfillstyle(SOLID_FILL, WHITE);
			circle(j, 360, 2);
			circle(j, 360, 1);
			floodfill(j, 360, WHITE);
			delay(200);
			setbkcolor(BLUE);
			line(100, 150, 500, 150);
			line(100, 152, 500, 152);
			settextstyle(3, 0, 5);
			outtextxy(101, 100, "SOFT-HUB ");
			outtextxy(100, 100, "SOFT-HUB ");
			outtextxy(99, 100, "SOFT-HUB ");
			setcolor(YELLOW);
			settextstyle(7, 0, 1);
			outtextxy(300, 100, "  COCATHING Classes             ; ");
			outtextxy(300, 100, "  COCATHING Classes             ; ");
			setcolor(WHITE);
			settextstyle(7, 0, 2);
			outtextxy(300, 100, "                     NY ");
			line(511, 123, 620, 123);
			line(511, 124, 620, 124);
			cleardevice();
		}

	}
}
void ext() {
	int gd = DETECT, gm;  initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	cleardevice();
	settextstyle(7, 0, 2);  outtextxy(520, 455, "ProCoder");  setcolor(BLUE);  outtextxy(522, 455, "Pro");  setcolor(WHITE);  setbkcolor(9);  settextstyle(2, 0, 10);  outtextxy(200, 400, "PRO-Coder'S;");  outtextxy(201, 400, "PRO-Coder'S");  outtextxy(202, 400, "PRO-Coder'S");
	settextstyle(0, 0, 0);  outtextxy(180, 186, "----------------------------------- ");  outtextxy(180, 200, "  THANK U FOR WACTHING & USING..... ");  outtextxy(180, 212, "----------------------------------- ");  rectangle(160, 180, 480, 225);  rectangle(165, 185, 475, 220);  outtextxy(120, 370, "By:- ");  delay(5000);  exit(0);
}
void pass() {
	setbkcolor(7);
	printf("\nEnter the PASSWORD:(ONLY 8 charcter): ");
	for (i = 0; i < 8; i++)  {
		if (i < 0) {i = 0;}
		c = getch();
		if (c == 13)   {    l = i;    i = 8;   }
		if (((c == 13) || (c == 9)) && (c != 32))  {   i--;  }
		if (c == 8)  {
			cls();   grp();   setbkcolor(9);
			printf("\nEnter the PASSWORD:(ONLY 8 charcter): ");
			for (j = 1; j < l; j++) {printf("*");}
			i = i - 2;   l--;
		}
		if (c != 8 && c != 32 && c != 9 && c != 13)   {
			s1[i] = c;   printf("*");   l++;
		}
	} printf("\nPASSWORD:");
	i = 0; for (j = 0; j < l; j++) {
		printf("%c", s1[j]);
		if (s1[j] == sumArray[j])  {   i++;  }  else  {   i--;   break;  }
	}
	if (i == 7) {  closegraph();  clrscr();  pgl(); } else {  printf("\nPASSWORD ARE WRONG!!");  printf("\nPLEASE!!PRESS'Y': ");  getch();  exit(0); }
}
void pgl() {
	int gd = DETECT, gm; initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");  cleardevice();
	setbkcolor(BLUE); line(100, 150, 500, 150); line(100, 152, 500, 152); settextstyle(3, 0, 5); outtextxy(101, 100, "SOFT-HUB "); outtextxy(100, 100, "SOFT-HUB "); outtextxy(99, 100, "SOFT-HUB "); setcolor(YELLOW); settextstyle(7, 0, 1); outtextxy(300, 100, "  COCATHING Class'es             ; "); outtextxy(300, 100, "  COCATHING Class'es             ; "); setcolor(WHITE); settextstyle(7, 0, 2); outtextxy(300, 100, "                     NY "); line(511, 123, 620, 123); line(511, 124, 620, 124);
}
void grp() {
	//check out this PATH in your system.
	int gd = DETECT, gm; initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); cleardevice();
	setcolor(WHITE); setbkcolor(BLUE); rectangle(0, 0, 637, 479); rectangle(2, 2, 635, 477);
}
void menu() {
	show(); setbkcolor(3); setcolor(RED); settextstyle(1, 0, 3);
	outtextxy(75, 50, "OPREATOIN'S :"); outtextxy(75, 51, "OPREATOIN'S :"); setcolor(RED); rectangle(60, 55, 235, 77); settextstyle(3, 0, 2); setcolor(YELLOW); outtextxy(10, 100, "  Press   FOR   "); outtextxy(10, 120, "  Press   FOR   "); outtextxy(10, 140, "  Press   FOR   "); outtextxy(10, 160, "  Press   FOR   "); outtextxy(10, 180, "  Press   FOR   ");
	outtextxy(11, 100, "  Press   FOR   ");
	outtextxy(11, 120, "  Press   FOR   ");
	outtextxy(11, 140, "  Press   FOR   ");
	outtextxy(11, 160, "  Press   FOR   ");
	outtextxy(11, 180, "  Press   FOR   ");
	outtextxy(10, 100, "                             :  ");
	outtextxy(10, 120, "                             : ");
	outtextxy(10, 140, "                             : ");
	outtextxy(10, 160, "                             : ");
	outtextxy(10, 180, "                             : ");
	outtextxy(11, 100, "                             :  ");
	outtextxy(11, 120, "                             : ");
	outtextxy(11, 140, "                             : ");
	outtextxy(11, 160, "                             : ");
	outtextxy(11, 180, "                             : ");


	setcolor(WHITE);
	outtextxy(10, 100, "        1        INSERTING   ");
	outtextxy(10, 120, "        2         DELETING   ");
	outtextxy(10, 140, "        3        MODIFIYING  ");
	outtextxy(10, 160, "        4        DISPLAYING  ");
	outtextxy(10, 180, "        5          EXIT     ");
	setcolor(WHITE);
	outtextxy(11, 100, "        1        INSERTING   ");
	outtextxy(11, 120, "        2         DELETING   ");
	outtextxy(11, 140, "        3        MODIFIYING  ");
	outtextxy(11, 160, "        4        DISPLAYING  ");
	outtextxy(11, 180, "        5          EXIT      ");
	circle(18, 114, 4); circle(18, 114, 5);
	circle(18, 134, 4); circle(18, 134, 5);
	circle(18, 154, 4); circle(18, 154, 5);
	circle(18, 174, 4); circle(18, 174, 5);
	circle(18, 194, 4); circle(18, 194, 5);
	setcolor(BLUE); settextstyle(1, 0, 2);
	outtextxy(10, 215, "   ENTER  YOUR  CHOICE : ");
	outtextxy(11, 215, "   ENTER  YOUR  CHOICE :   ");
	gotoxy(38, 15); setbkcolor(9);
	setcolor(WHITE);
	line(25, 210, 298, 210);
	line(25, 211, 298, 211);
	line(25, 241, 298, 241);
	line(25, 242, 298, 242);
}
void fun() {
	setcolor(WHITE);
	setbkcolor(BLUE);
	rectangle(0, 0, 637, 479);
	rectangle(2, 2, 635, 477);
	settextstyle(1, 0, 6);
	setcolor(WHITE);
	outtextxy(0, 0, "            DATA ");
	outtextxy(1, 0, "            DATA ");
	line(25, 56, 200, 56); line(25, 57, 200, 57);
	line(312, 56, 437, 56);
	line(312, 57, 437, 57);
	rectangle(5, 70, 632, 80);
}

void ln() {
	setcolor(YELLOW);
	settextstyle(1, 0, 6);
	outtextxy(0, 0, " INSERTING       :");
	outtextxy(1, 0, " INSERTING       :");
	fun();
	gotoxy(10, 6);
}

void de() {
	setcolor(YELLOW);
	settextstyle(1, 0, 6);
	outtextxy(0, 0, " DELETING        :");
	outtextxy(1, 0, " DELETING        :");
	fun();
	gotoxy(10, 6);
}

void md() {
	setcolor(YELLOW);
	settextstyle(1, 0, 6);
	outtextxy(0, 0, " MODIFIYING      :");
	outtextxy(1, 0, " MODIFIYING      :");
	fun();
	gotoxy(10, 6);
}

void ds() {
	setcolor(YELLOW);
	settextstyle(1, 0, 6);
	outtextxy(0, 0, " DISPLAYING      :");
	outtextxy(1, 0, " DISPLAYING      :");
	fun();
	gotoxy(10, 6);
}

void cls() {
	closegraph();
	clrscr();
}

void inset() {
	cls();
	grp();
	ln();


	fp = fopen("vivo.dat", "ab");
	fseek(fp, 0, SEEK_END);
	i = 1;
	printf("\n ENTER THE STUDENT DATA:");
	do {
		gotoxy(10, 7);
		printf("\n\n   STUDENT(%d):", i);
		printf("\n  Name:");
		scanf("%s", s.name);
		printf("\n  RollNo.:");
		scanf("%d", &s.rollno);
		printf("\n  Date:");
		scanf("%s", s.date);
		printf("\n  City:");
		scanf("%s", s.city);
		printf("\n  Course:");
		scanf("%s", s.course);
		printf("\n  Fees:");
		scanf("%s", s.fees);
		printf("\n  Phone No.:");
		scanf("%s", s.phoneno);
		fwrite(&s, sizeof(s), 1, fp);
		cls();
		grp();
		ln();
		printf("\n (press 'y') for NEW Data:");
		yes = getch();
		i++;
	} while (yes != 'n');
	fclose(fp);
	printf("\n\n  DATA ARE SUCESSFULLY STORED!!!\n");

}

void delet() {
	cls();   grp();   de();
	printf("\n  Press 1 FOR ALL DATA:");
	printf("\n  Press 2 FOR PARTICULER DATA:");
	printf("\n  ENTER YOUR CHOICE:");
	scanf("%d", &choice);
	switch (choice)   {
	case 1:  {
		printf("\n PRESS 'Y' FOR ALL DATA DELETING:");
		yes = getch();
		if (yes == 'y')
		{	printf("\n DELETING...");
			delay(500);
			fp = fopen("vivo.dat", "wb");
		}   else {printf("\n DATA NOT BE DELETING...");}
	} break;

	case 2:  {
		fp = fopen("vivo.dat", "rb");
		fp1 = fopen("tempv.dat", "ab");
		i = 0;
		printf("\n  Enter Student ROLL NO:");
		scanf("%d", &search);
		while (fread(&s, sizeof(s), 1, fp))   {
			i++;   if (search == (s.rollno))   {
				printf("\n\n STUDENT(%d):", i);
				printf("\n   Name  :%s", s.name);
				printf("\n  RollNo.:%d", s.rollno);
				printf("\n   City  :%s", s.city);
				printf("\n   Date  :%s", s.date);
				printf("\n  Course :%s", s.course);
				printf("\n   Fees  :%s", s.fees);
				printf("\n  Phone NO.:%s", s.phoneno);
				i = -1;
				printf("\nDO U WENT TO DELETE(PRESS:'Y'):");
				yes = getch();
				if (yes != 'y')    {
					printf("\nDATA ARE NOT be DELETING!!!");
					fwrite(&s, sizeof(s), 1, fp1);
				}
				else {printf("\n  DATA ARE DELETING...");}
			}
			else {   fwrite(&s, sizeof(s), 1, fp1);       }
		}
		fclose(fp);
		fclose(fp1);  remove("vivo.dat");  rename("tempv.dat", "vivo.dat");
		if (i != -1) {
			printf("\n\n SORRY!!! DATA ARE NOT!!!\n");
		}
		else {printf("\n\n   DATA ARE SUCESSFULLY DELETE!!!\n");        }

	} break;    default: printf("\n CHOICE ARE WRONG!!"); break;
	}

}
void update()  {
	cls();   grp();   md();
	fp = fopen("vivo.dat", "rb");
	fp1 = fopen("tempv.dat", "ab");
	printf("\nEnter The STUDENT ROLL NO.:");
	scanf("%d", &search);
	i = -1;
	while (fread(&s, sizeof(s), 1, fp))   {
		i++;   if (search == (s.rollno))   {
			printf("\n  STUDENT(%d):", i + 1);
			printf("\n    NAME     :%s", s.name);
			printf("\n   ROLL NO.  :%d", s.rollno);
			printf("\n    CITY     :%s", s.city);
			printf("\nDATE OF BRITH:%s", s.date);
			printf("\n   COURSE    :%s", s.course );
			printf("\n    FEES     :%s", s.fees);
			printf("\n  PHONE NO.  :%s", s.phoneno);
			printf("\n  ENTER THE NEW INFORMATION:");
			printf("\n  STUDENT(%d):", i + 1);
			printf("\n  Name:");
			scanf("%s", &s.name);
			printf("  RollNo.:");
			scanf("%d", &s.rollno);
			printf("  City:");
			scanf("%s", &s.city);
			printf("  Date:");
			scanf("%s", &s.date);
			printf("  Course:");
			scanf("%s", &s.course);
			printf("  Fees:");
			scanf("%s", &s.fees);
			printf("  Phone No.");
			scanf("%s", &s.phoneno);
			fwrite(&s, sizeof(s), 1, fp1);
		}   else {   fwrite(&s, sizeof(s), 1, fp1);       }
	}  fclose(fp);  fclose(fp1);
	remove("vivo.dat");
	rename("tempv.dat", "vivo.dat");
	if (i == -1)   {    printf("\n DATA ARE NOT FOUND...");   }   else   {printf("\n UPDATING IS DONE !!!");}
}

void display() {
	cls(); grp(); ds();
	fp = fopen("vivo.dat", "rb");
	if (fp == NULL) {
		printf("\n  ERROR FILE NOT FOUND!!!");
	} else {

		i = 1;
		printf("\n  OPRATION:");
		printf("\n Press 1 For    ALL     DATA:");
		printf("\n Press 2 For PATICULER  DATA:");
		printf("\n Press 3 For SORT BY ROLL NO:");
		printf("\n Enter Your Choice:");
		scanf("%d", &choice);   switch (choice)   {

		case 1:
		{
			i = -1;  while (fread(&s, sizeof(s), 1, fp))   {
				i++;
				printf("\n\n STUDENT(%d):\n", i + 1);    printf("\n  NAME     :%s", s.name);    printf("\n  ROLL NO. :%d", s.rollno);    printf("\n  CITY     :%s", s.city);    printf("\n  DATE     :%s", s.date);    printf("\n  COURSE   :%s", s.course);    printf("\n  FEES     :%s", s.fees);    printf("\n  PHONE NO.:%s", s.phoneno);
				printf("\n ____________________________");    printf("\n\n  PRESS Y FOR NEXT DATA:");    printf("\n ____________________________");    yes = getch();
				if (yes != 'y')    {break;}   cls();   grp();   ds();
			}
			if (i == -1)   {    printf("\n  SORRY!..DATA ARE NOT FOUND!!!");   }   else   {    printf("\n DISPLAY ARE DONE!!");   }
		} break;

		case 2:   {
			printf("\n  Enter Student ROLL NO:");   scanf("%d", &search);   i = 0;
			while (fread(&s, sizeof(s), 1, fp))   {
				i++;
				if (search == (s.rollno))   {    printf("\n\n STUDENT(%d):\n", i);    printf("\n  NAME     :%s", s.name);    printf("\n  ROLL  NO.:%d", s.rollno);    printf("\n  CITY     :%s", s.city);    printf("\n  DATE     :%s", s.date);    printf("\n  COURSE   :%s", s.course);    printf("\n  FEES     :%s", s.fees);    printf("\n  PHONE NO.:%s", s.phoneno);    i = -1;    }
			}
			if (i == -1)   {    printf("\n DISPLAY IS DONE!!!");   }   else   {    printf("\n DATA ARE NOT FOUND...");   }

		}
		break;

		case 3:   {
			i = -1;   while (fread(&s, sizeof(s), 1, fp))   {    i++;    sort[i] = s.rollno;    s2[i] = s;    printf(" Data:%d ", i);   }
			l = i;   for (i = 0; i <= l; i++) {
				for (j = i; j <= l; j++) {
					if (sort[i] >= sort[j])       {
						temp = sort[i];      sort[i] = sort[j];      sort[j] = temp;
						temps = s2[i];      s2[i] = s2[j];      s2[j] = temps;



					}
				}
			}


			i = -1;   for (i = 0; i <= l; i++)   {
				printf("\n\n STUDENT(%d):\n", i + 1);
				printf("\n  NAME     :%s", s2[i].name);
				printf("\n  ROLL NO. :%d", s2[i].rollno);
				printf("\n  CITY     :%s", s2[i].city);
				printf("\n  DATE     :%s", s2[i].date);
				printf("\n  COURSE   :%s", s2[i].course);
				printf("\n  FEES     :%s", s2[i].fees);
				printf("\n  PHONE NO.:%s", s2[i].phoneno);

				printf("\n ____________________________");
				printf("\n\n  PRESS Y FOR NEXT DATA:");
				printf("\n ____________________________");
				yes = getch();
				if (yes != 'y')    {break;}
				cls();   grp();   ds();
			}
			if (i == -1)   {    printf("\n  SORRY!..DATA ARE NOT FOUND!!!");   }
			else   {    printf("\n DISPLAY ARE DONE!!");   }
		} break;


		default: printf("\n  CHOICE ARE WRONG!!!");
		}
	}
}

int main() {
	clrscr();  grp();  fp = fopen("vivo.dat", "ab");
	if (fp == NULL) {printf("\n  ERROR  FILE NOT OPEN...");}
	else {
		//comment this 3 function and logged in without password or use nova123
		pass();     load();     delay(1000);
		do {

			grp();     menu();     scanf("%d", &choice);     cls();
			switch (choice)      {
			case 1:  inset();   break;
			case 2:  delet();   break;
			case 3:  update();  break;
			case 4:  display(); break;
			case 5:/* exit(0);*/ ext();    break;
			//If not want to show the ending credits then comment the
			// ext() and remove comment from exit(0) function.
			default: { grp(); printf("\n  CHOICE ARE WRONG!!");}
			}
			printf("\n  PRESS ('Y ') FOR MAIN MENU:");
			yes = getch();
			getch();
		} while (yes != 'n');
	}
	getch(); return 0;
}