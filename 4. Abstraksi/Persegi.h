#include <iostream>
#include "Bangun.h"
using namespace std;

class Persegi: public Bangun{		
	private:
		double panjang,lebar;
	public:
	//Constructor
	Persegi(double p,double l){
		panjang = p;
		lebar = l;
	};
	
	//Function
	 double hitungLuas(double p,double l);
	 double hitungKeliling(double p,double l);
	 void display();
	
};


