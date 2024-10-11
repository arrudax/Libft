#include <criterion/criterion.h>

int	ft_toupper(int c);

TestSuite(suite_ft_toupper);

Test(suite_ft_toupper, test_lowcase_a_is_alpha) {
	cr_assert_eq(ft_toupper('a'), 'A', "Check that 'a' becomes 'A' when converted to uppercase");
}

Test(suite_ft_toupper, test_uppercase_A_is_alpha ) {
	cr_assert_eq(ft_toupper('A'), 'A', "Check that 'A' becomes 'A' when converted to uppercase");
}

Test(suite_ft_toupper, test_digit_1_remains_1) {
	cr_assert_eq(ft_toupper('1'), '1', "Check that '1' remains '1' when attempting to convert to uppercase");
}

