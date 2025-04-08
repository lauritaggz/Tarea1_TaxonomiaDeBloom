#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Clase Pregunta representa las preguntas de la prueba
class Pregunta {
private:
  string enunciado; // Enunciado de la pregunta
  string nivelTaxonomico; // Nivel taxonomico de la pregunta
  string tipo;  // Tipo de pregunta ya sea de opción múltiple, verdadero/falso, etc.
  int tiempoEstimado; // Tiempo estimado para resolver la pregunta
public: 
  // Constructor para los atributos de la clase
  Pregunta(string enunciado, string nivelTaxonomico, string tipo, int tiempoEstimado){
    this->enunciado = enunciado;
    this->nivelTaxonomico = nivelTaxonomico;
    this->tipo = tipo;
    this->tiempoEstimado = tiempoEstimado;
  }
  // Destructor
  virtual ~Pregunta() {
  };

  // Getters y Setters para los atributos en private (Encapsulamiento)

  string getEnunciado() {
    return enunciado;
  }
  string getNivelTaxonomico() {
    return nivelTaxonomico;
  }
  string getTipo() {
    return tipo;
  }
  int getTiempoEstimado() {
    return tiempoEstimado;
  }

  // Setters
  void setEnunciado(string enunciado) {
    this->enunciado = enunciado;
  }

  void setNivelTaxonomico(string nivelTaxonomico) {
    this->nivelTaxonomico = nivelTaxonomico;
  }

  void setTipo(string tipo) {
    this->tipo = tipo;
  }

  void setTiempoEstimado(int tiempoEstimado) {
    this->tiempoEstimado = tiempoEstimado;
  }

  // Método para mostrar la pregunta
  virtual void mostrarPregunta() {
    cout << "Enunciado: " << enunciado << endl;
    cout << "Nivel taxonomico: " << nivelTaxonomico << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Tiempo estimado: " << tiempoEstimado << " minutos" << endl;
  }
};
class PreguntaOpcionMultiple : public Pregunta{
  private:
    vector<string> opciones;
  public:
    PreguntaOpcionMultiple(string enunciado, string nivelTaxonomico, string tipo, int tiempoEstimado, vector<string> opciones) : Pregunta(enunciado, nivelTaxonomico, "Opcion Multple", tiempoEstimado) {
      this->opciones = opciones;
    }
    void mostrarPregunta() override{
      Pregunta::mostrarPregunta();
      cout << "Opciones: " << endl;
      for (size_t i = 0; i < opciones.size(); i++){
        cout << i + 1 << ". " << opciones[i] << endl;
      }
      cout << endl;
    }
};

class PreguntaVerdaderoFalso : public Pregunta{
  public:
    PreguntaVerdaderoFalso(string enunciado, string nivelTaxonomico, int tiempoEstimado) : Pregunta(enunciado, nivelTaxonomico, "Verdadero/Falso", tiempoEstimado) {}

    void mostrarPregunta() override{
      Pregunta::mostrarPregunta();
      cout << "Respuesta: Verdadero o Falso" << endl;
    }

};
  



// Clase Prueba maneja y representa las preguntas para la prueba
class Prueba {
private:
  vector<Pregunta*> preguntas; // Vector de punteros a Pregunta
public:
  // Constructor
  Prueba() {}
  // Destructor
  ~Prueba() {
    for (Pregunta* pregunta : preguntas) {
        delete pregunta; // Free memory allocated for each Pregunta
    }
    preguntas.clear(); // Clear the vector to remove dangling pointers
    cout << "Prueba eliminada" << endl;
    cout << "-------------------------------------" << endl;
  }

  // Agregar pregunta
  void agregarPregunta(Pregunta* pregunta) {
    preguntas.push_back(pregunta);
    cout << "Pregunta agregada correctamente.\n" << endl;
  }

  // Mostrar todas las preguntas
  void mostrarPreguntas() {
    if (preguntas.empty()) {
      cout << "No hay preguntas actualmente\n" << endl;
      return;
    }

    for (size_t i = 0; i < preguntas.size(); i++) {
      cout << "\nPregunta " << i + 1 << ":\n" << endl;
      preguntas[i]->mostrarPregunta();
    }
  }

