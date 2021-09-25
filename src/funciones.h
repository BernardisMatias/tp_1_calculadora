#define NO 0
#define SI 1
#define NULL_VALUE -1
#define MIN_VALUE -10000
#define MAX_VALUE 10000
#define X_VALUE 'x'
#define Y_VALUE 'y'

/// \fn void MenuDeOpciones(float, float)
/// \brief - Muestra el menú de opciones y valores de A y B respectivamente.
/// \param numeroUno - Valor de A
/// \param numeroDos - Valor de B
void MenuDeOpciones(float numeroUno, float numeroDos);

/// \fn float CargarValor(float)
/// \brief Funcion unica para cargar valores numericos en A y B
/// \param opcion
/// \return - Devuelve los valores para A o para B
float CargarValor(float opcion);


/// \fn float CalcularSuma(float, float)
/// \brief - Funcion que calcula la suma entre dos números.
/// \param numeroUno - Primer parámetro
/// \param numeroDos - Segundo parámetro
/// \return - Devuelve la suma de dos números.
float CalcularSuma(float numeroUno, float numeroDos);

/// \fn float CalcularResta(float, float)
/// \brief - Funcion que calcula la resta entre dos números.
/// \param numeroUno - Primer parámetro
/// \param numeroDos - Segundo parámetro
/// \return - Devuelve la resta de dos números.
float CalcularResta(float numeroUno, float numeroDos);


/// \fn float CalcularDivision(float, float)
/// \brief - Funcion que calcula la division entre dos números.
/// \param numeroUno - Primer parámetro
/// \param numeroDos - Segundo parámetro
/// \return - Devuelve la division de dos números.
float CalcularDivision(float numeroUno, float numeroDos);


/// \fn float CalcularMultiplicacion(float, float)
/// \brief - Funcion que calcula la multiplicación entre dos números.
/// \param numeroUno - Primer parámetro
/// \param numeroDos - Segundo parámetro
/// \return - Devuelve la multiplicación de dos números.
float CalcularMultiplicacion(float numeroUno, float numeroDos);


/// \fn int CalcularFactorial(float)
/// \brief - Funcion que convierte el numero en entero para calcular el factorial de un número.
/// \param numero - Dato de entrada en float
/// \return - Devuelve el factorial del numero en entero.
int CalcularFactorial(float numero);


/// \fn void InformarResultados(float, float, float, float, float, int, int, float)
/// \brief - Informa todos los resultados en pantalla.
/// \param numeroUno - Numero uno
/// \param numeroDos - Numero dos
/// \param resultadoSuma - Resultado de la Suma
/// \param resultadoResta - Resultado de la Resta
/// \param resultadoMultiplicacion - Resultado de la Multiplicacion
/// \param resultadoFactorialN1 - Resultado del Factorial del numero uno
/// \param resultadoFactorialN2 - Resultado del Factorial del numero dos
/// \param resultadoDivision - Resultado de la Division
void InformarResultados(float numeroUno, float numeroDos, float resultadoSuma, float resultadoResta, float resultadoMultiplicacion, int resultadoFactorialN1, int resultadoFactorialN2, float resultadoDivision);

/// \fn void CalcularResultados(float, float, float*, float*, float*, int*, int*, float*)
/// \brief - Calcula los resultados de todas las operaciones.
/// \param numeroUno - Numero A
/// \param numeroDos - Numero B
/// \param resultadoSuma - Puntero al resultado de la suma
/// \param resultadoResta - Puntero al resultado de la resta
/// \param resultadoMultiplicacion - Puntero al resultado de la multiplicacion
/// \param resultadoFactorialN1 - Puntero al resultado de la factorial de Numero A
/// \param resultadoFactorialN2 - Puntero al resultado de la factorial de Numero B
/// \param resultadoDivision - Puntero al resultado de la division
/// \return - 1 para mostrar que se calcularon los resultados.
int CalcularResultados(float numeroUno, float numeroDos, float* resultadoSuma, float* resultadoResta, float* resultadoMultiplicacion, int* resultadoFactorialN1, int* resultadoFactorialN2, float* resultadoDivision);

/// \fn void ValorFloataCadenaChar(float, char*)
/// \brief - Convierte un numero float en array de caracteres para mostrarlos en el menu.
/// \param numero - Numero en float ingresado.
/// \param cadena - Puntero a char que sirve para obtener la cadena.
void ValorFloataCadenaChar(float numero, char* cadena);
