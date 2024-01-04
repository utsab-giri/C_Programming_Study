//smallest number of note needed to fullfill the amount***
#include<stdio.h>
int main(){
	int amt;
	printf("Enter the amount : ");
	scanf("%d",&amt);
	
	int note2000,note500,note200,note100,note50,note20,note10,note5,note2,note1;
	
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
	
	int coin5,coin2,coin1;
	coin5=amt/5;
	amt=amt%5;
	
	coin2=amt/2;
	amt=amt%2;
	
	coin1=amt;
	
	printf("You get:/n 2000rs. note :%d \n",note2000);
	printf("500rs. note :%d \n",note500);
	printf("100rs. note :%d \n",note100);
	printf("50rs. note :%d \n",note50);
	printf("10rs. note :%d \n",note10);
	printf("5rs. coin :%d \n",coin5);
	printf("2rs. coin :%d \n",coin2);
	printf("1rs. coin :%d \n",coin1);
	
	int totalnote;
	totalnote=note2000+note500+note100+note50+note10;
	printf("The total note that you needed :%d",totalnote);
	
	int totalcoin;
	totalcoin=coin5+coin2+coin1;
	printf("The total coin that you needed :%d",totalcoin);
	
	return 0;
}
