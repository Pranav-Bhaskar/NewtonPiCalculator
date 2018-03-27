#include<stdio.h>

double propi(int i,double a,double b,double c){
	if(i == 14)
		return 0;
	a *= (2*i)-1;
	b *= 4;
	c *= 2*i;
	double d = (2*i)+1;
	double x;
	x = a/(b*c*d);//process
	return x+propi(1+i,a,b,c);
}

int main(){
printf("\nProcessing Begins");
double pi = propi(1,1,2,1);
printf("\n%.10f\n",3.0+(6.0*pi));
}
