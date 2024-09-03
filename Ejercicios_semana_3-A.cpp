//ejercios numero 1 mayor de 3 numeros
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

//jercio nro 2 

#include <iostream>
#include <map>
#include <utility>

const std::map<std::pair<int, int>, std::string> PENSIONES {
    {{65, 30}, "Completa"},
    {{65, 0}, "Parcial"}
};

std::pair<int, int> calcularTipoPensión(int edad, int añosContribuyendo) {
    return {std::max(edad, 65), std::min(añosContribuyendo, 30)}; //std::cout en ve de using namescape sdt;
}

int main() {
    int edad, añosContribuyendo;

    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    std::cout << "Ingrese sus años de contribución: ";
    std::cin >> añosContribuyendo;          //std::cout en ve de using namescape sdt;

    auto tipoPensión = calcularTipoPensión(edad, añosContribuyendo);
    auto iter = PENSIONES.find(tipoPensión);

    std::cout << "Tipo de pensión: " << (iter != PENSIONES.end() ? iter->second : "No aplica") << std::endl;

    return 0;
}
//ejerc 3

#include <iostream>
#include <map>
#include <utility>

const std::map<std::pair<int, int>, std::string> PREMIACIONES {
    {{90, 0}, "Oro"},
    {{75, 0}, "Plata"},
    {{60, 0}, "Bronce"}
};

std::pair<int, int> calcularCategoriaPremiacion(int puntaje) {
    return {puntaje, 0};
}

int main() {
    int puntaje;

    std::cout << "Ingrese su puntaje: ";
    std::cin >> puntaje;         //std::cout en ve de using namescape sdt;

    auto categoriaPremiacion = calcularCategoriaPremiacion(puntaje);
    auto iter = PREMIACIONES.find(categoriaPremiacion);

    std::cout << "Categoría: " << (iter != PREMIACIONES.end() ? iter->second : "Participación") << std::endl;

    return 0;
}
//ejerci 4
#include <iostream>
#include <utility>

const std::pair<int, int> NUMERO_SECRETO {50, 0};             //std::cout en ve de using namescape sdt;

std::pair<int, int> adivinarNumero() {
    int adivinanza;
    std::cout << "Ingrese su adivinanza: ";
    std::cin >> adivinanza;
    return {adivinanza, 0};
}

int main() {
    auto adivinanza = adivinarNumero();
    auto resultado = (adivinanza.first > NUMERO_SECRETO.first) ? "El número es
