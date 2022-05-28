#include<stdio.h>
#include<math.h>
int main(){
	float a,b;
	scanf("%f%f",&a,&b);
	if(a==0){
	  if(b==0){
	  printf("\nvo so nghiem");}
	  else{
	  printf("\nvo nghiem");}}
	else{
	 printf("%.2f\n",-b/a);}

	return 0;
}
