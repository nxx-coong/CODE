#include <stdio.h>
#include <math.h>

int main() {
	float a,b,c;
	float x1,x2;
	scanf("%f %f %f", &a,&b,&c);
	float delta = pow(b,2) - 4*a*c;
    if(delta<0){
        x1=x2=0.0;
        printf("NO");
		return 0;
    }
    else if(delta==0){
        x1 = x2 = -b/(2*a);
        printf("%.2f", x1);
        return 0;
    }
    else{
        delta = sqrt(delta);
        x1 = (-b + delta) / (2*a);
        x2 = (-b - delta) / (2*a);
        printf("%.2f %.2f",x1,x2);
        return 0;
    }
	return 0;
}
