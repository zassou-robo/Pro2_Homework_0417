#include <iostream>
using namespace std;
constexpr int APPLE_PRICE = 100;
constexpr int ORANGE_PRICE = 88;
constexpr int STRAWBERRY_PRICE = 398;

int apple_amount = 0;
int orange_amount = 0;
int strawberry_amount = 0;

int main()
{
  scanf("%d\n", &apple_amount);
  scanf("%d\n", &orange_amount);
  scanf("%d\n", &strawberry_amount);
  int all_price = apple_amount * APPLE_PRICE + orange_amount * ORANGE_PRICE + strawberry_amount * STRAWBERRY_PRICE;
  printf("%d", all_price);
}