#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<time.h>

using namespace std;

void Factorial(int n) {

	int fac = 1;

	for (int i = n;i > 0;i--) {

		fac = fac*i;


	}

	cout << "El factorial de " << n << " es : " << fac << endl;
}

void Graficar(int n) {


	int *y;
	y = new int[n];
	

	y[0] = 0;

	for (int i = 1; i <= n; i++) {

		y[i] = y[i-1]+i;

		cout << y[i] << " ";
	}

	cout << endl ;

	for (int j = 0; j < n; j++) {

		for (int i = 0; i < n-(j+1); i++) {
			cout << " ";
		}
		for (int i = 1; i < j+2; i++) {

			cout << y[i] << " ";
		}
		cout << endl;
	}

}


		


int main() {

	int a,n;

	cout << "====Menu de opciones====" << endl;
	cout << "1.Hallar el factorial " << endl;
	cout << "2.Graficar " << endl;
	cout << "3.Fin " << endl;
	cin >> a;

	switch (a) {

		case 1:
			do {
				cout << "Ingrese el valor de n: ";
				cin >> n;
			}while(n<1 || n>10);

			Factorial(n);

			break;

		case 2:

			do {
				cout << "Ingrese el numero de filas n: ";
				cin >> n;
			} while (n < 1);

			Graficar(n);

			break;

		case 3:

			break;

		default:

			break;

	

	}
	



	_getch();

	return 0;
	
}
