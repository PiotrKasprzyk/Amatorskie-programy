def dodawanie(a, b):
    return a + b

def odejmowanie(a, b):
    return a - b

def mnozenie(a, b):
    return a * b

def dzielenie(a, b):
    if b != 0:
        return a / b
    else:
        return "Nie można dzielić przez zero!"

print("Witaj w kalkulatorze!")

while True:
    print("Wybierz operację:")
    print("1. Dodawanie")
    print("2. Odejmowanie")
    print("3. Mnożenie")
    print("4. Dzielenie")
    print("5. Wyjście")

    wybor = input("Twój wybór: ")

    if wybor == "5":
        print("Do widzenia!")
        break

    liczba1 = float(input("Podaj pierwszą liczbę: "))
    liczba2 = float(input("Podaj drugą liczbę: "))

    if wybor == "1":
        wynik = dodawanie(liczba1, liczba2)
        print("Wynik dodawania:", wynik)
    elif wybor == "2":
        wynik = odejmowanie(liczba1, liczba2)
        print("Wynik odejmowania:", wynik)
    elif wybor == "3":
        wynik = mnozenie(liczba1, liczba2)
        print("Wynik mnożenia:", wynik)
    elif wybor == "4":
        wynik = dzielenie(liczba1, liczba2)
        print("Wynik dzielenia:", wynik)
    else:
        print("Nieprawidłowy wybór. Spróbuj ponownie.")