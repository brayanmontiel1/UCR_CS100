#include "gtest/gtest.h"

//#include "composite_test.h"
//#include "factory_test.h"
#include "decorator_test.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

