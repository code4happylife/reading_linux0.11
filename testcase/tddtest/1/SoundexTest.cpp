#include "gmock/gmock.h"
class Soundex {
	 int i =1;
};

TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) {
	Soundex soundex;
}
int main(int argc, char** argv) {
        testing::InitGoogleMock(&argc, argv);
        return RUN_ALL_TESTS();

}

