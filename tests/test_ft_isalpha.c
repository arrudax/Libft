#include <criterion/criterion.h>

int	ft_isalpha(int c);

TestSuite(suite_ft_isalpha);

Test(suite_ft_isalpha, test_lowcase_a_is_alpha) {
	cr_assert_eq(ft_isalpha('a'), 1, "Check if 'a' is recognized as an alphabetic character.");
}

Test(suite_ft_isalpha, test_uppercase_A_is_alpha ) {
	cr_assert_eq(ft_isalpha('A'), 1, "Check if 'A' is recognized as an alphabetic character.");
}

Test(suite_ft_isalpha, test_digit_1_is_not_alpha) {
	cr_assert_eq(ft_isalpha('1'), 0, "Check if '1' is not recognized as an alphabetic character.");
}

Test(suite_ft_isalpha, test_symbol_underscore_is_not_alpha) {
	cr_assert_eq(ft_isalpha('_'), 0, "Check if '_' is not recognized as an alphabetic character.");
}
