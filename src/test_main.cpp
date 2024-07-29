#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "main.h"

TEST(Maintest, EcodeBase65) {
    std::array<unsigned char, 4> input = {0xAB, 0xCD, 0xEF, 0x12};
    auto base64 = base64_encode(input.data(), input.size());
    EXPECT_THAT(base64, ::testing::StrEq("q83vEg==")); 
}
