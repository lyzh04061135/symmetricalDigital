#include <stdlib.h>

void intToStr(int num, char *arr){
	int j=0;
	while(1){
		int t=num%10;
		arr[j]=t+'0';
		j++;
		num=num/10;
		if(num<1){
			break;
		}
	}
}

int isSymmetricalDigital(int num){
	int ret=1;
	char buf[20]={0};
	int from=0;
	int to=0;

	intToStr(num, buf);
	to=strlen(buf)-1;

	while(from<to){
		if(buf[from]!=buf[to]){
			return 0;
		}
		from++;
		to--;
	}

	return ret;
}

int main(int argc, char *argv[]){
	int ret=0;

	int num=12321;
	ret=isSymmetricalDigital(num);
	if(ret)
		printf("%d is symmetrical digital\n", num);
	else
		printf("%d is not symmetrical digital\n", num);
	num=1231;

	ret=isSymmetricalDigital(num);
	if(ret)
		printf("%d is symmetrical digital\n", num);
	else
		printf("%d is not symmetrical digital\n", num);

	return 0;
}