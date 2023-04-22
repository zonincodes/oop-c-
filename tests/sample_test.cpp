
#include <sample/sample.h>
#include <gtest/gtest.h>
#include <string>

using namespace std;
TEST(Sample, SampleTest)
{
    Sample sample{"Jane"};
    EXPECT_TRUE(sample.getName() == "Jane");
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}