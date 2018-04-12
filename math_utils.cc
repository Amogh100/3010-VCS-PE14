#include "math_utils.h"


bool Math::IsSquare(int num)
{
    int num_check = sqrt(num);
    return num % num_check == 0;
}

int Math::GetDigit(int num, int place)
{
    const char* char_num = std::to_string(num).c_str();

    unsigned int num_of_digits = num >= 0 ? log10(num)+1 : 0;
    unsigned int num_of_place = place > 0 ? log10(place)+1 : 0;

    if(num_of_digits < num_of_place){throw std::invalid_argument("Place must be larger than integer value");}
    int index_of_num = num_of_digits - num_of_place;
    return char_num[index_of_num] - '0';
}

bool Math::EqualParity(int x, int y)
{
    int parity_x = x % 2;
    int parity_y = y % 2;

    return parity_x == parity_y;
}

bool Math::EqualParity(std::vector<int> nums)
{
    int total_parity = 0;
    int number_of_checks = nums.size() - 1;
    for(unsigned int i = 0; i < nums.size()-1; i++)
    {
        total_parity += EqualParity(nums[i],nums[i+1]);
    }

    return total_parity == number_of_checks;
}


/*
Calulates x for a given a, b, and c, then returns it
*/
double Math::solveQuadratic(int a, int b, int c) {
    double x1 = (-1 * b + sqrt(b * b - 4 * a * c) / 2 * a * c);
    // to do plus or minus
    double x2 = (-1 * b - sqrt(b * b - 4 * a * c) / 2 * a * c);
    return x1;
}
