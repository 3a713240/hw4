#include <stdio.h> 
#include <stdlib.h>
int main(void){

	int TimeInput,h,m,s;

	printf("請輸入時間");
	scanf("%d",&TimeInput);
	h =(TimeInput / 3600); 
    m =(TimeInput%3600)/ 60; 
	s =(TimeInput%3600)%60; 

	printf("%d時%d分%d秒",h,m,s); 


 
 system("pause");
 return 0; 
	

}
