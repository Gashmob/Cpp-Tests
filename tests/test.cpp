/**
 *     == C++ Test ===
 * Created by Kevin Traini
 *      Under GPL-3.0
 * -----------------------
 */
#include "test.hpp"

using namespace std;
using namespace test;

void construct_test(Test &test) {

}

int main() {
    cout << "C++ Test test" << endl << endl;

    Test test;

    construct_test(test);

    return test.run() ? 0 : 1;
}