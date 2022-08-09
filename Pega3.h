#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// Esta es una función que se llama jugarPega3. Es un juego que genera 3 números
// aleatorios y el usuario tiene que adivinarlos.
void jugarPega3() {
  int nivel = 0, a, b, c, a1, b2, c3;
  srand(time(0));
  cout << endl
       << "Hola, jugar pega 3 es un juego en donde tendras que adivinar los 3 "
          "numeros.";
  do {
    cout << endl << "Elige la dificultad en la que desees jugar: " << endl;
    cout << "1.Easy.\n2.Medium.\n3.Hard.\n4.Salir" << endl;
    cout << "Dificultad: ";
    cin >> nivel;
    switch (nivel) {
      case 1:
        a = 1 + rand() % 3;
        b = 1 + rand() % 3;
        c = 1 + rand() % 3;

        cout << endl
             << "DIFICULTAD FACIL, ELIJE TRES NUMEROS DEL 1 AL 3, SUERTE"
             << endl
             << endl;
        cout << "Digite su primer numero: ";
        cin >> a1;
        cout << "Digite su segundo numero: ";
        cin >> b2;
        cout << "Digite su tercer numero: ";
        cin >> c3;
        cout << "Los numeros son: " << a << ", " << b << " y " << c << endl;
        if (a1 == a && b2 == b && c3 == c) {
          cout << "Felicidades, Has ganado" << endl;
        } else
          cout << "Ups, has perdido" << endl;
        break;

      case 2:
        a = 1 + rand() % 6;
        b = 1 + rand() % 6;
        c = 1 + rand() % 6;
        cout << "DIFICULTAD MEDIA, ELIJE TRES NUMEROS DEL 1 AL 6, SUERTE ;)"
             << endl
             << endl;
        cout << "Digite su primer numero: ";
        cin >> a1;
        cout << "Digite su segundo numero: ";
        cin >> b2;
        cout << "Digite su tercer numero: ";
        cin >> c3;
        cout << "Los numeros son: " << a << ", " << b << " y " << c << endl;

        if (a1 == a && b2 == b && c3 == c) {
          cout << "Felicidades, Has ganado" << endl;
        } else
          cout << "Ups, has perdido" << endl;
        break;
      case 3:
        a = 1 + rand() % 10;
        b = 1 + rand() % 10;
        c = 1 + rand() % 10;
        cout << "DIFICULTAD DIFICIL, ELIJE TRES NUMEROS DEL 1 AL 10, SUERTE ;)"
             << endl
             << endl;
        cout << "Digite su primer numero: ";
        cin >> a1;
        cout << "Digite su segundo numero: ";
        cin >> b2;
        cout << "Digite su tercer numero: ";
        cin >> c3;
        cout << "Los numeros son: " << a << ", " << b << " y " << c << endl;

        if (a1 == a && b2 == b && c3 == c) {
          cout << "Felicidades, Has ganado" << endl;
        } else
          cout << "Ups, has perdido" << endl;
        break;
      case 4:
        cout << "Gracias por jugar ;)" << endl;
        break;
      default:
        cout << "Ha puesto un valor incorrecto." << endl;
    }
  } while (nivel != 4);
}