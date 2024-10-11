#include <criterion/criterion.h>

int	ft_isprint(int c);

TestSuite(suite_ft_isprint);

Test(suite_ft_isprint, test_print_space_is_printable) {
	cr_assert_eq(ft_isprint(' '), 1, "Check if '~' is recognized as a ascii.");
}

Test(suite_ft_isprint, test_print_tilde_is_printable) {
	cr_assert_eq(ft_isprint('~'), 1, "Check if '~' is recognized as a ascii.");
}

Test(suite_ft_isprint, test_print_at_sign_is_printable ) {
	cr_assert_eq(ft_isprint('@'), 1, "Check if '@' is recognized as a ascii.");
}

Test(suite_ft_isprint, test_print_del_is_not_printable ) {
	cr_assert_eq(ft_isprint(127), 0, "Check if DEL is recognized as a ascii.");
}

Test(suite_ft_print, test_ascii_loop_not_printable_ascii) {
	int	c;

	c = 0;
	while (c <= 31)
	{
		cr_assert_eq(ft_isprint(c), 0, "Check if ASCII code '%d' is recognized as not printable.", c);
		c++;
	}
}
