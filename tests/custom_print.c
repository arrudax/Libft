#include <stdio.h>
#include <string.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void custom_print_str(const char *test_name, char *result, const char *expected) {
    if (result == expected) {
        cr_log_info("%s: OK", test_name);
    } else {
        // Verificando se result e expected são NULL ou se são diferentes
        if (result == NULL || expected == NULL || strcmp(result, expected) != 0) {
            cr_log_error("%s: FAIL (expected \"%s\", got \"%s\")", test_name, expected, result);
        } else {
            cr_log_info("%s: OK", test_name);
        }
    }
}

void custom_print(const char *test_name, int result, int expected) {
    if (result == expected) {
        cr_log_info("%s: OK", test_name);
    } else {
        cr_log_error("%s: FAIL (expected %d, got %d)", test_name, expected, result);
    }
}
