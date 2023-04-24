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



int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}