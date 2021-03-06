#include <stdio.h>
#include <math.h>

float compX(float v, float a){
	return cos(a*(3.1416/180))*v;
}

float comY(float v, float a){
	return sin(a*(3.1416/180))*v;
}

int get(){
	int N;
	scanf("%i", &N);
	return N;
}

void resultado(float x, float y){
	float R, A;
	R=sqrt((x*x)+(y*y));
	A=atan(y/x);
	A*=(180/3.1416);
	if(x>0){
		if(A<0)
			A=A-360;
	}
	else{
		if(A>0){
			A+=180;
		}
		else{
			A=180+A;
		}
	}
	printf("Tenemos un vector resultante de magnitud %f y angulo %f \n", R, A);

	void descripcion(){
		printf("Este programa obtiene el vector de fuerza resultante a partir de N vectores a partir de sus magnitudes y sus angulos respecto a x. Introduce N: \n");
	}

	int main(){

		int N;
		float r[1000], x[1000], y[1000], a[1000], X, Y;

		descripcion();
		N=get();

		printf("Introduce N lineas en el siguiente orden: \n magnitud \t Angulo \n");
		for(int i=0; i<N; i++){
			scanf("%f %f", &r[i], &a[i]);
			s[i]=compX(r[i], a[i]);
			y[i]=compY(r[i], a[i]);
		}
		for(int i=0 ; i<N ; i++){
			X+=x[i];
			Y+=y[i];
		}
		resultado(X, Y)

		return 0;
	}
}