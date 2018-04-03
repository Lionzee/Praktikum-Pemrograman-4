#include<string>

class Stock {

   private:
   std::wstring name = L"ABC";
   int quantity = 10;

   public:
   virtual void buy();
   virtual void sell();
};
