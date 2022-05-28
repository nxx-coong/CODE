#include<stdio.h>
#define MAX 100
struct SinhVien{
	char masv;char hoten[30]; char lop[20];char ngaysinh[20]; float diem;
	
};
struct List{
	int n;
	SinhVien sv[MAX];
};
void KTList(List &l){
	l.n=0;
}
void NhapList(List &l){
	scanf("%d",&l.n);
	int i;
	for(i=0;i<l.n;i++){
		fflush(stdin);gets(l.sv[i].hoten);fflush(stdin);gets(l.sv[i].lop);fflush(stdin);
		gets(l.sv[i].ngaysinh);fflush(stdin);scanf("%f",&l.sv[i].diem);
	}}
	void HienList(List &l){
		int i;
		for(i=0;i<l.n;i++){
			printf("B20DCVT%d\t",&i);
			printf("%s\t%s\t%s\t%.2f\n",l.sv[i].hoten,l.sv[i].lop,l.sv[i].ngaysinh,l.sv[i].diem);
		}
	}

int main(){
	List l;
	KTList(l);
	NhapList(l);
	HienList(l);
	return 0;
}
