#include <criterion/criterion.h>
#include <stddef.h>

void custom_print(const char *test_name, int result, int expected);

size_t	ft_strlen(const char *s);

TestSuite(suite_ft_strlen);

Test(suite_ft_strlen, test_strlen_empty_str) {
    size_t result = ft_strlen("");
    cr_assert_eq(result, 0, "Expected length of empty string to be 0.");
    custom_print("test_strlen_empty_str", result, 0);
}

Test(suite_ft_strlen, test_strlen_size_6_is_printable) {
    size_t result = ft_strlen("amanda");
    cr_assert_eq(result, 6, "Expected length of 'amanda' to be 6.");
    custom_print("test_strlen_size_6_is_printable", result, 6);
}

Test(suite_ft_strlen, test_strlen_at_sign_is_printable) {
    size_t result = ft_strlen("amanda@");
    cr_assert_eq(result, 7, "Expected length of 'amanda@' to be 7.");
    custom_print("test_strlen_at_sign_is_printable", result, 7);
}

Test(suite_ft_strlen, test_strlen_with_non_printable_char) {
    size_t result = ft_strlen("Hello\x7FWorld"); 
    cr_assert_eq(result, 11, "Expected length of 'Hello\x7FWorld' to be 11.");
    custom_print("test_strlen_with_non_printable_char", result, 11);
}
