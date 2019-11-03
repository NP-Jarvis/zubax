#include <iostream> 
using namespace std; 
 

template <typename T > 
T arithmetic(T x , T y) 
{ 
   return x+y; 
} 

int main(){
    cout<<arithmetic<long long>(2265675786585,27656785682);
     
}