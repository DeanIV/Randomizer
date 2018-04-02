#include <ctime>
#include <cstdlib>

class Randomizer{
  public:
    unsigned int minimum;
    unsigned int sr;
    void setSrand(void);
    unsigned int randomBetween(unsigned int, unsigned int);
};

void Randomizer::setSrand(){
  srand(time(0));
}

unsigned int Randomizer::randomBetween(unsigned int minimum, unsigned int maximum){
  int r;
  r=(rand() % maximum) + minimum;
  if(minimum >= maximum)
    return minimum;
  else
    return r;
}
