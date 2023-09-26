#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void print()
{

	char show[] = "\n\n\nTHIS PROGRAM IS CREATED BY OM SHINGARE AND YASER SAYED ....\nTHIS PROGRAM IS FOR THE SMALL KIDS , FOR PRINTING THE CHARECTERS AND FOR DESCRIBE THE CHARECTER GENRATION MEATHOD NAMED STAR BUST...";
	int i = 0;
	cleardevice();
	while (show[i] != '\0')
	{
		printf("%c", show[i]);
		delay(90);
		i++;
	}
	delay(1);
	getch();
	if (!kbhit())
		return;
}

void draw_char(int *ch, int size)
{

	int i;
	for (i = 0; i < size; i++)
	{
		switch (ch[i])
		{
		case 1:
			setcolor(2);
			line(380, 125, 380, 200);
			break;

		case 2:
			setcolor(2);
			line(380, 50, 380, 125);
			break;

		case 3:
			setcolor(2);
			line(380, 50, 480, 50);
			break;

		case 4:
			setcolor(2);
			line(480, 50, 580, 50);
			break;

		case 5:
			setcolor(2);
			line(580, 50, 580, 125);
			break;

		case 6:
			setcolor(2);
			line(580, 125, 580, 200);
			break;

		case 7:
			setcolor(2);
			line(580, 200, 580, 275);
			break;

		case 8:
			setcolor(2);
			line(580, 275, 580, 350);
			break;

		case 9:
			setcolor(2);
			line(480, 350, 580, 350);
			break;

		case 10:
			setcolor(2);
			line(380, 350, 480, 350);
			break;

		case 11:
			setcolor(2);
			line(380, 275, 380, 350);
			break;

		case 12:
			setcolor(2);
			line(380, 200, 380, 275);
			break;

		case 13:
			setcolor(2);
			line(480, 50, 380, 125);
			break;

		case 14:
			setcolor(2);
			line(480, 50, 580, 125);
			break;

		case 15:
			setcolor(2);
			line(580, 275, 480, 350);
			break;

		case 16:
			setcolor(2);
			line(380, 275, 480, 350);
			break;

		case 17:
			setcolor(2);
			line(380, 50, 480, 200);
			break;

		case 18:
			setcolor(2);
			line(580, 50, 480, 200);
			break;

		case 19:
			setcolor(2);
			line(480, 200, 380, 350);
			break;

		case 20:
			setcolor(2);
			line(480, 200, 580, 350);
			break;

		case 21:
			setcolor(2);
			line(380, 200, 480, 200);
			break;

		case 22:
			setcolor(2);
			line(480, 200, 580, 200);
			break;

		case 23:
			setcolor(2);
			line(480, 50, 480, 200);
			break;

		case 24:
			setcolor(2);
			line(480, 200, 480, 350);

			break;

		default:
			break;
		}
	}
	setcolor(8);
}
void display2()
{

	int ch, size, h = 0;
	int A[10] = {11, 12, 1, 13, 14, 6, 7, 8, 21, 22};
	int B[12] = {1, 2, 3, 14, 6, 7, 15, 10, 11, 12, 21, 22};
	int C[8] = {4, 3, 2, 1, 12, 11, 10, 9};
	int D[10] = {1, 2, 3, 14, 6, 7, 15, 10, 11, 12};
	int E[10] = {3, 4, 2, 1, 21, 22, 12, 11, 10, 9};
	int F[7] = {3, 4, 2, 1, 21, 12, 11};
	int G[9] = {4, 13, 1, 12, 16, 9, 8, 7, 22};
	int H[10] = {2, 1, 12, 11, 21, 22, 5, 6, 7, 8};
	int I[6] = {3, 4, 23, 24, 10, 9};
	int J[5] = {3, 4, 23, 24, 16};
	int K[4] = {23, 24, 18, 20};
	int L[6] = {2, 1, 12, 11, 10, 9};
	int M[10] = {11, 12, 1, 2, 17, 18, 5, 6, 7, 8};
	int N[10] = {11, 12, 1, 2, 17, 20, 8, 7, 6, 5};
	int O[8] = {1, 12, 16, 15, 7, 6, 14, 13};
	int P[9] = {11, 12, 1, 2, 3, 14, 6, 22, 21};
	int Q[9] = {1, 12, 16, 15, 7, 6, 14, 13, 20};
	int R[10] = {11, 12, 1, 2, 3, 14, 6, 22, 21, 20};
	int S[8] = {4, 13, 1, 21, 22, 7, 15, 10};
	int T[4] = {3, 4, 23, 24};
	int V[8] = {2, 1, 12, 16, 15, 7, 6, 5};
	int U[4] = {12, 16, 15, 7};
	int W[10] = {2, 1, 12, 11, 19, 20, 8, 7, 6, 5};
	int X[4] = {17, 20, 19, 18};
	int Y[3] = {17, 18, 24};
	int Z[6] = {3, 4, 18, 19, 10, 9};
       //	int one[5] = {13, 23, 24, 10, 9};
	//int two[10] = {3, 4, 5, 6, 22, 21, 12, 11, 10, 9};
	int three[10] = {3, 4, 5, 6, 22, 21, 7, 8, 10, 9};
 //	int four[5] = {2, 1 21, 22 5, 6, 7, 8};
   //	int five[8] = {4, 13, 1, 21, 22, 7, 15, 10};
     //	int six[5] = {4, 13, 1, 12, 11, 10, 9, 8, 7, 22, 21};
//	int seven[5] = {3 ,4 18 , 20};
  //	int eight[5] = { 1,2,3 ,4 ,5,6,7 ,8 };
    //	int nine[5] = {13, 23, 24, 10, 9};
      //	int x, y;

//  name section
OM:
	clrscr();
	cleardevice();

	setlinestyle(0, 3, 3);
	setcolor(3);
	line(320, 400, 638, 400);

	// middel line
	line(320, 1, 320, 478);

	// border
	line(1, 1, 1, 478);
	line(1, 1, 638, 1);
	line(638, 1, 638, 478);
	line(1, 478, 638, 478);

	// star bust

	setcolor(8);
	line(380, 50, 480, 50); // 3
	// setcolor(2);
	line(480, 50, 580, 50); // 4

	// setcolor(3);
	line(380, 350, 480, 350); // 10
	// setcolor(4);
	line(480, 350, 580, 350); // 9

	// setcolor(5);
	line(380, 50, 380, 125); //  2
	// setcolor(6);
	line(380, 125, 380, 200); // 1

	// setcolor(7);
	line(380, 200, 380, 275); //  11
	//  setcolor(8);
	line(380, 275, 380, 350); // 12

	// setcolor(9);
	line(580, 50, 580, 125); // 5
	// setcolor(10);
	line(580, 125, 580, 200); // 6

	// setcolor(11);
	line(580, 200, 580, 275); // 7
	// setcolor(12);
	line(580, 275, 580, 350); // 8

	// setcolor(13);
	line(380, 200, 480, 200); // 21
							  // setcolor(14);
	line(480, 200, 580, 200); // 22

	line(480, 50, 480, 200);  // 23
	line(480, 200, 480, 350); // 24

	line(380, 50, 480, 200);  // 17
	line(480, 200, 580, 350); // 20

	line(580, 50, 480, 200);  // 18
	line(480, 200, 380, 350); // 19

	line(480, 50, 380, 125); // 13
	line(480, 50, 580, 125); // 14

	line(380, 275, 480, 350); // 16
	line(580, 275, 480, 350); // 15

	setcolor(14);
	settextstyle(20, 0, 2);
	outtextxy(20, 50, "ENTER THE CHARACTER FOR GENRATION");
	outtextxy(340, 420, "CREATED BY OM SHINGARE");
	outtextxy(340, 440, "AND YASER SAYED");
	setcolor(3);
	if (h == 0)
	{
		printf("\n\n\n\n\t--> ");
		h = 1;
	}
	else
	{
		if (ch >= 65 && ch <= 122  || ch ==  51)
		{
			if (ch >= 65 && ch <= 90 || ch == 51)
				printf("\n\n\n\n\t-->%c", ch);
			else if (ch >= 97 && ch <= 122)
				printf("\n\n\n\n\t-->%c", ch - 32);
			else
				printf("\n\n\n\n\t-->Invalid Input !\n");
		}
		else
			printf("\n\n\n\n\t-->Invalid input !");
	}

	line(1, 1, 1, 478);
	setcolor(15);
	setcolor(2);
	do
	{

		if (h == 1)
		{
			ch = getch();
			h = 2;
		}
		switch (ch)
		{
		case 65:
		case 97:
			size = sizeof(A) / sizeof(int);
			draw_char(A, size);
			break;

		case 66:
		case 98:
			size = sizeof(B) / sizeof(int);
			draw_char(B, size);
			break;

		case 67:
		case 99:
			size = sizeof(C) / sizeof(int);
			draw_char(C, size);
			break;

		case 68:
		case 100:
			size = sizeof(D) / sizeof(int);
			draw_char(D, size);
			break;

		case 69:
		case 101:
			size = sizeof(E) / sizeof(int);
			draw_char(E, size);
			break;

		case 70:
		case 102:
			size = sizeof(F) / sizeof(int);
			draw_char(F, size);
			break;

		case 71:
		case 103:
			size = sizeof(G) / sizeof(int);
			draw_char(G, size);
			break;

		case 72:
		case 104:
			size = sizeof(H) / sizeof(int);
			draw_char(H, size);
			break;

		case 73:
		case 105:
			size = sizeof(I) / sizeof(int);
			draw_char(I, size);
			break;

		case 74:
		case 106:
			size = sizeof(J) / sizeof(int);
			draw_char(J, size);
			break;

		case 75:
		case 107:
			size = sizeof(K) / sizeof(int);
			draw_char(K, size);
			break;

		case 76:
		case 108:
			size = sizeof(L) / sizeof(int);
			draw_char(L, size);
			break;

		case 77:
		case 109:
			size = sizeof(M) / sizeof(int);
			draw_char(M, size);
			break;

		case 78:
		case 110:
			size = sizeof(N) / sizeof(int);
			draw_char(N, size);
			break;

		case 79:
		case 111:
			size = sizeof(O) / sizeof(int);
			draw_char(O, size);
			break;

		case 80:
		case 112:
			size = sizeof(P) / sizeof(int);
			draw_char(P, size);
			break;

		case 81:
		case 113:
			size = sizeof(Q) / sizeof(int);
			draw_char(Q, size);
			break;

		case 82:
		case 114:
			size = sizeof(R) / sizeof(int);
			draw_char(R, size);
			break;

		case 83:
		case 115:
			size = sizeof(S) / sizeof(int);
			draw_char(S, size);
			break;

		case 84:
		case 116:
			size = sizeof(T) / sizeof(int);
			draw_char(T, size);
			break;

		case 85:
		case 117:
			size = sizeof(U) / sizeof(int);
			draw_char(U, size);
			break;

		case 86:
		case 118:
			size = sizeof(V) / sizeof(int);
			draw_char(V, size);
			break;

		case 87:
		case 119:
			size = sizeof(W) / sizeof(int);
			draw_char(W, size);
			break;

		case 88:
		case 120:
			size = sizeof(X) / sizeof(int);
			draw_char(X, size);
			break;

		case 89:
		case 121:
			size = sizeof(Y) / sizeof(int);
			draw_char(Y, size);
			break;

		case 90:
		case 122:
			size = sizeof(Z) / sizeof(int);
			draw_char(Z, size);
			break;

		case 27:
			return;
			break;
		case 51:
			size = sizeof(three) / sizeof(int);
			draw_char(three,size);
			break;
		}
		ch = getch();
		cleardevice();
		goto OM;

	} while (1);
}

