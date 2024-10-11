#include <criterion/criterion.h>
#include <criterion/redirect.h>

void custom_print(const char *test_name, int result, int expected)
{
    if (result == expected) {
        cr_log_info("%s: OK", test_name);
    } else {
        cr_log_error("%s: FAIL", test_name);
    }
}
