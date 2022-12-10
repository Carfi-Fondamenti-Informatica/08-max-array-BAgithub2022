#include <iostream>
#include "lib.h"

int main(){
  int n=0;
  std::cin>>n;
  float a[n];
  for (int i = 0; i < n; ++i) {
    std::cin>>a[i];
    }
  float maximum=findmax(a,n);
  std::cout<<maximum<<std::endl;
  return 0;
}
