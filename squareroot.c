#include <stdio.h>
#include <math.h>
float squareroot (float a);

float main(){
	float a,s;
	
	printf("Type a number \n");
	printf("After each input press 'enter'\n");
	printf("Input a: ");
	scanf("%f",&a);
	printf("The number entered was %f\n",a);
	s = squareroot(a);
	printf("The squareroot of %f is %f.\n",a,s);
	return 0;
}
float squareroot(float a){
	float s = sqrt(a);
	return s;
}
