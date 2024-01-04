/* WAP to take input number range from user.
Then print ascending or descending order according to user input,
His first entered value to his second entered value ....
*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a range give first and last value :");
	scanf("%d%d",&a,&b);
	if(a-b<0){
		while(a<=b){
			printf("%d\n",a);
			a++;
		}
	}
	else{
		while(a>=b){
			printf("%d\n",a);
			a--;
		}
	}
	return 0;
}
