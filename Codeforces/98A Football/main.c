#include <stdio.h> 

int main() {
	int count=0, flag=0;
	char str[101];
	scanf("%s", str);
	for(int i=0; str[i] != '\0'; ++i){
		if(str[i] == '1' && str[i+1] == '1')
			++count;
		if(str[i] == '0' && str[i+1] == '0')
			++count;
		if (count == 6){
			flag = 1;
			break;
		}
		if(str[i] == '1' && str[i+1] != '1')
			count=0;
		if(str[i] == '0' && str[i+1] != '0')
			count=0;
	}
	printf("%s",(flag == 1)? "YES" : "NO");
	return 0;
}