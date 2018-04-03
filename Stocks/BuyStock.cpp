#include"BuyStock.h"
#include"Stock.h"
#include<iostream>
using namespace std;

BuyStock::BuyStock(Stock *abcStock){
   this->abcStock = abcStock;
}

void BuyStock::execute(){
   abcStock->buy();
}
