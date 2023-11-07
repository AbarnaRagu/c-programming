ff
Try hands-on C Programming with Programiz PRO! Claim Discount Now

Programiz

Search...
Programiz PRO


C Program to Concatenate Two Strings
To understand this example, you should have the knowledge of the following C programming topics:

C Arrays
C Programming Strings
C for Loop
As you know, the best way to concatenate two strings in C programming is by using the strcat() function. However, in this example, we will concatenate two strings manually.

Concatenate Two Strings Without Using strcat()
#include <stdio.h>
int main() {
  char s1[100] = "programming ", s2[] = "is awesome";
  int length, j;

  // store length of s1 in the length variable
  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }

  // concatenate s2 to s1
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }

  // terminating the s1 string
  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}
