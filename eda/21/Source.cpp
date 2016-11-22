// Grupo XYZ, Fulano y Mengano
// Comentario general sobre la solución,
// explicando cómo se resuelve el problema
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <assert.h>
#include <stdio.h>
#include <algorithm>
#include "SinglyLinkedList.h"
using namespace std;


// función que resuelve el problema
// comentario sobre el coste, O(f(N))
void resolver(SinglyLinkedList<int>&lista) {
	lista.ensenha();
	lista.invierte();
	lista.ensenha();

}

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
bool resuelveCaso() {
	// leer los datos de la entrada
	int casos;
	cin >> casos;
	if (!std::cin)
		return false;
	if (casos == 0){
		cout << "\n\n";
	}
	else{
		int aux;
		SinglyLinkedList<int>lista;
		for (int i = 0; i < casos; i++){
			cin >> aux;
			lista.push_front(aux);
		}
		// escribir sol
		resolver(lista);
	}
	return true;

}

int main() {
	// Para la entrada por fichero.
	// Comentar para acepta el reto
#ifndef DOMJUDGE
	std::ifstream in("datos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
#endif 


	while (resuelveCaso())
		;


	// Para restablecer entrada. Comentar para acepta el reto
#ifndef DOMJUDGE // para dejar todo como estaba al principio
	std::cin.rdbuf(cinbuf);
	system("PAUSE");
#endif

	return 0;
}