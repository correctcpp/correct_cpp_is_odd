#include <cassert>
#include <iostream>
#include <string>
#include <vector>

/// Program to determine if a number is odd.
/// If there are no arguments supplied by the user,
/// exit code will be 1.
/// If there are two or more arguments supplied by the
/// user, only the first one will be used
/// The first argument is tested to be an odd integer
/// number. If the argument is not a number, or too
/// big to be converted to a number, exit code will
/// be one. If the number is odd, 'true' (and a newline)
/// will be displayed, 'false' (and a newline) otherwise
int main(int argc, char* argv[])
{
  const std::vector<std::string> args(argv, argv + argc);
  assert(argc >= 1);
  if (argc == 1) return 1;
  try
  {
    const int number{std::stoi(args[1])};
    if (number % 2)
    {
      std::cout << "true\n";
    }
    else
    {
      std::cout << "false\n";
    }
  }
  catch(const std::exception&)
  {
    return 1;
  }
}
