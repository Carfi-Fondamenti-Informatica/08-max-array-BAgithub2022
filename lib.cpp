#include "lib.h"
float findmax(float a[],int n){
 float maximum=a[0];
  for (int i = 1; i < n; ++i) {
    if(a[i]>maximum){
      maximum=a[i];
      }
    }
  return maximum;
  }
