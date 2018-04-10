#include"SellStock.h"
#include"Stock.h"
#include<iostream>
using namespace std;

SellStock::SellStock(Stock *abcStock){
   this->abcStock = abcStock;
}

void SellStock::execute(){
   abcStock->sell();
}
