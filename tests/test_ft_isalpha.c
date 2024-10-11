#include <criterion/criterion.h>

void custom_print(const char *test_name, int result, int expected);

int	ft_isalpha(int c);

TestSuite(suite_ft_isalpha);

Test(suite_ft_isalpha, test_lowcase_a_is_alpha) {
    int result = ft_isalpha('a');
    cr_assert_eq(result, 1, "Check if 'a' is recognized as an alphabetic character.");
    custom_print("test_lowcase_a_is_alpha", result, 1);
}

Test(suite_ft_isalpha, test_uppercase_A_is_alpha) {
    int result = ft_isalpha('A');
    cr_assert_eq(result, 1, "Check if 'A' is recognized as an alphabetic character.");
    custom_print("test_uppercase_A_is_alpha", result, 1);
}

Test(suite_ft_isalpha, test_digit_1_is_not_alpha) {
    int result = ft_isalpha('1');
    cr_assert_eq(result, 0, "Check if '1' is not recognized as an alphabetic character.");
    custom_print("test_digit_1_is_not_alpha", result, 0);
}

Test(suite_ft_isalpha, test_symbol_underscore_is_not_alpha) {
    int result = ft_isalpha('_');
    cr_assert_eq(result, 0, "Check if '_' is not recognized as an alphabetic character.");
    custom_print("test_symbol_underscore_is_not_alpha", result, 0);
}
