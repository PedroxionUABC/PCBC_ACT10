#define tamanodelvector 500
#define cantidadautomatica 10

void clear();
void pause();
void menu();
void opcionesmenu();
void copiarcadena(char destino[], const char origen[]);

void agregadoautomatico(int *contadordedatos);
void agregadomanual(int *contadordedatos);
void eliminarregistro(int *contadordedatos);
void buscarregistro(int contadordedatos);
void ordenarregistros(int contadordedatos);
void imprimirregistros(int contadordedatos);
void imprimirunregistro();
