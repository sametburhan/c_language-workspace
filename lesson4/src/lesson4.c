//ders 4
#include <stdio.h>
#include <stdlib.h>

int main() {
	/*
	int x;
	scanf("%d",&x);
	if(x>0){
		printf("positive\n");
		if(x%2==2){
			printf("even\n");
		}else{
			printf("odd\n");
		}
	}else if(x<0){
		printf("negative ");
		printf("%d\n", -x);
	}else{
		printf("zero");
	}
	-----------------------------------------------------------------------------------
	int a, b;
	scanf("%d %d", &a, &b);

	if(a <= 0 || b <= 0){//|| veya && ve
			printf("Incorrect Input\n");
	}else{
		if(a % b == 0){
				printf("it is divisible\n");
		}
		else{
				printf("it is not divisible\n");
		}
	}
	-----------------------------------------------------------------------------------
	char ch;
	scanf("%c", &ch);
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	    printf("Lettuce");
		else if(ch >= '0' && ch <= '9')
	        printf("Durian");
	    else
	        printf("Nani!?");//else if komutları süslü parantez olmadan da çalışabilmektedir
	-----------------------------------------------------------------------------------
	float num1,num2,result;
	char sign;
	int t = 1;
	scanf("%f %f %c",&num1,&num2,&sign);
	while(t == 1){
	if(sign == '*'){
		t= 0;
		result = num1*num2;
	printf("%.2f",result);
	}
	else if(sign == '/'){
		t= 0;
		result = num1/num2;
		printf("%.2f",result);}
	else if(sign == '+'){
		result = num1+num2;
		t= 0;
		printf("%.2f",result);}
	else if(sign == '-'){
		result= num1 -num2;
	t= 0;
	printf("%.2f",result);
	}
	else
		printf("wrong sign try again");}
	-----------------------------------------------------------------------------------*/
	float x, y;
	char c;
	scanf("%f %c %f", &x, &c, &y);

	switch(c){//temel switch case yapısı
	case '+':
		printf("%.2f\n", x+y);
	break;
	case '-':
		printf("%.2f\n", x-y);
	break;
	case '*':
		printf("%.2f\n", x*y);
	break;
	case '/':
		printf("%.2f\n", x/y);
	break;
	default:
		printf("Wrong Operator\n");
	}

	return 0;
}
