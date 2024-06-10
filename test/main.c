#include <unity.h>
#include <sum_module.h>

void setUp(void) {
    // set stuff up here
}
void tearDown(void) {
    // clean stuff up here
}

void test_sum(void) {
    TEST_ASSERT_EQUAL(4, sum(2, 3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum);
    UNITY_END();

    return 0;
}