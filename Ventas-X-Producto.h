int ElegirArticulo() {
  int opcion;
  cout << endl << "Seleccione el producto: ";
  cin >> opcion;
  if (!(opcion >= 1 && opcion <= 4)) {
    cout << endl << "Ha puesto un numero invalido ;(" << endl;
  }
  return opcion;
}

void MostrarVentasxProducto(Articulo* arrayCategoria, string nombreCategoria) {
  cout << endl << nombreCategoria << endl;
  int opcion;
  for (int i = 0; i < 4; i++) {
    cout << i + 1 << ". Nombre: " << arrayCategoria[i].nombre << endl;
  }
  opcion = ElegirArticulo();
  Articulo seleccion = arrayCategoria[opcion - 1];

  cout << endl << "Nombre: " << seleccion.nombre << endl;
  cout << "Unidades disponibles: " << seleccion.cantidad << endl;
  cout << "Precio por unidad: " << seleccion.precio << endl;
  cout << "Unidades vendidas: " << seleccion.cantidadVendida << endl;
  cout << "Total vendido de este producto es: "
       << seleccion.cantidadVendida * seleccion.precio << endl
       << endl;
  cout << endl;
}

void VentasxProducto() {
  int categoria;
  cout << endl << "-------> Categorias <-------" << endl;
  cout << "1.Herramientas." << endl;
  cout << "2.Fontaneria." << endl;
  cout << "3.Construccion." << endl;
  cout << "4.Electricidad." << endl;
  cout << "5.Hogar." << endl;
  cout << "6.Jardineria." << endl;
  cout << "7.Otros." << endl;
  cout << endl << "Que categoria desea consultar?: ";
  cin >> categoria;

  switch (categoria) {
    case 1:
      MostrarVentasxProducto(Herramientas, "Herramientas");
      break;
    case 2:
      MostrarVentasxProducto(Fontaneria, "Fontaneria");
      break;
    case 3:
      MostrarVentasxProducto(Construccion, "Construccion");
      break;
    case 4:
      MostrarVentasxProducto(Electricidad, "Electricidad");
      break;
    case 5:
      MostrarVentasxProducto(Hogar, "Hogar");
      break;
    case 6:
      MostrarVentasxProducto(Jardineria, "Jardineria");
      break;
    case 7:
      MostrarVentasxProducto(Otros, "Otros");
      break;
    default:
      cout << "Opcion invalida :(" << endl;
  }
}
