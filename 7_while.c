#include <stdio.h>

int main() {
  int i;
	
  while (i <= 10) { // i 10'a ulaştığında durdur
    printf("Bu kod %d kez tekrarlandı.\n", i);
    ++i;
  }

  printf("\n\n--\"Do\" ile:-------------------\n"); // burada "\" kaçış dizesidir
  i = 0; // "i" değişkenini sıfırlayalım
  do {
    printf("Bu kod %d kez tekrarlandı.\n", i);
    ++i;
  }
  while (i < 5); // i 5'den bir küçük sayıya ulaştığında durdur

  return 0;
}
