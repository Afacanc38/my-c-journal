#include <stdio.h>

int main() {
  // sayı
  int my_num = 15;

  // önce tanımlanıp sonra değer atanabilir
  int my_num2;
  my_num2 = 10;

  my_num = 20; // my_num değişkeni artık 15 değil
               // 20.
  /*
   * DİKKAT!!!
   * C'de değişkenleri diğer dillerde 
   * olduğu gibi alıp yazdıramazsınız.
   *
   * Bu kod çalışmayacaktır.
   * 1 | int my_num = 15;
   * 2 | printf(my_num); // çalışmaycak!
   *   |
   */

  printf("%d\n\n", my_num);
  /*
   * int = %d
   * float = %f
   * char = %c
   * string = %s
   *
   * Bu arada karakterler tek tırnak,
   * karakter dizileri ise çift tırnak ile
   * atanır.
   */
  int my_num3 = 60;
  float my_float = 14.5;
  char my_char = 'l';
  char my_string[] = "merhaba dünya"; // evet, bu string

  printf("my_num3 değeri: %d\n", my_num3);
  printf("my_float değeri: %f\n", my_float);
  printf("my_char değeri: %c\n", my_char);
  printf("my_string[] değeri: %s\n", my_string);

  return 0;
}
