#include <iostream>
#include "Bangun.h"
using namespace std;

class Segitiga:public Bangun{
	private:
		double alas;
		double tinggi;
		double sisi; 
	public:
		Segitiga(double a, double t, double s){
			alas = a;
			tinggi = t;
			sisi = s;
		}
		void display();
		double hitungLuas(double a, double t);
		double hitungKeliling(double s);
};
