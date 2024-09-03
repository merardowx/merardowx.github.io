#include <iostream>

int mayorDeTres(int a, int b, int c)  //declarando variables 
{
    int mayor = 0; // condiciones para que cumpla el mayor
    mayor = (a >= b && a >= c) * a +
        (b >= a && b >= c) * b +
        (c >= a && c >= b) * c;
    return mayor;
}

int main() 
{
    int num1, num2, num3;
    std::cout << "Ingrese tres numeros: "; //std::cout en ve de using namescape sdt;
    std::cin >> num1 >> num2 >> num3;
    std::cout << "El mayor de los tres numeros es: " << mayorDeTres(num1, num2, num3) << std::endl; //endl es un bufer de salida
    return 0;
}
