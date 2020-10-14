cmake_minimum_required(VERSION 3.1)

include_directories(
  ../../organic-dump-network/repo
  ../../organic-dump-protocols/repo
  ../../gpio14/repo/include
  ../../../external/protobuf/repo/src
  ../../../external/boringssl/repo/include
  ../../../external/jsoncpp/repo/include
)

add_executable(organic_dump_irrigation_client
  src/main.cpp)

target_link_libraries(organic_dump_irrigation_client gflags::gflags)
target_link_libraries(organic_dump_irrigation_client glog::glog)
target_link_libraries(organic_dump_irrigation_client ssl crypto)
target_link_libraries(organic_dump_irrigation_client organic_dump_network)
target_link_libraries(organic_dump_irrigation_client organic_dump_proto)
target_link_libraries(organic_dump_irrigation_client gpio14)
target_link_libraries(organic_dump_irrigation_client jsoncpp_lib)
