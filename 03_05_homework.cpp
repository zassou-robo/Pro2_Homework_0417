#include <iostream>
using namespace std;

int main(void)
{
  double base = 0.0;
  double height = 0.0;
  double area = 0.0;
  scanf("%lf %lf ", &base, &height);
  area = base * height / 2.0;

  printf("%lf\n", area);
}