  // Buscar preguntas por nivel taxonómico
  void buscarPorNivelTaxonomico(string nivel) {
    bool encontrado = false;
    for (size_t i = 0; i < preguntas.size(); i++) {
      if (preguntas[i]->getNivelTaxonomico() == nivel) {
        preguntas[i]->mostrarPregunta();
        encontrado = true;
      }
    }
    if (!encontrado) {
      cout << "No se encontraron preguntas con ese nivel taxonómico.\n" << endl;
    }
  }

  // Eliminar una pregunta por índice
  void eliminarPregunta(int indice) {
    if (indice < 0 || indice >= preguntas.size()) {
      cout << "Índice inválido.\n" << endl;
      return;
    }
    // Liberar memoria si usamos punteros
    delete preguntas[indice];
    preguntas.erase(preguntas.begin() + indice); // Eliminar el puntero del vector
    cout << "Pregunta eliminada correctamente.\n" << endl;
  }

  // Actualizar una pregunta por índice
  void actualizarPregunta(int indice, Pregunta* nuevaPregunta) {
    if (indice < 0 || indice >= preguntas.size()) {
      cout << "Índice inválido.\n" << endl;
      return;
    }
    delete preguntas[indice]; // Liberar la pregunta anterior
    preguntas[indice] = nuevaPregunta;
    cout << "Pregunta actualizada correctamente.\n" << endl;
  }

  // Calcular tiempo total
  int calcularTiempoTotal() {
    int total = 0;
    for (size_t i = 0; i < preguntas.size(); i++) {
      total += preguntas[i]->getTiempoEstimado();
    }
    return total;
  }
};

// Menú utilizado para interactuar con el programa
int main() {
  Prueba prueba;
  int opcion;
  bool repetir = true;

  do {
    cout << "\n\nMENÚ DE OPCIONES" << endl;
    cout << "1. Agregar pregunta" << endl;
    cout << "2. Mostrar todas las preguntas" << endl;
    cout << "3. Buscar pregunta por nivel taxonómico" << endl;
    cout << "4. Eliminar pregunta por índice" << endl;
    cout << "5. Actualizar pregunta por índice" << endl;
    cout << "6. Ver tiempo total estimado de la prueba" << endl;
    cout << "0. SALIR" << endl;
    cout << "\nIngrese una opción: ";
    cin >> opcion;

    switch (opcion) {
      case 1: {
        cin.ignore(); // Limpia el buffer
        string enunciado, nivel, tipo;
        int tiempo;

        cout << "\nIngrese el enunciado de la pregunta: ";
        getline(cin, enunciado);
        cout << "Ingrese el nivel taxonómico: ";
        getline(cin, nivel);
        cout << "Ingrese el tipo de pregunta: ";
        getline(cin, tipo);
        cout << "Ingrese el tiempo estimado (minutos): ";
        cin >> tiempo;

        Pregunta* nueva = new Pregunta(enunciado, nivel, tipo, tiempo);
        prueba.agregarPregunta(nueva);
        break;
      }

      case 2:
        prueba.mostrarPreguntas();
        break;

      case 3: {
        cin.ignore();
        string nivel;
        cout << "\nIngrese el nivel taxonómico a buscar: ";
        getline(cin, nivel);
        prueba.buscarPorNivelTaxonomico(nivel);
        break;
      }

      case 4: {
        int indice;
        cout << "\nIngrese el índice de la pregunta a eliminar (empezando desde 0): ";
        cin >> indice;
        prueba.eliminarPregunta(indice);
        break;
      }

      case 5: {
        int indice;
        cin.ignore();
        string enunciado, nivel, tipo;
        int tiempo;

        cout << "\nIngrese el índice de la pregunta a actualizar: ";
        cin >> indice;
        cin.ignore();

        cout << "Nuevo enunciado: ";
        getline(cin, enunciado);
        cout << "Nuevo nivel taxonómico: ";
        getline(cin, nivel);
        cout << "Nuevo tipo: ";
        getline(cin, tipo);
        cout << "Nuevo tiempo estimado (minutos): ";
        cin >> tiempo;

        Pregunta* actualizada = new Pregunta(enunciado, nivel, tipo, tiempo);
        prueba.actualizarPregunta(indice, actualizada);
        break;
      }

      case 6:
        cout << "\nTiempo total estimado de la prueba: "
             << prueba.calcularTiempoTotal() << " minutos" << endl;
        break;

      case 0:
        repetir = false;
        break;

      default:
        cout << "\nOpción inválida. Intente nuevamente." << endl;
    }

  } while (repetir);

  cout << "\nPrograma finalizado" << endl;
  return 0;
}
