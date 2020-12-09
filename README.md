# ROS GTest

This repository demonstrates the methods of writing unit test with gtest in a ROS package. For more information about test driven development please look at this [repository](https://github.com/BruceChanJianLe/cpp-test-driven-development). For non ROS unit test with vscode please visit this [repository](https://github.com/BruceChanJianLe/cpp-unit-test-setup).

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
