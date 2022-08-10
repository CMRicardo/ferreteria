void MostrarVentas(Articulo* arrayCategoria, string nombreCategoria) {
  cout << endl << "---------- " << nombreCategoria << " ----------" << endl;

  for (int i = 0; i < 4; i++) {
    Articulo seleccion = arrayCategoria[i];
    cout << i + 1 << ". Nombre: " << seleccion.nombre << endl;
    cout << "Unidades disponibles: " << seleccion.cantidad << endl;
    cout << "Precio por unidad: " << seleccion.precio << endl;
    cout << "Unidades vendidas: " << seleccion.cantidadVendida << endl;
    cout << "Total vendido de este producto es: "
         << seleccion.cantidadVendida * seleccion.precio << endl
         << endl;
  }
}