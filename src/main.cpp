#include <cassert>
#include <cstdlib>
#include <iostream>
#include <memory>
#include <utility>

#include  <openssl/bio.h>
#include  <openssl/ssl.h>
#include  <openssl/err.h>

#include <gflags/gflags.h>
#include <glog/logging.h>

int main(int argc, const char** argv) {
  LOG(INFO) << "Hello, World! I'm the organic dump irrigation controller";
  return EXIT_SUCCESS;
}
