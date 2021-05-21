#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
int i =1;
int r1=0,r2=0,r3=0;
int l1=0,l2=0,l3=0;
int c1=0,c2=0,c3=0;
char component[10];
while(i<10){
	printf("Enter value and code of component:\n");
	scanf("%s",&component);
	int len = strlen(component);
	if(component[len-1]=='R' || component[len-1]=='L' || component[len-1]=='C' && component[len-2]=='-'){
		if(component[len-1]=='R'){
			int value = atoi(component);
			if(value<10){
				r1++;
			}
			else if(value ==10){
				r2++;
			}
			else if(value > 10){
				r3++;
			}
		}
		else if(component[len-1]=='L'){
			int value = atoi(component);
			if(value<10){
				l1++;
			}
			else if(value ==10){
				l2++;
			}
			else if(value > 10){
				l3++;
			}
		}
		else if(component[len-1]=='C'){
			int value = atoi(component);
			if(value<10){
				c1++;
			}
			else if(value ==10){
				c2++;
			}
			else if(value > 10){
				c3++;
			}
		}
		i++;
	}
	else {
		printf("Invalid Entry! Try again!\n");
		continue;
	}
}
while(1){
	char stock;
	printf("Enter the component code(R,L or C) to check the stock\n");
	scanf("%c",&stock);
	if(stock=='R'){
		printf("%d component(s) more than 10 unit\n",r3);
		printf("%d component(s) equal to 10 unit\n",r2);
		printf("%d component(s) less than 10 unit\n",r1);
		break;
	}
	else if(stock=='L'){
		printf("%d component(s) more than 10 unit\n",l3);
		printf("%d component(s) equal to 10 unit\n",l2);
		printf("%d component(s) less than 10 unit\n",l1);
		break;
	}
	else if(stock=='C'){
		printf("%d component(s) more than 10 unit\n",c3);
		printf("%d component(s) equal to 10 unit\n",c2);
		printf("%d component(s) less than 10 unit\n",c1);
		break;
	}
	else {
		printf("Invaild entry! Try again!");
	}
}
	return 0;
}
