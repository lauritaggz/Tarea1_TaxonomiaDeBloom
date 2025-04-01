#include <iostream>
#include <string>
using namespace std;

/*
                                                  DESCRIPCION DE LA PROBLEMATICA
                                                  
  El profesor de una asignatura debe realizar una serie de evaluaciones con el objetivo de medir los conocimientos, y las formas de
  evaluar los conocimientos son variados. Uno de estos instrumentos son los examenes escritos, y existen diversas opciones para
  elaborar y realizar este tipo de pruebas, por lo que es necesario seleccionar el tipo de pregunta en funcion de la capacidad que
  se desea evaluar. A continuacion se recogen algunos tipos de preguntas, asi como sus principales caracteristicas.
  
  A) Pruebas de composicion y ensayo: Estan encaminadas a pedir a los alumnos que organicen, seleccionen y expresen
  las ideas esenciales de los temas tratados. Son, asi mismo, adecuadas para realizar analisis, comentarios y juicios criticos
  sobre textos o cualquier otro documento, visitas a exposiciones y empresas, salidas culturales, asistencia a conferencias,
  charlas-coloquio, etc.
  
  B) Preguntas de respuesta corta: En ellas el alumno debe aportar una informacion muy concreta y especifica que podria
  resumirse en una frase, un dato, una palabra, un signo, una formula, etc, evidentemente referidos a cuestiones de cierta
  relevancia. (Estan especialmente indicadas para trabajar cuestiones numericas)
  
  c) Preguntas de texto incompleto: Las respuestas quedan intercaladas en el texto que se les presenta a los alumnos (que
  debera ser un enunciado verdadero al que le falten algunas palabras. Son adecuadas para valorar la comprension de hechos,
  el dominio de una terminolog ́ıa exacta, el conocimiento de principios b ́asicos, etc. Al redactarlas se debe evitar copiar
  enunciados textuales y se presentar ́an en un lenguaje adaptado, comprensible y que no a ̃nada mayor dificultad al contenido
  de la prueba.
  
  D) Preguntas de correspondencia o emparejamiento: Consisten en presentar dos listas, A y B, con palabras o frases
  breves dispuestas verticalmente para que los alumnos establezcan las relaciones que consideren adecuadas entre cada palabra
  de la columna A con la correspondiente de la B, argumentando la relacion establecida entre las mismas. Al prepararlas es
  conveniente incluir en cada ıtem un numero desigual de elementos entre las columnas A y B para evitar que se establezcan
  relaciones por eliminacion. Est ́an especialmente indicadas para tareas de memorizacion, discriminacion y conocimiento de
  hechos concretos.
  
  E) Preguntas de opcion multiple: Constan de un tronco o base en el que se fundamenta el problema, y un n ́umero
  indeterminado de respuestas opcionales de las cuales una es la correcta y las dem ́as son distractores. Son recomendables
  para valorar la comprensi ́on, aplicaci ́on, discriminaci ́on de significados, etc.
  
  F) Preguntas de verdadero – falso (justificadas): Pueden ser utiles para medir la capacidad de distinci ́on entre hechos
  y opiniones o para mejorar la exactitud en las observaciones, argumentando la respuesta elegida.
  
  G) Preguntas analogıas/diferencias: Se pretende establecer clasificaciones o caracter ́ısticas entre hechos, acciones, etc. Es
  un grado mayor de interiorizacion de los conceptos adquiridos y se trabaja sobre todo la comprensi ́on y el razonamiento.
  
  H) Preguntas de interpretacion y/o elaboracion de graficos, mapas, estadısticas, etc.: Por un lado, la elaboracion
  de graficos sirve para organizar y representar la informacion con codigos no verbales, es decir, otras formas de expresion; y
  por otro lado, la lectura e interpretacion sirve para extraer conclusiones, posibilitando la generalizacion de la informacion.
  Cada prueba esta asociada a una asignatura en particular y, dependiendo del programa del curso, podr ́a tener una ponderacion
  distinta del resto de evaluaciones.
  
  Suponga que cada prueba esta compuesta de un conjunto indeterminado de preguntas de opcicion multiple o de preguntas de
  verdadero - falso. Cada pregunta responde a un nivel de la taxonom ́ıa de Bloom, adem ́as de poseer un tiempo estimado para
  ser resuelto por el aplicante. Las preguntas no pueden repetirse en las evaluaciones de dos años consecutivos y deben tener la
  solucion esperada.
  
  INSTRUCCIONES:
  
  1)Diseñe un diagrama de clases que represente una solucion para el problema planteado.
  
  2)Desarrolle un programa en C++, basado en el diagrama de clases diseñado, que permita generar evaluaciones escritas,
  solicitando la cantidad de preguntas y el nivel taxonomico que cada pregunta debe evaluar.
  
  3)El sistema debe permitir crear un item, actualizar un item, borrar un item, consultar informacion de un item y buscar un
  item en funcion de la taxonomıa a la que responde. Todo esto mediante el uso de un menu.
  
  4)Como requisito adicional el programa debera entregar el tiempo estimado para desarrollar la prueba completamente.
  
  5)El proyecto deberia ejecutarse a traves de la consola de comandos, de tal manera que el proyecto pueda ejecutarse desde la consola.
  
  6)Desarrolle un informe que describa las decisiones de diseño. El informe debe contener:
  
    -Introduccion: Exponiendo motivacion, objetivos del informe y el cuerpo del documento.
    
    -Descripcion de la solucion: Se debe describir la solucion que se propone, es preciso describir el modelo y el objetivo
    de cada elemento y una discusi ́on de decisiones del diseño.
    
    -Conclusion: Comentarios sobre el desarrollo del trabajo. Debe comentar sobre el cumplimiento de los objetivos, y
    una reflexion sobre el trabajo realizado.
    
  7)El informe y el software deben ser entregados en la fecha indicada por el profesor.
*/

