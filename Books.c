#include<stdio.h>
#include<string.h>
int main()
{
  char books[3][100], *ptr[3];
  printf("Enter names of 3 books:\n");
  for(int i=0; i<3;i++){
      gets(books[i]);
      ptr[i]=books[i];}
  printf("You entered these books:\n");
  for(int i=0; i<3;i++){
      printf("%s\n", ptr[i]);}
  return 0;
}
