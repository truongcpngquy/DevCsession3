#include<stdio.h>

int main() {
	float scoreMath,scoreEnglish,scoreLiterature,tongDiem,diemTrungBinh; 
	printf("Moi ban nhap vao diem Toan :");
	scanf("%f", &scoreMath);
	printf("Moi ban nhap vao diem Anh :");
	scanf("%f", &scoreEnglish);
	printf("Moi ban nhap vao diem Van :");
	scanf("%f", &scoreLiterature); 
	
	tongDiem =  scoreMath + scoreEnglish + scoreLiterature;
	diemTrungBinh = tongDiem / 3;
	
	printf("Tong diem la %.2f\n", tongDiem); 
	printf("Diem trung binh la %.2f\n", diemTrungBinh);
	
	return 0; 
	
}
