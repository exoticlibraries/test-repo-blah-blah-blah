/*!gcc -ansi -pedantic-errors {0} -IC -I../include/ -o out; ./out */

/* this test shares data between tests */

#include <exotic/cester.h>

CESTER_BEFORE_ALL(test_instance,
    test_instance->arg = (void*) "Hello World";
)

//CESTER_BEFORE_EACH(test_instance, name, index,
//    printf("Isolated Str %s\n", (char*)test_instance->arg);
//    printf("Isolated %d\n", superTestInstance.isolate_tests);
//)

CESTER_TEST(check_number_equals, test_instance,
    //cester_assert_true(cester_string_equals((char*)test_instance->arg, "Hello World"));
    //cester_assert_not_null(test_instance->arg);
    //cester_assert_equal(test_instance->arg, test_instance->arg);
    //cester_assert_not_equal(NULL, test_instance->arg);
)
    
CESTER_TEST(test_one, inst,
    //cester_assert_equal(NULL, ((void*)0));    
)

CESTER_OPTIONS(
    CESTER_VERBOSE();
    CESTER_MINIMAL();
    CESTER_NO_ISOLATION();
)
