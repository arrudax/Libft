#include <criterion/criterion.h>

int	ft_isascii(int c);

TestSuite(suite_ft_isascii);

Test(suite_ft_isascii, test_ascii_int_0_NOT_ALPHA_ascii) {
	cr_assert_eq(ft_isascii(0), 1, "Check if 0 is recognized as a ascii.");
}

Test(suite_ft_isascii, test_ascii_char_0_is_ascii) {
	cr_assert_eq(ft_isascii('0'), 1, "Check if '0' is recognized as a ascii.");
}

Test(suite_ft_isascii, test_ascii_char_1_is_ascii ) {
	cr_assert_eq(ft_isascii('1'), 1, "Check if '1' is recognized as a ascii.");
}

Test(suite_ft_isascii, test_ascii_char_9_is_ascii ) {
	cr_assert_eq(ft_isascii('9'), 1, "Check if '9' is recognized as a ascii.");
}

Test(suite_ft_isascii, test_ascii_char_48_is_ascii ) {
	cr_assert_eq(ft_isascii(48), 1, "Check if 48 is recognized as a ascii.");
}

Test(suite_ft_isascii, test_ascii_char_57_is_ascii ) {
	cr_assert_eq(ft_isascii(57), 1, "Check if 57 is recognized as a ascii.");
}

Test(suite_ft_isascii, test_ascii_loop_char_is_ascii ) {
	char	c;

	c = '0';
	while (c <= '9')
	{
		cr_assert_eq(ft_isascii(c), 1, "Check if '%c' is recognized as a ascii.", c);
		c++;
	}
}

Test(suite_ft_isascii, test_ascii_loop_int_ascii_is_ascii ) {
	int	i;

	i = 48;
	while (i <= 57){
		cr_assert_eq(ft_isascii(i), 1, "Check if %c is recognized as a ascii.", i);
		i++;
	}
}

Test(suite_ft_isascii, test_uppercase_char_A_is_not_ascii) {
	cr_assert_eq(ft_isascii('a'), 1, "Check if 'a' is not recognized as a ascii.");
}

Test(suite_ft_isascii, test_symbol_underscore_is_not_ascii) {
	cr_assert_eq(ft_isascii('_'), 1, "Check if '_' is not recognized as a ascii.");
}

Test(suite_ft_isascii, test_especial_char_é_is_not_ascii) {
	cr_assert_eq(ft_isascii('0xE9'), 0, "Check if '0xE9' is not recognized as a ascii.");
}