//Lorenzo

//Clase Pregunta representa las preguntas de la prueba
class Pregunta{
private:
  string enunciado; //Enunciado de la pregunta
  string nivelTaxonomico; //Nivel taxonomico de la pregunta
  string tipo;  //Tipo de pregunta ya sea de opcion multiple, verdadero/falso, etc.
  int tiempoEstimado; //Tiempo estimado para resolver la pregunta
public: 
  //Constructor para los atributos de la clase
  Pregunta(string enunciado, string nivelTaxonomico, string tipo, int tiempoEstimado){
    this->enunciado = enunciado;
    this->nivelTaxonomico = nivelTaxonomico;
    this->tipo = tipo;
    this->tiempoEstimado = tiempoEstimado;
  }

  //Getters y Setters parar los atributos en private(Encapsulamiento)

  //Getters
  string getEnunciado(){
    return enunciado;
  }
  string getNivelTaxonomico(){
    return nivelTaxonomico;
  }
  string getTipo(){
    return tipo;
  }
  int getTiempoEstimado(){
    return tiempoEstimado;
  }

  //Setters
  void setEnunciado(string enunciado){
    this->enunciado = enunciado;
  }

  void setNivelTaxonomico(string nivelTaxonomico){
    this->nivelTaxonomico = nivelTaxonomico;
  }

  void setTipo(string tipo){
    this->tipo = tipo;
  }

  void setTiempoEstimado(int tiempoEstimado){
    this->tiempoEstimado = tiempoEstimado;
  }

  //Metodo para mostrar la pregunta
  void mostrarPregunta(){
    cout << "Enunciado: " << enunciado << endl;
    cout << "Nivel taxonomico: " << nivelTaxonomico << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Tiempo estimado: " << tiempoEstimado << " minutos" << endl;
  }
};


//Laura

//Clase Prueba maneja y representa las preguntas para la prueba
#define MAX_PREGUNTAS 100

class Prueba {
private:
  Pregunta* preguntas[MAX_PREGUNTAS]; //Arreglo de punteros a Pregunta
  int cantidadPreguntas; 

public:
  //Constructor
  Prueba() {
    cantidadPreguntas = 0;
  }

  //Agregar pregunta
  void agregarPregunta(Pregunta* pregunta) {
    if (cantidadPreguntas < MAX_PREGUNTAS) {
      preguntas[cantidadPreguntas] = pregunta;
      cantidadPreguntas++;
      cout << "Pregunta agregada correctamente.\n"<<endl;
    } else {
      cout << "No se pueden agregar más preguntas. Límite alcanzado.\n";
    }
  }

  // Mostrar todas las preguntas
  void mostrarPreguntas() {
    if (cantidadPreguntas == 0) {
      cout << "No hay preguntas actualmente\n"<<endl;
      return;
    }

    for (int i = 0; i < cantidadPreguntas; i++) {
      cout << "\nPregunta " << i + 1 << ":\n"<< endl;
      preguntas[i]->mostrarPregunta();
    }
  }

  //Buscar preguntas por nivel taxonómico
  void buscarPorNivelTaxonomico(string nivel) {
    bool encontrado = false;
    for (int i = 0; i < cantidadPreguntas; i++) {
      if (preguntas[i]->getNivelTaxonomico() == nivel) {
        preguntas[i]->mostrarPregunta();
        encontrado = true;
      }
    }
    if (!encontrado) {
      cout << "No se encontraron preguntas con ese nivel taxonómico.\n"<<endl;
    }
  }

  //Eliminar una pregunta por índice
  void eliminarPregunta(int indice) {
    if (indice < 0 || indice >= cantidadPreguntas) {
      cout << "Índice inválido.\n"<< endl;
      return;
    }
    //Liberar memoria si usamos punteros
    delete preguntas[indice];
    //Desplazar elementos hacia la izquierda
    for (int i = indice; i < cantidadPreguntas - 1; i++) {
      preguntas[i] = preguntas[i + 1];
    }
    cantidadPreguntas--;
    cout << "Pregunta eliminada correctamente.\n"<< endl;
  }

  //Actualizar una pregunta por índice
  void actualizarPregunta(int indice, Pregunta* nuevaPregunta) {
    if (indice < 0 || indice >= cantidadPreguntas) {
      cout << "Índice inválido.\n"<<endl;
      return;
    }
    delete preguntas[indice]; //Liberar la pregunta anterior
    preguntas[indice] = nuevaPregunta;
    cout << "Pregunta actualizada correctamente.\n"<<endl;
  }

  //Calcular tiempo total
  int calcularTiempoTotal() {
    int total = 0;
    for (int i = 0; i < cantidadPreguntas; i++) {
      total += preguntas[i]->getTiempoEstimado();
    }
    return total;
  }
};

//Menu utilzado para interactuar con el programa tomando el modelo de menus que esta en canvas cargado como menu_opciones.c

//Lorenzo y Laura
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
          cin.ignore(); //Limpia el buffer
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
