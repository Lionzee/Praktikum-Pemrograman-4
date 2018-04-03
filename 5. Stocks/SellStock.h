#include<iostream>
using namespace std;

class Stock;
class Order;
class SellStock : public Order{
   private:
   Stock *abcStock;

   public:
   virtual ~SellStock(){
	   delete abcStock;
   }

   SellStock(Stock *abcStock);

   virtual void execute();
};
