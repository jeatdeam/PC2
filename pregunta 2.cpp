#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<time.h>

using namespace std;

float* Encontrar_perimetro_area(int n) {
	float *ap;

	ap = new float[1];
	
	/*area*/ ap[0] = 3.1416*n*n;
	
	ap[1] = 2 * 3.1416*n;

	return ap;

}

int main() {
	int n;
	do {
		
		cout << "Ingrese el radio del circulo : ";
		cin >> n;

	} while (n < 0);

	Encontrar_perimetro_area(n);
	cout<<"El area del circulo es: "<<Encontrar_perimetro_area(n)[0]<<endl;
	cout << "El perimetro del circulo es: " << Encontrar_perimetro_area(n)[1]<<endl;




	_getch();
	return 0;
}