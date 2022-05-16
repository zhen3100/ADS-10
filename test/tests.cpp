// Copyright 2022 NNTU-CS
#include <gtest/gtest.h>
#include <string>
#include <vector>

#include "tree.h"
std::vector<char> getPerm(const Tree& tree, int n);

TEST(ads10, test1) {
  Tree tree(std::vector<char>{'1', '2', '3'});
  std::vector<char> result = getPerm(tree, 1);
  ASSERT_TRUE(result[0] == '1' && result[1] == '2' && result[2] == '3');
}

TEST(ads10, test2) {
  Tree tree(std::vector<char>{'1', '2', '3'});
  std::vector<char> result = getPerm(tree, 2);
  ASSERT_TRUE(result[0] == '1' && result[1] == '3' && result[2] == '2');
}

TEST(ads10, test3) {
  Tree tree(std::vector<char>{'1', '2', '3'});
  std::vector<char> result = getPerm(tree, 6);
  ASSERT_TRUE(result[0] == '3' && result[1] == '2' && result[2] == '1');
}

TEST(ads10, test4) {
  Tree tree(std::vector<char>{'1', '2', '3'});
  std::vector<char> result = getPerm(tree, 8);
  ASSERT_EQ(result.size(), 0);
}
