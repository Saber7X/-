#include <stdio.h>
 
int mul[500] = {0};
 
int main(){
	mul[0] = mul[1] = 1;
	for(int i = 2; i < 100; i++){
		for(int j = 1; j <= mul[0]; j++){
			mul[j] *= i;
		}
		for(int j = 1; j <= mul[0]; j++){
			if(mul[j] < 10) continue;
			mul[j + 1] += mul[j] / 10;
			mul[j] %= 10;
			mul[0] += (mul[0] == j);
		}
	}
	
	int sum = 0;
	for(int i = 1; i <= mul[0]; i++){
		sum += mul[i];
	}
	printf("%d\n",sum);
	return 0;
}
