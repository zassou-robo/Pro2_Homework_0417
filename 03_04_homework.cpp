#include <iostream>
using namespace std;

int main(void)
{
  int a = 0;
  int b = 0;
  int c = 0;
  scanf("%d %d %d", &a, &b, &c);

  int used = b * 9 + c * 6;
  int remain = a - used;

  if (remain < 0)
  {
    remain = 0;
  }

  printf("%d\n", remain);

  return 0;
}