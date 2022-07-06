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
    /*
     * Şimdi yukarıdaki satırı gördüğünüzde
     * aklınıza şöyle bir soru gelmiş olabilir.
     * 14 | ...
     * 15 | ++i;
     *    |
     * "Bunun yerine i++ kullanamaz mıydık?"
     *
     * Evet, kullanabilirdik. Kodumuz sıkıntısız
     * bir şekilde de çalışırdı.
     *
     * Ancak şunu bilmekte fayda var. i++ ile
     * ++i farklı fonksiyonlardır.
     *
     * Aralarındaki farkı şöyle izah edeyim;
     * Şu iki kod bloğunu inceleyin;
     * 
     * Örnek 1:
     * 1 | int a = 1;
     * 2 | int b = ++a;
     * 3 | printf("%d", a);
     * 4 | printf("%d", b);
     * -- çıktı ----------
     * 2
     * 2
     *
     * Örnek 2:
     * 1 | int a = 1;
     * 2 | int b = a++;
     * 3 | printf("%d", a);
     * 4 | printf("%d", b);
     * -- çıktı ----------
     * 1
     * 2
     *
     * Yani değişkenin başına ++ koymak
     * değişkenin değerini değiştirirken
     * sonuna koymak değişkeni değiştirmez.
     *
     * Bu yüzden döngülerde bu şekilde
     * kullanmak doğrudur.
     */
  }
  while (i < 5); // i 5'den bir küçük sayıya ulaştığında durdur

  return 0;
}
