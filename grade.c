//Bu program harf notuna gore yorum yapar
#include<stdio.h>
int main(){
	 char GRADE;
	 printf("Lutfen harf cinsinden notunuzu giriniz.\n");
	 scanf("%c",&GRADE);
	
	switch(GRADE){
		case'A':
			printf("Super\n");
			break;
		case 'B':
			printf("Iyi");
			break ;
		case'C':
			printf("Orta");
			break;
		case'D':
			printf("Kotu");
			break;
		case'F':
			printf("Seneye artik");
			break;
		default:
			printf("A-B-C-D-F Karakterlerinden giriniz.");
	}
		
	
	
	
	return 0;
}
