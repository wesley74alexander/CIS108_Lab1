#include <iostream>
using namespace std;
int main()
{
  int sum = 0, prod = 1;
  for(int num = 2; num < 1000; num++){
    bool prime = true;
    for(int test = 2; test < num / 2; test++){
      if(num % test == 0){
        prime = false;
        break;
      }
      else if(prime == true){
        cout << num;
        sum += num;
        prod *= num;
    }
    }
  }
  cout << "the sum of all primes from 1-1000 is " << sum << " the product of all primes from 0-1000 is " << prod << endl;
  return 0;
}
