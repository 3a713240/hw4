#include <stdio.h> 
#include <stdlib.h>
int main(void){

	int TimeInput,h,m,s;

	printf("�п�J�ɶ�");
	scanf("%d",&TimeInput);
	h =(TimeInput / 3600); 
    m =(TimeInput%3600)/ 60; 
	s =(TimeInput%3600)%60; 

	printf("%d��%d��%d��",h,m,s); 


 
 system("pause");
 return 0; 
	

}
