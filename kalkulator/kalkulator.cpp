#include <iostream>

int main() {
    char operatorSymbol;
    double num1, num2, result;

    std::cout << "Podaj operator (+, -, *, /): ";
    std::cin >> operatorSymbol;

    std::cout << "Podaj pierwszą liczbę: ";
    std::cin >> num1;

    std::cout << "Podaj drugą liczbę: ";
    std::cin >> num2;

    switch (operatorSymbol) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Błąd: Nie można dzielić przez zero!" << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "Błąd: Nieznany operator!" << std::endl;
            return 1;
    }

    std::cout << "Wynik: " << result << std::endl;

    return 0;
}