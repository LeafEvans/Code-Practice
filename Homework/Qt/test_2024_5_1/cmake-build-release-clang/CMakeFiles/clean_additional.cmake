# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\test_2024_5_1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\test_2024_5_1_autogen.dir\\ParseCache.txt"
  "test_2024_5_1_autogen"
  )
endif()
