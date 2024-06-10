#include "../unity/src/unity.h"
#include "../unity/src/unity.c"

int sum(int a, int b) {
    return a + b;
}

void setUp(void) {
    // set stuff up here
}
void tearDown(void) {
    // clean stuff up here
}

void test_sum(void) {
    TEST_ASSERT_EQUAL_INT(3, sum(1, 2));
}

int main(int argc, char *argv[]) {
    UNITY_BEGIN();
    RUN_TEST(test_sum);
    UNITY_END();

    return 0;
}
