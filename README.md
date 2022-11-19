# C++ Test

[![Tests](https://github.com/Gashmob/Cpp-Tests/actions/workflows/test.yml/badge.svg)](https://github.com/Gashmob/Cpp-Tests/actions/workflows/test.yml)

This is a little framework to do tests in C++.

## Installation

This library is a header only, so you can just add the header (`include/test/test.hpp`) in your project.

For example if you use a `CMakeLists.txt`, copy `include` dir in your project and add this to your `CMakeLists.txt`:

```cmake
add_executable(<target>
        ...
        include/test/test.hpp)

target_include_directories(<target> PUBLIC include)
```

So now, you can just add `#include <enquirer/test.hpp>` in your source files.

## Usage

```c++
// Instantiate a test object
Test test;

// Describe some tests
test.describe("Test 1",[]() {
// Test some things
Test::Result res = it("1 is equal to 1",[]() {
assert_equal(1, 1);

return Test::PASS;
});
// You can use assert (or should directly)
should_not_equal(1, 2);

return res;
});

// Run tests
bool success = test.run();
```

It will display (with colors) :

```text
Run 1 test

Test 1
✔ 1 is equal to 1
  PASS

 All tests passed
```

### `describe`

This method takes 2 arguments :

```c++
void describe(const std::string &name, const std::function<Result()> &func);
```

- name of the test
- function of the test. This function should return a test::Result

### `it`

This macro takes 2 arguments :

```c++
#define it(name, func)
```

- name of the test
- function of the test. This function should return a test::Result

### `assert_*` and `should_*`

For each assert, there is an equivalent should (and vice versa). If assert failed, the test fail. If should failed, the
test is skipped

List of `assert_*` and `should_*` :

- equal
- not_equal
- less
- great
- less_equal
- great_equal
- true
- false
- empty
- not_empty

### `it_<a>_<b>`

These macros are some helpers for tests, it runs a test and return b if not a. In fact, it's just a
shortcut : `it_<a>_fail()` is `assert_equal(<a>, it())` and `it_<a>_skip()` is `should_equal(<a>, it())`.

List of `it_<a>_<b>`

- it_pass_fail
- it_fail_fail
- it_skip_fail
- it_pass_skip
- it_fail_skip
- it_skip_skip
