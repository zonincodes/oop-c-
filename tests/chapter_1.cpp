#include <gtest/gtest.h>
#include <sstream>

using namespace std;
TEST(PrimeNumbers, Arithmetic)
{
    string numbers("6 4");
    istringstream ss{ numbers };
    int x, y;
    ss >> x;
    ss >> y;

    EXPECT_EQ((x%y), 2);
}

TEST(PrimeNumbers, Conditionals)
{
    string numbers{"4 2"};
    istringstream ss{numbers};

    int number, divisor;
    bool is_a_divisor;
    ss >> number;
    ss >> divisor;

    number / divisor ? is_a_divisor= true : is_a_divisor = false;
    
    EXPECT_TRUE(is_a_divisor);

}



int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}