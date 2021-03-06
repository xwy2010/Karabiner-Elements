#define CATCH_CONFIG_RUNNER
#include <catch2/catch.hpp>

#include "dispatcher_utility.hpp"
#include "test_runner.hpp"

int run_tests(int argc, char* argv[]) {
  krbn::dispatcher_utility::initialize_dispatchers();

  auto result = Catch::Session().run(argc, argv);

  krbn::dispatcher_utility::terminate_dispatchers();

  return result;
}
