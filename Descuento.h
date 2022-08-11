#include <iostream>
using namespace std;

double Descuento(int cantidad, double precio) {
  const double descTreinta = 0.3, descCincuenta = 0.5;
  double precioTotal = 0, descuentoNeto = 0;

  if (cantidad == 12) {
    descuentoNeto = (precio * descTreinta);
    precioTotal = (precio - descuentoNeto) * cantidad;
    cout << "Aplica un descuento del 30%" << endl;
  } else if (cantidad != 12 && cantidad > 20) {
    descuentoNeto = (precio * descCincuenta);
    precioTotal = (precio - descuentoNeto) * cantidad;
    cout << "Aplica un descuento del 50%" << endl;
  } else {
    cout << "No aplica para algun descuento" << endl;
    precioTotal = cantidad * precio;
  }

  return precioTotal;
}