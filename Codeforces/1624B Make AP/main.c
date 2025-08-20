#include <stdio.h>
#include <inttypes.h>

int main(){
	uint16_t t;
	scanf("%"SCNu16, &t);
	for (uint16_t i=0; i<t; ++i){
		int32_t a, b, c;
		uint8_t flag = 0;
		scanf("%"SCNd32"%"SCNd32"%"SCNd32, &a, &b, &c);

		if(2*b == c){
			if(!a)
				++flag;
		}
		else if( (2*b-c)%a == 0 && (2*b-c)/a > 0)
			++flag;

		if ((c+a)%2==0 && ((c+a)/2) == 0){
			if(!b)
				++flag;
		}
		else if( (c+a)%2==0 && ((c+a)/2)%b == 0 && ((c+a)/2)/b > 0)
			++flag;

		if(2*b == a){
			if(!c)
				++flag; 
		}
		else if( (2*b-a)%c == 0 && (2*b-a)/c > 0)
			++flag; 

		if(flag)
			printf("YES\n");
		else
			printf("NO\n");

	}
}