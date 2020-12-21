# ROS GTest

This repository demonstrates the methods of writing unit test with gtest in a ROS package. For more information about test driven development please look at this [repository](https://github.com/BruceChanJianLe/cpp-test-driven-development). For non ROS unit test with vscode please visit this [repository](https://github.com/BruceChanJianLe/cpp-unit-test-setup).

## Content
- [Building Unit Test](#Building-Unit-Test)
- [Running Unit Test](#Running-Unit-Test)
- [Reference](#Reference)

## Building Unit Test

To build the unit test for your specific package, you can simply run the following command:
```bash
catkin_make run_tests_<package_name>
```

To build all unit tests in your directory, you can simpluy run the folowing command:
```bash
catkin_make run_tests
```

Note that for the above command to work you will need to define your `CMakeLists.txt` properly.

## Running Unit Test

There are two ways to run unit test with ROS, first it is runnning all declared unit tests in a package.
```bash
catkin_make run_tests_<package_name>_gtest
```

**Method 2:**  
Run a single unit test declared inside a package.  
```bash
catkin_make run_test_<package_name>_gtest_<unit_test_name>
```

Note that you can write `catkin_make run_tests` and tab tab.

## Reference

- roswiki gtest [link](http://wiki.ros.org/gtest)
- ROS plugin unit test [link](https://blog.csdn.net/u013158492/article/details/50502266)
- Example of unit test with ROS (repository) [link](https://github.com/steup/Ros-Test-Example/blob/master/src/cars/src/Test.cpp)
