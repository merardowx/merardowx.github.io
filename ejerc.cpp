#include <iostream>
#include <cmath>
//ejercicio_nro_1
double evaluarFunción(double x) {
    double resultado;
    if (x <= 0) {
        resultado = pow(x, 6) + x - 2;
    } else if (0 < x && x < 4) {
        resultado = sqrt(pow(x, 3) + 4 * x + 1);
    } else {
        resultado = pow(x, 2) + 1;
    }
    return resultado;
}

int main() {
    double x;
    std::cout << "Ingrese el valor de X: ";
    std::cin >> x;
    double resultado = evaluarFunción(x);
    std::cout << "La función es igual a: " << resultado << std::endl;
    return 0;
}

//ejercicio nro 2
  #include <iostream>
#include <string>

int desglose(std::string num, int ini, int fin, int* out) {
    int sum = 0;
    for (int i = ini; i <= fin; i++) {
        sum = sum * 10 + (num[i] - '0');
    }
    *out = sum;
    return fin - ini + 1;
}

int main() {
    std::string num;
    std::cout << "Ingrese el número: ";
    std::cin >> num;

    if (num.length() != 12 || num[12] != 'P') {
        std::cout << "El número debe tener 12 dígitos y terminar en P" << std::endl;
        return 1;
    }

    int prog, rama, cion;
    desglose(num, 0, 3, &prog);
    desglose(num, 4, 7, &rama);
    desglose(num, 8, 11, &cion);

    int max = std::max(prog, std::max(rama, cion));
    int min = std::min(prog, std::min(rama, cion));
    int intermedio;
    if (prog == min || prog == max) {
        intermedio = rama;
    } else {
        intermedio = prog;
    }
    if (intermedio == min || intermedio == max) {
        intermedio = cion;
    }

    std::cout << "P es: " << prog << std::endl;
    std::cout << "R es: " << rama << std::endl;
    std::cout << "C es: " << cion << std::endl;
    std::cout << "Mayor: " << max << std::endl;
    std::cout << "Menor: " << min << std::endl;
    std::cout << "Intermedio: " << intermedio << std::endl;

    return 0;
}
