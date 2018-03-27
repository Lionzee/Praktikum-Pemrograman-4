#include <iostream>
#include "Segitiga.h"

void Segitiga::display(){
	cout<<"Luas = "<<hitungLuas(alas,tinggi)<<endl;
	cout<<"Keliling = "<<hitungKeliling(sisi);
}

double Segitiga::hitungLuas(double a,double t){
	return a * t / 2;
}	
double Segitiga::hitungKeliling(double _sisi){
	return _sisi * 3;
}
