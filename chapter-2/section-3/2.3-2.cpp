#include <array>
#include <bits/stdc++.h>
#include <cmath>

#define array1Size 20
#define array2Size 30
#define arraySizeSum 50

int main() {

  std::array<int, array1Size> sortedArray1 = {1,  3,  5,  7,  9,  11, 13,
                                              15, 17, 19, 21, 23, 25, 27,
                                              29, 31, 33, 35, 37, 39};
  std::array<int, array2Size> sortedArray2 = {
      0,  2,  4,  6,  8,  10, 12, 14, 16, 18, 20, 22, 24, 26, 28,
      30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58};
  std::array<int, arraySizeSum> array;

  int sortedArray1CurrentIndex = 0;
  int sortedArray2CurrentIndex = 0;

  for (int i = 0; i < arraySizeSum; i++) {
    if (sortedArray1CurrentIndex < array1Size &&
        sortedArray2CurrentIndex < array2Size) {
      if (sortedArray1[sortedArray1CurrentIndex] <
          sortedArray2[sortedArray2CurrentIndex]) {
        array[i] = sortedArray1[sortedArray1CurrentIndex];

        sortedArray1CurrentIndex++;
      } else {
        array[i] = sortedArray2[sortedArray2CurrentIndex];

        sortedArray2CurrentIndex++;
      }
    } else {
      if (sortedArray1CurrentIndex < array1Size) {
        array[i] = sortedArray1[sortedArray1CurrentIndex];

        sortedArray1CurrentIndex++;
      } else {
        array[i] = sortedArray2[sortedArray2CurrentIndex];

        sortedArray2CurrentIndex++;
      }
    }
  }

  for (int i = 0; i < arraySizeSum; i++) {
    std::cout << array[i] << ", ";
  }
}
