#include "test.h"


int test_all_and();
int test_all_nop();
int test_all_ora();
int test_all_eor();

int main(int argc, char *argv[])
{
    test_all_and();
    test_all_nop();
    test_all_ora();
    test_all_eor();
    fprintf(stdout, "ALL TESTS PASSED\n");
}
