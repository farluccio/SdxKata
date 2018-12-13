#include "gmock/gmock.h"

class Soundex
{
};


TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{
    /// Arrange
   Soundex soundex;
   /// Act
   auto encode = soundex encode("A");

   /// Assert
   ASSERT_THAT(encode, testing::EQ("A"));
}

