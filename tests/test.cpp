/**
 *     == C++ Test ===
 * Created by Kevin Traini
 *      Under GPL-3.0
 * -----------------------
 */
#include "test.hpp"

#include <vector>

using namespace std;
using namespace test;

void construct_test(Test &test) {
    test.describe("Asserts", []() {
        it_pass_fail("assert_equal", []() {
            assert_equal(1, 1)

            assert_equal(1.5f, 1.5f)

            assert_equal('a', 'a')

            assert_equal(string("Hello"), string("Hello"))

            assert_equal(true, true)

            assert_equal(false, false)

            return PASS;
        })

        it_pass_fail("assert_not_equal", []() {
            assert_not_equal(1, 2)

            assert_not_equal(1.5f, 2.5f)

            assert_not_equal('a', 'b')

            assert_not_equal(string("Hello"), string("World"))

            assert_not_equal(true, false)

            assert_not_equal(false, true)

            return PASS;
        })

        it_pass_fail("assert_less", []() {
            assert_less(1, 2)

            assert_less(1.5f, 2.5f)

            assert_less('a', 'b')

            assert_less(string("Hello"), string("World"))

            return PASS;
        })

        it_pass_fail("assert_great", []() {
            assert_great(2, 1)

            assert_great(2.5f, 1.5f)

            assert_great('b', 'a')

            assert_great(string("World"), string("Hello"))

            return PASS;
        })

        it_pass_fail("assert_less_equal", []() {
            assert_less_equal(1, 2)
            assert_less_equal(1, 1)

            assert_less_equal(1.5f, 2.5f)
            assert_less_equal(1.5f, 1.5f)

            assert_less_equal('a', 'b')
            assert_less_equal('a', 'a')

            assert_less_equal(string("Hello"), string("World"))
            assert_less_equal(string("Hello"), string("Hello"))

            return PASS;
        })

        it_pass_fail("assert_great_equal", []() {
            assert_great_equal(2, 1)
            assert_great_equal(2, 2)

            assert_great_equal(2.5f, 1.5f)
            assert_great_equal(2.5f, 2.5f)

            assert_great_equal('b', 'a')
            assert_great_equal('b', 'b')

            assert_great_equal(string("World"), string("Hello"))
            assert_great_equal(string("World"), string("World"))

            return PASS;
        })

        it_pass_fail("assert_true", []() {
            assert_true(true)

            assert_true(1 == 1)

            return PASS;
        })

        it_pass_fail("assert_false", []() {
            assert_false(false)

            assert_false(1 == 2)

            return PASS;
        })

        it_pass_fail("assert_empty", []() {
            assert_empty(string(""))

            assert_empty(vector<int>())

            return PASS;
        })

        it_pass_fail("assert_not_empty", []() {
            assert_not_empty(string("Hello"))

            assert_not_empty(vector<int>({1, 2, 3}))

            return PASS;
        })

        return PASS;
    });

    test.describe("Shoulds", []() {
        it_pass_fail("should_equal", []() {
            should_equal(1, 1)

            should_equal(1.5f, 1.5f)

            should_equal('a', 'a')

            should_equal(string("Hello"), string("Hello"))

            should_equal(true, true)

            should_equal(false, false)

            return PASS;
        })

        it_pass_fail("should_not_equal", []() {
            should_not_equal(1, 2)

            should_not_equal(1.5f, 2.5f)

            should_not_equal('a', 'b')

            should_not_equal(string("Hello"), string("World"))

            should_not_equal(true, false)

            should_not_equal(false, true)

            return PASS;
        })

        it_pass_fail("should_less", []() {
            should_less(1, 2)

            should_less(1.5f, 2.5f)

            should_less('a', 'b')

            should_less(string("Hello"), string("World"))

            return PASS;
        })

        it_pass_fail("should_great", []() {
            should_great(2, 1)

            should_great(2.5f, 1.5f)

            should_great('b', 'a')

            should_great(string("World"), string("Hello"))

            return PASS;
        })

        it_pass_fail("should_less_equal", []() {
            should_less_equal(1, 2)
            should_less_equal(1, 1)

            should_less_equal(1.5f, 2.5f)
            should_less_equal(1.5f, 1.5f)

            should_less_equal('a', 'b')
            should_less_equal('a', 'a')

            should_less_equal(string("Hello"), string("World"))
            should_less_equal(string("Hello"), string("Hello"))

            return PASS;
        })

        it_pass_fail("should_great_equal", []() {
            should_great_equal(2, 1)
            should_great_equal(2, 2)

            should_great_equal(2.5f, 1.5f)
            should_great_equal(2.5f, 2.5f)

            should_great_equal('b', 'a')
            should_great_equal('b', 'b')

            should_great_equal(string("World"), string("Hello"))
            should_great_equal(string("World"), string("World"))

            return PASS;
        })

        it_pass_fail("should_true", []() {
            should_true(true)

            should_true(1 == 1)

            return PASS;
        })

        it_pass_fail("should_false", []() {
            should_false(false)

            should_false(1 == 2)

            return PASS;
        })

        it_pass_fail("should_empty", []() {
            should_empty(string(""))

            should_empty(vector<int>())

            return PASS;
        })

        it_pass_fail("should_not_empty", []() {
            should_not_empty(string("Hello"))

            should_not_empty(vector<int>({1, 2, 3}))

            return PASS;
        })

        return PASS;
    });
}

int main() {
    cout << "C++ Test test" << endl << endl;

    Test test;

    construct_test(test);

    return test.run() ? 0 : 1;
}