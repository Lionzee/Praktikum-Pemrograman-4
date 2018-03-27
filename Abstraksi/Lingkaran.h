#include <iostream>
#include "Bangun.h"
using namespace std;

class Lingkaran:public Bangun{
	private:
		double jari; 
	public:
		Lingkaran(double j){
			jari = j;
		}
		void display();
		double hitungLuas(double j);
		double hitungKeliling(double j);
};
