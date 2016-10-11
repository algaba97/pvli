// Jorge Algaba VJ02
// Comentario general sobre la solución,
// explicando cómo se resuelve el problema
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <assert.h>
#include <stdio.h>
#include <algorithm>



// función que resuelve el problema
// comentario sobre el coste, O(f(N))
bool resolver(int vector[], int numero, int tamanyo) {

	int maximoizq = vector[0];
	bool salida = true;
	if (numero<tamanyo - 1){
		for (int i = 1; i <= numero; i++){
			if (vector[i] > maximoizq) maximoizq = vector[i];
		}

		int i = numero + 1;




		while ((salida) && (i<tamanyo)){
			salida = vector[i] > maximoizq;
			i++;}
	                       }

		return salida;
	
}

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
void resuelveCaso() {
	// leer los datos de la entrada
	int tamvector;
	int numero;
	std::cin >> tamvector>>numero;
	
	int*vector = new int[tamvector];
	for (int i = 0; i < tamvector; i++){
		std::cin >> vector[i];
	}
	
		if (resolver(vector, numero,tamvector)){
			std::cout << "SI" << "\n";
		}
		else std::cout << "NO" << "\n";



	delete[] vector;
	// escribir sol


}

int main() {
	// Para la entrada por fichero.
	// Comentar para acepta el reto
#ifndef DOMJUDGE
	std::ifstream in("datos.txt");
	//std::ifstream in("datos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
#endif 


	int numCasos;
	std::cin >> numCasos;
	for (int i = 0; i < numCasos; ++i)
		resuelveCaso();


	// Para restablecer entrada. Comentar para acepta el reto
#ifndef DOMJUDGE // para dejar todo como estaba al principio
	std::cin.rdbuf(cinbuf);
   // system("PAUSE");
#endif

	return 0;
}
