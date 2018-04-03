#include"Stock.h"
#include<iostream>

using namespace std;

void Stock::buy(){
   std::wcout << L"Stock [ Name: " << name << L", Quantity: " << quantity << L" ] bought" << std::endl;
}

void Stock::sell(){
   std::wcout << L"Stock [ Name: " << name << L", Quantity: " << quantity << L" ] sold" << std::endl;
}
