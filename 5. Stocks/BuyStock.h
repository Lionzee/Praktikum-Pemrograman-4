#include<iostream>
using namespace std;

class Stock;
class Order;

class BuyStock : public Order{
   private:
   Stock *notStock;

   public:
   virtual ~BuyStock()
   {
	   delete notStock;
   }

   BuyStock(Stock *notStock);

   virtual void execute();
};
