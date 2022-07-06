#include <stdio.h>

int main() {
  int saat = 20;
  if (saat <= 16) {
    printf("İyi günler.\n");
  } else {
    printf("İyi akşamlar.\n");
  }

  /*
   * a < b -> küçükse
   * a > b -> büyükse
   * a <= b -> eşit veya küçükse
   * a >= b -> eşit veya büyükse
   * a == b -> eşitse
   * a != b - eşit değilse
   */

  if (15 > 20) {
    printf("15, 20'den büyüktür.\n");
  } else if (15 == 20) {
    printf("15, 20 ile eşittir.\n");
  } else {
    printf("15, 20'den küçüktür.\n");
  }

  // Bu stringleri de karşılaştırmak için
  // de kullanılabilir.
  if ("alperen" == "alperen") {
    printf("alperen, alperen ile eşittir.\n");
    printf("O KADARINI DA BİLİN YANİ!\n");
  }

  /* 
   * bu aparat if-else komutlarını daha
   * kısa yazmaya yarar. javascript bilenler
   * için tanıdık gelmiş olabilir.
   * if-else'leri yazarken her iki türlü de
   * yazabilirsiniz. bunlar genellikle
   * void'lerde kullanılıyormuş.
   * henüz fonksiyonlara gelmediğimden
   * dolayı (şimdilik) bilmiyorum. :)
   */
  (15 < 18) ? printf("İyi günler.\n") : printf("İyi akşamlar.\n");

  return 0;
}
