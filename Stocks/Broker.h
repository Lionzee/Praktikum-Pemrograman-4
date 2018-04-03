#include<vector>
#include<iostream>
using namespace std;

class Order;

   class Broker{
   private:
   std::vector<Order*> orderList;

   public:
   virtual void takeOrder(Order *order);

   virtual void placeOrders();
   };
