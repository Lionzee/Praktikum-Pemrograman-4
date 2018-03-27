#include <iostream>
#include "Lingkaran.h"

using namespace std;

void Lingkaran::display(){
	cout<<endl;
	cout<<"Luas = "<<hitungLuas(jari)<<endl;
	cout<<"Keliling = "<<hitungKeliling(jari);
}
double Lingkaran::hitungLuas(double j){
	return j * j * 3.14;
}
double Lingkaran::hitungKeliling(double j){
	return j * 2 * 3.14;
}
