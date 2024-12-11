#include<Stdio.h>
#include<math.h>

int main(){
	float r,cv,dt, Pi = 3.14 ;
	printf("hay nhap ban kinh r :");
	scanf("%f", &r);
	
	cv = 2*Pi*r;
	dt = Pi*r*r ;
	
	printf("chu vi hinh tron la  = %5.2f \n", cv); 
	printf("dien tich hinh tron la = %5.2f \n", dt); 
	
	return 0; 
} 
