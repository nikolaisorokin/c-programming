#include <stdlib.h>
#include "/opt/homebrew/opt/check/include/check.h"
#include "square.h"

START_TEST(test_square_create)
{
    struct Square square;

    struct Coordinate point_a = {25, 43};
    struct Coordinate point_b = {3, 11};

    Init(&square, &point_a, &point_b);

    ck_assert_int_eq(Area(&square), 155);
    ck_assert_int_eq(Perimeter(&square), 1508);
}
END_TEST

Suite * square_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Square");

    /* Core test case */
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_square_create);
    suite_add_tcase(s, tc_core);

    return s;
}

int main()
{
    return 0;
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = square_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

