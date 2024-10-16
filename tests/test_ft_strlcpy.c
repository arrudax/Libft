#include <criterion/criterion.h>

void custom_print(const char *test_name, int result, int expected);

size_t ft_strlcpy(char *dest, const char *src, size_t size);

TestSuite(suite_ft_strlcpy);

Test(suite_ft_strlcpy, test_strlcpy_case_copy_full) {
	char		*src = "Amanda";
	char		dest[7];
	char		expected_result = 6;
	size_t		result = ft_strlcpy(dest, src, 6);
    cr_assert_eq(result, expected_result, "my func: %zu, expected result: %d", result, expected_result);
    custom_print("test_strlcpy_case_sensitivity", result, expected_result);
}

Test(suite_ft_strlcpy, test_strlcpy_case_src_empty) {
	char		*src = "";
	char		dest[7];
	char		expected_result = 0;
	size_t		result = ft_strlcpy(dest, src, 6);
    cr_assert_eq(result, expected_result, "my func: %zu, expected result: %d", result, expected_result);
    custom_print("test_strlcpy_case_sensitivity", result, expected_result);
}

Test(suite_ft_strlcpy, test_strlcpy_case_subscribe_dest) {
	char		*src = "Ama";
	char		dest[7] = "marco1";
	char		expected_result = 3;
	size_t		result = ft_strlcpy(dest, src, 3);
    cr_assert_eq(result, expected_result, "my func: %zu, expected result: %d", result, expected_result);
    custom_print("test_strlcpy_case_sensitivity", result, expected_result);
}

