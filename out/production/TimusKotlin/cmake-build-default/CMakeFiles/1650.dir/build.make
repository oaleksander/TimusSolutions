# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\User\OneDrive - ITMO UNIVERSITY\Algorithm.h\TimusSolutions"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\User\OneDrive - ITMO UNIVERSITY\Algorithm.h\TimusSolutions\cmake-build-default"

# Include any dependencies generated for this target.
include CMakeFiles/1650.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/1650.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1650.dir/flags.make

CMakeFiles/1650.dir/1650.cpp.obj: CMakeFiles/1650.dir/flags.make
CMakeFiles/1650.dir/1650.cpp.obj: ../1650.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\User\OneDrive - ITMO UNIVERSITY\Algorithm.h\TimusSolutions\cmake-build-default\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1650.dir/1650.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1650.dir\1650.cpp.obj -c "C:\Users\User\OneDrive - ITMO UNIVERSITY\Algorithm.h\TimusSolutions\1650.cpp"

CMakeFiles/1650.dir/1650.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1650.dir/1650.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\User\OneDrive - ITMO UNIVERSITY\Algorithm.h\TimusSolutions\1650.cpp" > CMakeFiles\1650.dir\1650.cpp.i

CMakeFiles/1650.dir/1650.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1650.dir/1650.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\User\OneDrive - ITMO UNIVERSITY\Algorithm.h\TimusSolutions\1650.cpp" -o CMakeFiles\1650.dir\1650.cpp.s

# Object files for target 1650
1650_OBJECTS = \
"CMakeFiles/1650.dir/1650.cpp.obj"

# External object files for target 1650
1650_EXTERNAL_OBJECTS =

1650.exe: CMakeFiles/1650.dir/1650.cpp.obj
1650.exe: CMakeFiles/1650.dir/build.make
1650.exe: CMakeFiles/1650.dir/linklibs.rsp
1650.exe: CMakeFiles/1650.dir/objects1.rsp
1650.exe: CMakeFiles/1650.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\User\OneDrive - ITMO UNIVERSITY\Algorithm.h\TimusSolutions\cmake-build-default\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1650.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1650.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1650.dir/build: 1650.exe
.PHONY : CMakeFiles/1650.dir/build

CMakeFiles/1650.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1650.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1650.dir/clean

CMakeFiles/1650.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\User\OneDrive - ITMO UNIVERSITY\Algorithm.h\TimusSolutions" "C:\Users\User\OneDrive - ITMO UNIVERSITY\Algorithm.h\TimusSolutions" "C:\Users\User\OneDrive - ITMO UNIVERSITY\Algorithm.h\TimusSolutions\cmake-build-default" "C:\Users\User\OneDrive - ITMO UNIVERSITY\Algorithm.h\TimusSolutions\cmake-build-default" "C:\Users\User\OneDrive - ITMO UNIVERSITY\Algorithm.h\TimusSolutions\cmake-build-default\CMakeFiles\1650.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/1650.dir/depend

