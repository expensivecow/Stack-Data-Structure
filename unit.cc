#include "unit.h"
#include <iostream>
#include <sstream>

Unit::Unit() {
}

Unit::~Unit() {
}

void Unit::assertEquals(std::string msg, int expected, int actual) {
  std::stringstream fmt;
  if (expected != actual) {
    fmt << msg << " :" << " Expected " << expected << " got " << actual << std::endl;
    failures.push_back(fmt.str());
  }
}

void Unit::assertTrue(std::string msg, bool expected) {
  std::stringstream fmt;
  if (expected != true) {
    fmt << msg << " :" << " Expected true got false" << std::endl;
    failures.push_back(fmt.str());
  }
}

void Unit::assertFalse(std::string msg, bool expected) {
  std::stringstream fmt;
  if(expected != false) {
    fmt << msg << " :" << " Expected false got true" << std::endl;
    failures.push_back(fmt.str());
  }
}

void Unit::assertvectorEquals(std::string msg, std::vector<int>& expected, std::vector<int>& actual) {
  bool fail = expected.size() != actual.size();
  for(unsigned int i=0; i < expected.size() && !fail; i++) {
    fail = expected[i] != actual[i];
  }
  if (fail) {
    std::stringstream fmt;
    fmt << msg << ": Expected\n<";
    fmt << toStr(expected);
    fmt << ">\nbut was\n<";
    fmt << toStr(actual);
    fmt << ">";
    failures.push_back(fmt.str());
  }
}

void Unit::assertpointerEquals(std::string msg, int* expected, int* actual, int n) {
  for(int i=0; i<n; i++) {
    if(*(expected+i) != *(actual+i) ) {
      std::stringstream fmt;
      fmt << msg << " :" << " Expected " << *expected << " got " << *actual << std::endl;
      failures.push_back(fmt.str());
    }
  }
}

void Unit::assertNonNull(std::string msg, void* actual) {
  if (actual == NULL) {
    std::stringstream fmt;
    fmt << msg << ": Expected non-null value.";
    failures.push_back(fmt.str());
  }
}

void Unit::assertNull(std::string msg, void* actual) {
  if (actual != NULL) {
    std::stringstream fmt;
    fmt << msg << ": Expected null value.";
    failures.push_back(fmt.str());
  }
}

std::string Unit::toStr(std::vector<int>& v) {
  std::stringstream os;
  os << "[";
  for(unsigned int i=0; i < v.size(); i++) {
    os << v[i];
    if (i < v.size()-1) {
      os << ", ";
    }
  }
  os << "]";
  return os.str();
}

void Unit::printResults() {
  if (failures.empty()) {
    std::cout << "All tests passed.\n";
  } else {
    std::cerr << failures.size() << " failures:\n\n";
    for(unsigned int i=0; i < failures.size(); i++) {
      std::cerr << i+1 << ". " << failures[i] << "\n\n";
    }
  }
}
