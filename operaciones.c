#include "operaciones.h"
void suma(int* a, int b)
{
	*a = *a+b;
}
void resta(int* a, int b)
{
	*a = *a-b;
	
}
void sumav(int *a, int *b, int n){
	for(int i = 0; i < n;i++){
		a[i]=a[i]+b[i];
	}
}

void restav(int *a, int *b, int n){
	for(int i = 0; i < n;i++){
		a[i]=a[i]-b[i];
	}
}

int main(int argc, char **argv) {
int a = 5;
int b = 5;
int n = 5;
//suma(&a,b);
//resta(&a,b);
sumav(&a, &b,n);
printf("%d\n" , a);
return 0;
}
