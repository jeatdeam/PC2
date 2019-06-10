#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<time.h>

using namespace std;

int* GenerarPuntaje() {

	int* NotaEmpleado = new int[30];

	srand(time(NULL));

	for (int i = 0;i < 30;i++) {

		NotaEmpleado[i] = 0 + rand() % (100 - 0 + 1);

		cout << "La nota del empleado " << i + 1 << " es : " << NotaEmpleado[i] << endl;
	}

	return NotaEmpleado;

}

void Mostrar_DebajodelPromedio() {

	int hallarsuma = 0,promedio;
	int *vec2 = new int[30];
	vec2 = GenerarPuntaje();

	for (int i = 0;i < 30;i++) {

		hallarsuma += vec2[i];
	}


	promedio = hallarsuma / 30;

	cout << "El promedio genera es: " << promedio << endl;

	

	for (int i = 0;i < 30;i++) {

		if (vec2[i] < promedio)

			cout << i + 1 << " Puntaje menor al promedio: " << vec2[i] << endl;

	}


}

int Devolver_mayor() {

	int *vec3 = new int[30];
	vec3 = GenerarPuntaje();
	int hallarsuma = 0,promedio;
	
	for (int i = 0;i < 30;i++) {

		hallarsuma += vec3[i];
	}


	promedio = hallarsuma / 30;

	cout << "El promedio general de la empresa es: " << promedio << endl;


	int j=0;

	for (int i = 0;i < 30;i++) {

		if (vec3[i] > promedio)

			
		j++;

	}

	cout << "La cantidad de empleados que tuvieron el mayor puntaje es: " << j << endl;

	return j;
}
int main() {
	int n;
	do {


		cout << "Opciones: " << endl;
		cout << "1. GenerarPuntaje: " << endl;
		cout << "2. Mostrar_DebajodelPromedio: " << endl;
		cout << "3. Devolver_mayor: " << endl;
		cin >> n;
	} while (n > 4);

	switch (n) {

	case 1:
		GenerarPuntaje();
		break;
	case 2:
		Mostrar_DebajodelPromedio();
		break;
	case 3:
		Devolver_mayor();
		break;
	default:

		break;
	}

	_getch();
	return 0;
}