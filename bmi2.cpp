#include<stdio.h>
int main()
{
	float w,h,bmi;
	printf("Weight : ");
	scanf("%f",&w);
	printf("Height(m) : ");
	scanf("%f",&h);
	printf("bmi = %f\n",w/(h*h));
	if(w/(h*h)<18.5){
		printf("underweight\n");
	}else if(w/(h*h)<=24.9){
		printf("standard\n");
	}else if(w/(h*h)<=29.9){
		printf("overweight\n");
	}else{
		printf("obesity\n");
	}
}
