#include <iostream>
using namespace std;
long long modular(long long base, long long exp, long long mod,long long c) {
   long long res = 1;
   
   while (exp > 0) {
      if (exp % 2 == 1)
         res= (res * base) % mod;
      exp = exp >> 1;
      base = (base * base) % mod;
   }
   if (c==res){
      cout<<"test case passed \n";
   }
   else{cout<<"test case failed\n";}
   
}


int main() {
   modular(131999920,234979,991540365,682771105);
   modular(23423422,234234,23423434,85834389);
   
   return 0;
}