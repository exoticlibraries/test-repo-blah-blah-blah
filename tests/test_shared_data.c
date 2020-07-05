/*!gcc -ansi -pedantic-errors {0} -IC -I../include/ -o out; ./out */

/* this test shares data between tests */

#include <exotic/cester.h>

CESTER_BODY(
typedef struct param_arg {
    char *value;
} Param;    
    
    Param* param;
)

CESTER_BEFORE_ALL(test_instance,
                 param  = (Param*) malloc(sizeof(Param));
                  param->value = (char *) "Hello World";
    test_instance->arg = param;
)

CESTER_TEST(check_number_equals, test_instance,
    cester_assert_true(cester_string_equals(param->value, "Hello World"));
    cester_assert_not_null(param->value);
    cester_assert_equal(param->value, param->value);
    cester_assert_not_equal(NULL, param->value);
            printf("The Data 1 %s\n", param->value);
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
