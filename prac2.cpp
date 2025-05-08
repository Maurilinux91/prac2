// 2º Programa que lea dos números por teclado y calcule el valor de la suma, resta producto y división.

#include "iostream"
#include "conio.h"
using namespace std;


int main ()
{


system ("CLS");

int num1,num2,resultado;


system("title «Prac2» ® 2013 MauriLinux Systems.");

cout << "Prac2.\n====================\n";


cout << "\n Dame el numero 1: ";
cin >> num1;

cout << "\n Dame el numero 2: ";
cin >> num2;

cout << "\nEl numero 1 es "<< num1 ;
cout << ". El numero 2 es "<< num2 ;
cout << ".\n\n";



resultado = num1+num2;
cout << "\nLa suma de Numero1 y Numero2 es de      : "<<resultado; 

resultado = num1-num2;
cout << "\nLa resta de Numero1 y Numero2 es de     : "<<resultado; 

resultado = (num1*num2);
cout << "\nEl producto de Numero1 y Numero2 es de  : "<<resultado; 

resultado = (num1/num2);
cout << "\nLa division de Numero1 y Numero2 es de  : "<<resultado; 


cout << "\n\nFin del Programa.\nPresione cualquier tecla para salir... ";

getch();




return 0;



}