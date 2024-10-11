#include <criterion/criterion.h>

int	ft_tolower(int c);

TestSuite(suite_ft_tolower);

Test(suite_ft_tolower, test_lowercase_a_remains_a) {
	cr_assert_eq(ft_tolower('a'), 'a', "Check that 'a' remains 'a' when converted to lowercase");
}

Test(suite_ft_tolower, test_uppercase_A_becames_a ) {
	cr_assert_eq(ft_tolower('A'), 'a', "Check that 'A' becomes 'a' when converted to lowercase");
}

Test(suite_ft_tolower, test_digit_1_remains_1) {
	cr_assert_eq(ft_tolower('1'), '1', "Check that '1' remains '1' when attempting to converted to lowercase");
}
