#include <iostream>
using namespace std;
constexpr int AMOUNT_NUMBERS = 3;

void calc_average(int32_t input[])
{
  int32_t all_sum = 0;
  for (int i = 0; i < AMOUNT_NUMBERS; i++)
  {
    all_sum += input[i];
  }
  double average = (double)all_sum / AMOUNT_NUMBERS;
  printf("%lf", average);
}

int main(void)
{
  int32_t input_numbers[AMOUNT_NUMBERS] = {0};
  // scanf("%d,%d,%d",&input_numbers[0],&input_numbers[1],&input_numbers[2]);
  for (int i = 0; i < 3; i++)
  {
    scanf("%d", &input_numbers[i]);
  }
  calc_average(input_numbers);
}