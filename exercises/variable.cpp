#include <cstdio>

int main() {
    
    //type identifier = value;
   double price = 99.80;
   double tax = 0.08;

   //type identifier = value;

   double finalprice = price * (1 + tax);
   printf("The final price is %f.\n", finalprice);
   printf("The final price is %.2f.", finalprice);

    return 0;
}