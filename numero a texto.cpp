#include <iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
int ingreso();
string convertir(int n);
void mostrar(string nombre, int n);
int main(int argc, char *argv[]) {
	int n=ingreso();
	string nombre=convertir(n);
	mostrar(nombre,n);
	return 0;
}
int ingreso(){
	int n;
	cout<<"Ingrese numero natural menor que 100: ";cin>>n;
	return n;
}

string convertir(int n){
	int u,d;
	string unidad,decena,nombre;
	u=n%10;
	d=n/10;
	if (n==10 ||n==11 ||n==12 ||n==13 ||n==14 ||n==15 ||n==20 ||n==30 ||n==40 ||n==50 ||n==60 ||n==70 ||n==80 ||n==90){
	switch(n){
	case 10: nombre="diez"; break; 
	case 11: nombre="once"; break;
	case 12: nombre="doce"; break;
	case 13: nombre="trece"; break;
	case 14: nombre="catorce"; break;
	case 15: nombre="quince"; break;
	case 20: nombre="veinte"; break;
	case 30: nombre="treinta"; break;
	case 40: nombre="cuarenta"; break;
	case 50: nombre="cincuenta"; break;
	case 60: nombre="sesenta"; break;
	case 70: nombre="setenta"; break;
	case 80: nombre="ochenta"; break;
	case 90: nombre="noventa"; break;
	}
	return nombre;
	}
	else if (n<30){
	switch(u){
	case 1: unidad="uno"; break;
	case 2: unidad="dos"; break;
	case 3: unidad="tres"; break;
	case 4: unidad="cuatro"; break;
	case 5: unidad="cinco"; break;
	case 6: unidad="seis"; break;
	case 7: unidad="siete"; break;
	case 8: unidad="ocho"; break;
	case 9: unidad="nueve"; break;
	}
	switch(d){
	case 0: decena=""; break;
	case 1: decena="dieci"; break;
	case 2: decena="veinti"; break;
	case 3: decena="treintai"; break;
	case 4: decena="cuarentai"; break;
	case 5: decena="cincuentai"; break;
	case 6: decena="sesentai"; break;
	case 7: decena="setentai"; break;
	case 8: decena="ochentai"; break;
	case 9: decena="noventai"; break;
	}
	nombre=strcat(unidad,decena);
	return nombre;}
}
void mostrar(string nombre, int n){
	cout<<"El numero "<<n<<" se escribe "<<nombre;
}

	
