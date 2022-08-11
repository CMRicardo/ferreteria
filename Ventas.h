/**
 * Esta función solicita al usuario el número de producto y la cantidad del
 * producto a comprar
 *
 * @param producto El número de producto
 * @param cantidad la cantidad del producto que el usuario quiere comprar
 */
void venderArticulo(int& producto, int& cantidad) {
  cout << "Que producto va a comprar?: ";
  cin >> producto;
  if (producto >= 1 && producto <= 4) {
    cout << "Cuantos va a comprar?: ";
    cin >> cantidad;
  } else {
    cout << "Ha puesto un numero invalido ;(" << endl;
  }
}

void mostrarCategoria(Articulo* arrayCategoria, string nombreCategoria) {
  int producto, cantidad = 0;
  static int cantidadProductosVendidos = 0;

  cout << nombreCategoria << endl;
  for (int i = 0; i < 4; i++) {
    if (!(arrayCategoria[i].cantidad == 0)) {
      cout << i + 1 << ". Nombre: " << arrayCategoria[i].nombre << endl;
      cout << "Unidades disponibles: " << arrayCategoria[i].cantidad << endl;
      cout << "Precio por unidad: " << arrayCategoria[i].precio << endl << endl;
    }
  }
  cout << endl;

  venderArticulo(producto, cantidad);
  Articulo seleccion = arrayCategoria[producto - 1];

  if (cantidad <= seleccion.cantidad) {
    // Si el numero es negativo mostramos un mensaje y
    // no hacemos nada más
    if (cantidad < 0) {
      cout << "Ingreso un numero negativo" << endl;
      return;
    }

    if (producto >= 1 && producto <= 4) {
      if (seleccion.cantidad >= 1) {
        // Restamos la cantidad que compro el usuario
        arrayCategoria[producto - 1].cantidad -= cantidad;

        cout << endl << "----------- Factura -----------" << endl;
        double totalAPagar = Descuento(cantidad, seleccion.precio);
        cantidadProductosVendidos += cantidad;

        cout << cantidad << "x " << seleccion.nombre << " - "
             << cantidad * seleccion.precio << endl;
        cout << "El total a pagar es " << totalAPagar << endl;
        arrayCategoria[producto - 1].cantidadVendida += cantidad;
        arrayCategoria[producto - 1].valorTotalVendido += totalAPagar;
        cout << "Se ha realizado su compra ;)" << endl;
      } else {
        cout << "No hay existencias de este articulos :(" << endl;
      }
    }
  } else {
    int deseaComprarMax;
    cout << "La cantidad maxima que tenemos es: " << seleccion.cantidad << endl;
    cout << "Desea comprarlo?(1 para si, 2 para no.): ";
    cin >> deseaComprarMax;

    if (deseaComprarMax == 1) {
      // Asignamos la cantidad total a la cantidad vendida
      arrayCategoria[producto - 1].cantidadVendida =
          arrayCategoria[producto - 1].cantidad;

      cantidadProductosVendidos += seleccion.cantidad;

      cout << endl << "----------- Factura -----------" << endl;
      double totalAPagar = Descuento(seleccion.cantidad, seleccion.precio);
      cout << seleccion.cantidad << "x " << seleccion.nombre << " - "
           << totalAPagar << endl;

      // Asignamos la cantidad a 0 para indicar que ya no hay stock
      arrayCategoria[producto - 1].cantidad = 0;
      cout << "Se a realizado su compra :)" << endl;
    } else if (deseaComprarMax == 2) {
      cout << "Compra cancelada, vuelva pronto ;)" << endl;
    } else {
      cout << "Ha puesto un numero invalido" << endl;
      cout << "Compra cancelada, vuelva pronto ;)" << endl;
    }
  }

  cout << endl
       << "----------------------------------------" << endl
       << "En total hemos vendido " << cantidadProductosVendidos << " productos"
       << endl
       << "----------------------------------------" << endl;
}

void Ventas() {
  int categoria;

  cout << "Categorias: " << endl;
  cout << "1.Herramientas." << endl;
  cout << "2.Fontaneria." << endl;
  cout << "3.Construccion." << endl;
  cout << "4.Electricidad." << endl;
  cout << "5.Hogar." << endl;
  cout << "6.Jardineria." << endl;
  cout << "7.Otros." << endl;
  cout << "En que categoria esta el producto que desea comprar?: ";
  cin >> categoria;

  switch (categoria) {
    case 1:
      mostrarCategoria(Herramientas, "Herramientas");
      break;
    case 2:
      mostrarCategoria(Fontaneria, "Fontaneria");
      break;
    case 3:
      mostrarCategoria(Construccion, "Construccion");
      break;
    case 4:
      mostrarCategoria(Electricidad, "Electricidad");
      break;
    case 5:
      mostrarCategoria(Hogar, "Hogar");
      break;
    case 6:
      mostrarCategoria(Jardineria, "Jardineria");
      break;
    case 7:
      mostrarCategoria(Otros, "Otros");
      break;
    default:
      cout << "Opcion invalida :(" << endl;
  }
}
