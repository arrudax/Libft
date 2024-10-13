#include <criterion/criterion.h>

void custom_print(const char *test_name, int result, int expected);

int	ft_strncmp(const char *str1, const char *str2, size_t n);

TestSuite(suite_ft_strncmp);

Test(suite_ft_strncmp, test_strncmp_case_sensitivity) {
	int expected_result = -32;
	int result = ft_strncmp("Amanda", "amanda", 6);
    cr_assert_eq(result, expected_result, "my func: %d, expected result: %d", result, expected_result);
    custom_print("test_strncmp_case_sensitivity", result, expected_result);
}

Test(suite_ft_strncmp, test_strncmp_special_characters) {
	int expected_result = 31;
	int result = ft_strncmp("@amanda", "!amanda", 3);
    cr_assert_eq(result, expected_result, "my func: %d, expected result: %d", result, expected_result);
    custom_print("test_strncmp_special_characters", result, expected_result);
}

Test(suite_ft_strncmp, test_strncmp_empty_vs_nonempty) {
	int expected_result = -97;
	int result = ft_strncmp("", "amanda", 3);
    cr_assert_eq(result, expected_result, "my func: %d, expected result: %d", result, expected_result);
    custom_print("test_strncmp_empty_vs_nonempty", result, expected_result);
}

Test(suite_ft_strncmp, test_strncmp_null_termination) {
	int expected_result = 0;
	int result = ft_strncmp("ama\0nda", "ama\0nda", 6);
    cr_assert_eq(result, expected_result, "my func: %d, expected result: %d", result, expected_result);
    custom_print("test_strncmp_null_termination", result, expected_result);
}

Test(suite_ft_strncmp, test_strncmp_prefix) {
    int expected_result = 0;
    int result = ft_strncmp("amanda", "ama", 3);
    cr_assert_eq(result, expected_result, "my func: %d, expected result: %d", result, expected_result);
    custom_print("test_strncmp_prefix", result, expected_result);
}