int main()
{

	int gd = DETECT, gm, chk = 0, var, i, j, x, y, ch, a, ch1, c;
	char msg[128];
	float p;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

	setcolor(15);
	settextstyle(8, 0, 7);
	outtextxy(145, 130, "STAR-BUST");
	setlinestyle(0, 0, 3);
	line(135, 220, 535, 220);
	line(135, 223, 535, 223);
	for (i = 0; i <= 400; i++)
	{
		putpixel(135 + i, 219 + 0, RED);
		putpixel(135 + i, 219 + 1, RED);
		putpixel(135 + i, 219 + 2, RED);
		putpixel(135 + i, 219 + 3, RED);
		putpixel(135 + i, 219 + 4, RED);
		putpixel(135 + i, 219 + 5, RED);
		putpixel(135 + i, 219 + 6, RED);
		if (i % 4 == 0)
		{
			sprintf(msg, "%d%", i / 4);
		}

		settextstyle(0, 0, 1);
		setcolor(15);
		outtextxy(135 + i, 230, msg);
		outtextxy(135 + i, 230, msg);
		outtextxy(135 + i, 230, msg);

		if (i % 4)
			p = i / 4;
		if (p >= 0 && p <= 30)
			delay(5);
		if (p > 31 && p <= 49)
			delay(15);
		else if (p >= 50 && p <= 60)
			delay(5);
		else if (p > 60 && p <= 80)
			delay(15);
		else if (p > 80 && p <= 90)
			delay(5);
		else if (p >= 90)
			delay(15);
		else
			delay(10);

		setcolor(0);

		settextstyle(0, 0, 1);
		outtextxy(135 + i, 230, msg);

		delay(1);
		sound(i);
	}

first1:
first2:
first3:
first4:
first5:
	nosound();
	cleardevice();
	setcolor(15);
	cleardevice();
	a = 140;
	setcolor(15);
	settextstyle(8, 0, 5);
	setcolor(2);
	outtextxy(240, 140, "> START");
	setcolor(15);
	outtextxy(240, 200, "> ABOUT");
	outtextxy(240, 260, "> EXIT");
	sound(10 * 70);
	delay(75);
	nosound();
	delay(1);
	while (1)
	{

		ch = getch();
		if (chk == 0)
		{
			if (ch == 13)
			{
				chk = 1;
				display2();
				goto first3;
			}
		}
		switch (ch)
		{
		case 80:
			if (a == 140)

			{
				sound(10 * 70);
				delay(75);
				nosound();
				delay(1);

				setcolor(15);
				outtextxy(240, 140, "> START");
				setcolor(2);
				outtextxy(240, 200, "> ABOUT");
				setcolor(15);
				outtextxy(240, 260, "> EXIT");
				a = 200;
				ch1 = getch();
				if (ch1 == 13)
				{
					print();
					goto first4;
				}
			}
			else if (a == 200)
			{

				sound(10 * 70);
				delay(75);
				nosound();
				delay(1);
				setcolor(15);
				outtextxy(240, 140, "> START");
				outtextxy(240, 200, "> ABOUT");
				setcolor(2);
				outtextxy(240, 260, "> EXIT");
				a = 260;
				ch1 = getch();
				if (ch1 == 13)
				{
					exit(0);
					goto first4;
				}
			}
			else if (a == 260)
			{

				sound(10 * 70);
				delay(75);
				nosound();
				delay(1);
				setcolor(2);
				outtextxy(240, 140, "> START");
				setcolor(15);
				outtextxy(240, 200, "> ABOUT");
				outtextxy(240, 260, "> EXIT");
				a = 140;
				ch1 = getch();
				if (ch1 == 13)
				{
					display2();
					goto first1;
				}
			}

			break;

		case 72:
			if (a == 140)

			{
				sound(10 * 70);
				delay(75);
				nosound();
				delay(1);
				setcolor(15);
				outtextxy(240, 140, "> START");
				outtextxy(240, 200, "> ABOUT");
				setcolor(2);
				outtextxy(240, 260, "> EXIT");
				a = 260;
				ch1 = getch();
				if (ch1 == 13)
					exit(0);
			}
			else if (a == 200)
			{
				sound(10 * 70);
				delay(75);
				nosound();
				delay(1);
				setcolor(2);
				outtextxy(240, 140, "> START");
				setcolor(15);
				outtextxy(240, 200, "> ABOUT");
				outtextxy(240, 260, "> EXIT");
				a = 140;
				ch1 = getch();
				if (ch1 == 13)
				{
					display2();
					goto first1;
				}
			}
			else if (a == 260)
			{
				sound(10 * 70);
				delay(75);
				nosound();
				delay(1);
				setcolor(15);
				outtextxy(240, 140, "> START");
				setcolor(2);
				outtextxy(240, 200, "> ABOUT");
				setcolor(15);
				outtextxy(240, 260, "> EXIT");
				a = 200;
				ch1 = getch();
				if (ch1 == 13)
				{
					print();
					goto first5;
				}
			}
			break;
		case 27:
			exit(0);
		}
	}

	getch();
	closegraph();
	return 0;
}