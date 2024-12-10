#include<stdio.h>
#define pi 3.14
int main(){
	float dientich,chuvi,bankinh ;
	printf("moi ban nhap chieu dai ban kinh la: ");
	scanf("%f",&bankinh);
	chuvi = 2 * pi * bankinh;
	dientich =pi * bankinh * bankinh ;
	printf("dien tich hinh tron la: %.2f\n",dientich);
	printf("chu vi hinh tron la: %.2f\n",chuvi);
	return 0;
}
