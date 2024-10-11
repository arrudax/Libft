#include <criterion/criterion.h>

int	ft_isdigit(int c);

TestSuite(suite_ft_isdigit);

Test(suite_ft_isdigit, test_digit_int_0_NOT_ALPHA_digit) {
	cr_assert_eq(ft_isdigit(0), 0, "Check if 0 is recognized as a digit.");
}

Test(suite_ft_isdigit, test_digit_char_0_is_digit) {
	cr_assert_eq(ft_isdigit('0'), 1, "Check if '0' is recognized as a digit.");
}

Test(suite_ft_isdigit, test_digit_char_1_is_digit ) {
	cr_assert_eq(ft_isdigit('1'), 1, "Check if '1' is recognized as a digit.");
}

Test(suite_ft_isdigit, test_digit_char_9_is_digit ) {
	cr_assert_eq(ft_isdigit('9'), 1, "Check if '9' is recognized as a digit.");
}

Test(suite_ft_isdigit, test_digit_char_48_is_digit ) {
	cr_assert_eq(ft_isdigit(48), 1, "Check if 48 is recognized as a digit.");
}

Test(suite_ft_isdigit, test_digit_char_57_is_digit ) {
	cr_assert_eq(ft_isdigit(57), 1, "Check if 57 is recognized as a digit.");
}

Test(suite_ft_isdigit, test_digit_loop_char_is_digit ) {
	char	c;

	c = '0';
	while (c <= '9')
	{
		cr_assert_eq(ft_isdigit(c), 1, "Check if '%c' is recognized as a digit.", c);
		c++;
	}
}

Test(suite_ft_isdigit, test_digit_loop_int_ascii_is_digit ) {
	int	i;

	i = 48;
	while (i <= 57){
		cr_assert_eq(ft_isdigit(i), 1, "Check if %c is recognized as a digit.", i);
		i++;
	}
}

Test(suite_ft_isdigit, test_uppercase_char_A_is_not_digit) {
	cr_assert_eq(ft_isdigit('a'), 0, "Check if 'a' is not recognized as a digit.");
}

Test(suite_ft_isdigit, test_symbol_underscore_is_not_digit) {
	cr_assert_eq(ft_isdigit('_'), 0, "Check if '_' is not recognized as a digit.");
}
