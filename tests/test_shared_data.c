/*!gcc -ansi -pedantic-errors {0} -IC -I../include/ -o out; ./out */

/* this test shares data between tests */

#include <exotic/cester.h>

CESTER_BODY(
typedef struct param_arg {
    char *value;
} Param;    
    
char *value = "Hello World";
)

CESTER_BEFORE_ALL(test_instance,
                 
)

CESTER_TEST(check_number_equals, test_instance,
    cester_assert_true(cester_string_equals(value, "Hello World"));
    cester_assert_not_null(value);
    cester_assert_equal(value, value);
    cester_assert_not_equal(NULL, value);
            printf("The Data 1 %s\n", value);
)

CESTER_TEST(validate_shared_arg, test_instance,
            //printf("The Data %s\n", test_instance->arg);
            //printf("The Data %p %s %d\n", test_instance->arg, test_instance->arg, cester_string_equals((char*)test_instance->arg, "Hello World"));
            //printf("The Data %p %s %d\n", test_instance->arg, test_instance->arg, cester_string_equals((char*)test_instance->arg, "World"));
            //printf("The Data %p %s %d\n", test_instance->arg, test_instance->arg, cester_string_equals((char*)test_instance->arg, "Hello"));
    //cester_assert_true(cester_string_equals((char*)test_instance->arg, "Hello World"));
    //cester_assert_false(cester_string_equals((char*)test_instance->arg, "World"));
    //cester_assert_false(cester_string_equals((char*)test_instance->arg, "Hello"));
)

CESTER_OPTIONS(
    CESTER_VERBOSE();
    CESTER_MINIMAL();
    CESTER_NO_ISOLATION();
)
