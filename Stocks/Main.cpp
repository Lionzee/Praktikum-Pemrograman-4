#include"Stock.h"
#include"BuyStock.h"
#include"SellStock.h"
#include"Broker.h"
#include<iostream>
using namespace std;

class CommandPatternDemo{
   static void main(std::vector<std::wstring> &args);
};

class Order;

void CommandPatternDemo::main(std::vector<std::wstring> &args){
   Stock *notStock = new Stock();

   BuyStock *buyStockOrder = new BuyStock(notStock);
   SellStock *sellStockOrder = new SellStock(notStock);

   Broker *broker = new Broker();
   broker->takeOrder(buyStockOrder);
   broker->takeOrder(sellStockOrder);

   broker->placeOrders();
}
