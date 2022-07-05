#include <stdio.h>

int main() {
  /*
   * const bir değişkeni sabitleme
   * aparatıdır. bir değişken
   * const ile sabitlendiği vakit
   * onu değiştiremezsiniz.
   */

  // Bu değişken hep 10 olarak kalacaktır.
  const int my_num = 10;
  // error: assignment of read-only variable 'my_num'
  // my_num = 25;
  
  /*
   * ayrıca bu kod da çalışmayacaktır.
   * 1 | const int kalan_sure;
   * 2 | kalan_sure = 50; / hata !!!
   */

  /*
   * C kullanıcıları genellikle const'ları
   * (sabitleri) BÜYÜK_HARF ile tanımlarlar.
   * zorunlu değildir fakat bu artık gelenek
   * haline gelmiştir. bundan dolayı okunabilirlik
   * için önemlidir.
   *
   */
}
