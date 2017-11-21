#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
	int S[13];//ºÚÌÒ
	int H[13];//ºìÌÒ
	int D[13];//·½¿é
	int C[13];//Ã·»¨
	int a;
	int i;
	int I;
	int p;
	int x;
	int s = 0, h = 0, d = 0, c = 0;
	srand(time(0));
	rand() / (32767 / (13 - 1 + 1) + 1) + 1;
		//ÅÅĞò
		for (i = 0; i < 13; )
		{
			if (i == 0) {
				S[i] = rand() / (32767 / (13 - 1 + 1) + 1) + 1; i += 1;
			}
			else
			{
				a = rand() / (32767 / (13 - 1 + 1) + 1) + 1;
				for (I = 0; I < i; I++)
				{
					if (a == S[I]) break;
				}
				if (I == i) {
					S[i] = a; i += 1;
				}

			}
		}
		for (i = 0; i < 13; )
		{
			if (i == 0) {
				H[i] = rand() / (32767 / (13 - 1 + 1) + 1) + 1; i += 1;
			}
			else
			{
				a = rand() / (32767 / (13 - 1 + 1) + 1) + 1;
				for (I = 0; I < i; I++)
				{
					if (a == H[I]) break;
				}
				if (I == i) {
					H[i] = a; i += 1;
				}

			}
		}
		for (i = 0; i < 13; )
		{
			if (i == 0) {
				D[i] = rand() / (32767 / (13 - 1 + 1) + 1) + 1; i += 1;
			}
			else
			{
				a = rand() / (32767 / (13 - 1 + 1) + 1) + 1;
				for (I = 0; I < i; I++)
				{
					if (a == D[I]) break;
				}
				if (I == i) { D[i] = a; i += 1; }

			}
		}
		for (i = 0; i < 13; )
		{
			if (i == 0) {
				C[i] = rand() / (32767 / (13 - 1 + 1) + 1) + 1; i += 1;
			}
			else
			{
				a = rand() / (32767 / (13 - 1 + 1) + 1) + 1;
				for (I = 0; I < i; I++)
				{
					if (a == C[I]) break;
				}
				if (I == i) {
					C[i] = a; i += 1;
				}

			}
		}
		i = 0;
		//Êä³ö
		while (i < 52)
		{
			p = rand() / (32767 / (4 - 1 + 1) + 1) + 1;
			switch (p)
			{
			case 1: { if (s < 13) { printf("S:%2d  ", S[s]); s += 1; i += 1; if (i % 13 == 0)printf("\n"); }}; break;
			case 2: {if (h < 13) { printf("H:%2d  ", H[h]); h += 1; i += 1; if (i % 13 == 0)printf("\n"); }}; break;
			case 3: {if (d < 13) { printf("D:%2d  ", D[d]); d += 1; i += 1; if (i % 13 == 0)printf("\n"); }}; break;
			case 4: {if (c < 13) { printf("C:%2d  ", C[c]); c += 1; i += 1; if (i % 13 == 0)printf("\n"); } }; break;
			}


		}
	getchar();
	return 0;

}