#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string imie, nazwisko;
    int obecnosc;

    std::cout << "Podaj imię ucznia: ";
    std::cin >> imie;

    std::cout << "Podaj nazwisko ucznia: ";
    std::cin >> nazwisko;

    std::cout << "Podaj obecność ucznia (0 - nieobecny, 1 - obecny): ";
    std::cin >> obecnosc;

    std::ofstream dziennik("dziennik.txt", std::ios::app);
    if (dziennik.is_open()) {
        dziennik << imie << " " << nazwisko << " " << obecnosc << std::endl;
        dziennik.close();
        std::cout << "Zapisano informacje o uczniu w dzienniku." << std::endl;
    } else {
        std::cout << "Nie można otworzyć pliku dziennik.txt." << std::endl;
    }

    return 0;
}