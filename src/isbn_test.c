/*
  isbn_test.c
*/

#include "isbn_test.h"

int main(int ac, char **av)
{
  char *isbn13s0 = "9784839909864";
  char *isbn10s0 = "4839909865";
  char *isbn13s1 = "978-4-8399-0986-4";
  char *isbn10s1 = "4-8399-0986-5";
  fprintf(stdout, "ISBN\n");
  fprintf(stdout, "ISBN13s0 %s %c\n", isbn13s0, isbn13(isbn13s0));
  fprintf(stdout, "ISBN10s0 %s %c\n", isbn10s0, isbn10(isbn10s0));
  fprintf(stdout, "ISBN13s1 %s %c\n", isbn13s1, isbn13(isbn13s1));
  fprintf(stdout, "ISBN10s1 %s %c\n", isbn10s1, isbn10(isbn10s1));
  return 0;
}
