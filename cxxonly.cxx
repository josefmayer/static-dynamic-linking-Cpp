#include "libcxx1.h"
#include "libcxx2.h"
#include <stdio.h>

#ifdef _MSC_VER
extern int testCPP;
#endif

#include <stdio.h>

int main()
{

#ifdef _MSC_VER
  testCPP = 1;
#endif
  if (LibCxx1Class::Method() != 2.0) {
    printf("Problem with libcxx1\n");
    return 1;
  }
  else {
	  printf("libcxx1 statically linked lib\n");
  }

  if (LibCxx2Class::Method() != 1.0) {
    printf("Problem with libcxx2\n");
    return 1;
  }
  else {
	  printf("libcxx1 dynamically linked lib\n");
  }
  
  return 0;
}
