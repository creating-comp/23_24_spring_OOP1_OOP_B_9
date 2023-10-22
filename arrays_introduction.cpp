#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, c, d, arr[1000], b[1000];
    scanf("%d", &n);

   for (c = 0; c < n ; c++)
      scanf("%d", &arr[c]);

   for (c = n - 1, d = 0; c >= 0; c--, d++)
      b[d] = arr[c];

   for (c = 0; c < n; c++)
      arr[c] = b[c];

   for (c = 0; c < n; c++)
      printf("%d ", arr[c]);
   
  return 0;
}
