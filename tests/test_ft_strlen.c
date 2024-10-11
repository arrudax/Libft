#include <criterion/criterion.h>

int	ft_strlen(int c);

TestSuite(suite_ft_strlen);

Test(suite_ft_strlen, test_strlen_space_is_printable) {
	cr_assert_eq(ft_strlen(' '), 1, "Check if '~' is recognized as a ascii.");
}

Test(suite_ft_strlen, test_strlen_tilde_is_printable) {
	cr_assert_eq(ft_strlen('~'), 1, "Check if '~' is recognized as a ascii.");
}

Test(suite_ft_strlen, test_strlen_at_sign_is_printable ) {
	cr_assert_eq(ft_strlen('@'), 1, "Check if '@' is recognized as a ascii.");
}

Test(suite_ft_strlen, test_strlen_del_is_not_printable ) {
	cr_assert_eq(ft_strlen(127), 0, "Check if DEL is recognized as a ascii.");
}

Test(suite_ft_strlen, test_ascii_loop_not_printable_ascii) {
	int	c;

	c = 0;
	while (c <= 31)
	{
		cr_assert_eq(ft_strlen(c), 0, "Check if ASCII code '%d' is recognized as not strlenable.", c);
		c++;
	}
}
