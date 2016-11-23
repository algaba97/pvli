#include "horas.h"
#include <iostream>
#include <istream>
using namespace std;



horas::horas(int h,int m,int s)
{

}


horas::~horas()
{
}
int horas::getHoras(){
	return _horas;
}
int horas::getMinutos(){
	return _minutos;
}
int horas::getSegundos(){
	return _segundos;
}
void horas::setHoras(int h){
	_horas = h;
}

void horas::setMinutos(int m){
	_minutos = m;
}

void horas::setSegundos(int s){
	_segundos = s;
}
ostream& operator << (ostream & out, horas& h) {
	out << h.getHoras() << ":" << h.getMinutos << ":" << h.getSegundos;
	return out;
}
istream& operator >> (istream & in, horas& h) {
	char aux;
	in >> h._horas >>aux>> h._minutos >>aux>> h._segundos;
	return in;
}