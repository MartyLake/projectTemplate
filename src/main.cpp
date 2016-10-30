#include "versionNumber.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::cout << "Hello World!" << std::endl;
  std::cout << "v" << std::to_string(VERSION_MAJOR) << "."
            << std::to_string(VERSION_MINOR) << std::endl;
  ::testing::InitGoogleTest(&argc, argv);
  int ret = RUN_ALL_TESTS();
  return ret;
}
