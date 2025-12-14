# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\h6a_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\h6a_autogen.dir\\ParseCache.txt"
  "h6a_autogen"
  )
endif()
