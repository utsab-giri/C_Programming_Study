/* The program for smallest number notes come out from a ATM Machine */
// Input that given by user how much rupees user taken...
#include<stdio.h>
int main()
{
	int amt,note2000,note500,note200,note100,note50,note20,note10,coin5,coin2,coin1;
	printf("How much money you needed :");
	scanf("%d",&amt);
	note2000=amt/2000;
	amt=amt%2000;
	note500=amt/500;
	amt=amt%500;
	note200=amt/200;
	amt=amt%200;
	note100=amt/100;
	amt=amt%100;
	note50=amt/50;
	amt=amt%50;
	note20=amt/20;
	amt=amt%20;
	note10=amt/10;
	amt=amt%10;
	coin5=amt/5;
	amt=amt%5;
	coin2=amt/2;
	amt=amt%2;
	coin1=amt;
	int totalnote,totalcoin;
	totalnote=note2000+note500+note200+note100+note50+note20+note10;
	printf("You may take the %d number of notes\n",totalnote);
	totalcoin=coin5+coin2+coin1;
	printf("You may take the %d number of coins",totalcoin);
	return 0;
}
