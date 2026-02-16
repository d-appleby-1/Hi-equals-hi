#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE( "Strings are compared and return equal" ) {
    REQUIRE( strcmp_case_insensitive("String one","string two") == -1 );
    REQUIRE( strcmp_case_insensitive("String one","string one") == 0 );
    REQUIRE( strcmp_case_insensitive("String two","string one") == 1 );
}
TEST_CASE( "Compare function skips spaces") {
    REQUIRE( strcmp_case_insensitive("my cool string","mycoolstring", 1) == 0 );
    REQUIRE( strcmp_case_insensitive( "My Cool String","MyCoolString", 1) == 0);
    REQUIRE( strcmp_case_insensitive( "Another string", "My Cool String", 1) != 0);
}
