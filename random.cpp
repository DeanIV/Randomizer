#include <iostream>
#include "random.h"
using namespace std;

int main()
{
   Randomizer rand;
   rand.setSrand();
   int rr = rand.randomBetween(1,10);
   cout<<rr<<endl;
   rr = rand.randomBetween(5,100);
   cout<<rr<<endl;
   return 0;
}
