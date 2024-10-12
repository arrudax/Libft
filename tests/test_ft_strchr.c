#include <criterion/criterion.h>

void custom_print_str(const char *test_name, char *result, const char *expected);
char	*ft_strchr(const char *s, int c);

TestSuite(suite_ft_strchr);

Test(suite_ft_strchr, test_strchr_empty_str) {
    char *result = ft_strchr("", 'a'); // Testa com string vazia
    cr_assert_null(result, "Expected NULL for empty string.");
    custom_print_str("test_strchr_empty_str", result, NULL);
}

Test(suite_ft_strchr, test_strchr_found_char) {
    char *result = ft_strchr("amanda", 'm');
    cr_assert_str_eq(result, "manda", "Expected substring starting from 'm'.");
    custom_print_str("test_strchr_found_char", result, "manda");
}

Test(suite_ft_strchr, test_strchr_not_found_char) {
    char *result = ft_strchr("amanda", 'x');
    cr_assert_null(result, "Expected NULL for character not found.");
    custom_print_str("test_strchr_not_found_char", result, NULL);
}

Test(suite_ft_strchr, test_strchr_at_sign) {
    char *result = ft_strchr("amanda@", '@');
    cr_assert_str_eq(result, "@", "Expected substring starting from '@'.");
    custom_print_str("test_strchr_at_sign", result, "@");
}

Test(suite_ft_strchr, test_strchr_with_non_printable_char) {
    char *result = ft_strchr("Hello\x7FWorld", '\x7F'); 
    cr_assert_str_eq(result, "\x7FWorld", "Expected substring starting from non-printable character.");
    custom_print_str("test_strchr_with_non_printable_char", result, "\x7FWorld");
}
