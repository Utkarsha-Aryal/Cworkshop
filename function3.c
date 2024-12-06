#include <stdio.h>
#include <math.h>
void pythagoras (float p ,float b ,float h){
	if(isnan(p)){
		printf("\nPerpendicular (p)=%f",sqrt(h*h-b*b));
	}
	else if(isnan(b)){
		printf("\n Base(b) = %f",sqrt(h*h-p*p));
	}
	else{
		printf("\n Hypotrnusde(h) =%f",sqrt(p*p+b*b));
	}
	
}

int main(){
	pythagoras(3,4,NaN);
	
}