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
CMAKE_SOURCE_DIR = C:\Users\User\CLionProjects\TimusSolutions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\User\CLionProjects\TimusSolutions\cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/1296.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/1296.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1296.dir/flags.make

CMakeFiles/1296.dir/1296.cpp.obj: CMakeFiles/1296.dir/flags.make
CMakeFiles/1296.dir/1296.cpp.obj: ../1296.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\CLionProjects\TimusSolutions\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1296.dir/1296.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1296.dir\1296.cpp.obj -c C:\Users\User\CLionProjects\TimusSolutions\1296.cpp

CMakeFiles/1296.dir/1296.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1296.dir/1296.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User\CLionProjects\TimusSolutions\1296.cpp > CMakeFiles\1296.dir\1296.cpp.i

CMakeFiles/1296.dir/1296.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1296.dir/1296.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User\CLionProjects\TimusSolutions\1296.cpp -o CMakeFiles\1296.dir\1296.cpp.s

# Object files for target 1296
1296_OBJECTS = \
"CMakeFiles/1296.dir/1296.cpp.obj"

# External object files for target 1296
1296_EXTERNAL_OBJECTS =

1296.exe: CMakeFiles/1296.dir/1296.cpp.obj
1296.exe: CMakeFiles/1296.dir/build.make
1296.exe: CMakeFiles/1296.dir/linklibs.rsp
1296.exe: CMakeFiles/1296.dir/objects1.rsp
1296.exe: CMakeFiles/1296.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\User\CLionProjects\TimusSolutions\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1296.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1296.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1296.dir/build: 1296.exe
.PHONY : CMakeFiles/1296.dir/build

CMakeFiles/1296.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1296.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1296.dir/clean

CMakeFiles/1296.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\User\CLionProjects\TimusSolutions C:\Users\User\CLionProjects\TimusSolutions C:\Users\User\CLionProjects\TimusSolutions\cmake-build-release C:\Users\User\CLionProjects\TimusSolutions\cmake-build-release C:\Users\User\CLionProjects\TimusSolutions\cmake-build-release\CMakeFiles\1296.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1296.dir/depend

