#include <iostream>
#include "Persegi.h"
using namespace std;

void Persegi::display(){
	cout << endl;
	cout << "Luas Persegi : " << hitungLuas(panjang,lebar)<<endl;
	cout << "Keliling Persegi : " << hitungKeliling(panjang,lebar)<<endl;
	cout << endl;
};

double Persegi :: hitungLuas(double p,double l)
{
	return p * l;
}

double Persegi :: hitungKeliling(double p,double l){
	return panjang + panjang + lebar + lebar;
}
