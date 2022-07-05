#include <stdio.h>

int main() {
  int my_num = 100 + 84;
  printf("my_num'un değeri: %d\n", my_num);

  int topla1 = 75;
  int topla2 = 25;
  int sonuc = topla1 + topla2;

  printf("sonuc'un değeri: %d\n", sonuc);

  /*
   * + -> ekleme yapar
   * - -> çıkarma yapar
   * * -> çarpar
   * / -> böler
   * % -> bölme işleminin kalanını verir
   * ++ -> 1 artırır
   * -- -> 1 çıkarır
   */

  int x = 64;
  printf("değiştirmeden önce x: %d\n", x);
  x += 5; // x = x + 5;
  printf("değiştirdikten sonra x: %d\n", x);

  printf("%d %d'dan büyüktür: %d\n", 8, 6, 8 > 6);
  printf("not: c'de 1 boolda true ile eş değerdir.\n");

  return 0;
}
