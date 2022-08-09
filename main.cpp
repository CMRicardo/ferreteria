#include <iostream>
#include <string>

// 💡 Los archivos extra deben ser con extensión ".h"
#include "Articulo.h"
#include "Creditos.h"
#include "Inventario.h"
#include "Menu.h"
#include "Mostrar.h"
#include "Pega3.h"
#include "Ventas-X-Producto.h"
#include "Ventas.h"

using namespace std;

int main() {
  int opcion = 0;

  do {
    // Mostramos las instrucciones
    mostrarMenu();
    cout << endl << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion) {
      case 1:
        // Función para vender articulo
        Ventas();
        break;

      case 2:
        mostrarPrecios(Herramientas, "Herramientas");
        mostrarPrecios(Fontaneria, "Fontaneria");
        mostrarPrecios(Construccion, "Construccion");
        mostrarPrecios(Electricidad, "Electricidad");
        mostrarPrecios(Hogar, "Hogar");
        mostrarPrecios(Jardineria, "Jardineria");
        mostrarPrecios(Otros, "Otros");
        break;

      case 3:
        mostrarArticulos(Herramientas, "Herramientas");
        mostrarArticulos(Fontaneria, "Fontaneria");
        mostrarArticulos(Construccion, "Construccion");
        mostrarArticulos(Electricidad, "Electricidad");
        mostrarArticulos(Hogar, "Hogar");
        mostrarArticulos(Jardineria, "Jardineria");
        mostrarArticulos(Otros, "Otros");
        break;

      case 4:
        VentasxProducto();
        break;
      case 5:
        // Función para el total de ventas de detalle.
        break;
      case 6:
        jugarPega3();
        break;
      case 7:
        creditos();
        break;

      default:
        cout << endl << "Opcion invalida" << endl;
        break;
    }

  } while (opcion != 7);

  return 0;
}
