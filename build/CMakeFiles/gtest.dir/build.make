# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Remco\Documents\GitHub\adt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Remco\Documents\GitHub\adt\build

# Include any dependencies generated for this target.
include CMakeFiles/gtest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gtest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gtest.dir/flags.make

CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.obj: CMakeFiles/gtest.dir/flags.make
CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.obj: CMakeFiles/gtest.dir/includes_CXX.rsp
CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.obj: C:/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Remco\Documents\GitHub\adt\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.obj"
	C:\PROGRA~2\MINGW-~1\I686-5~1.0-P\mingw32\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\gtest.dir\C_\Users\Remco\Documents\GitHub\deps\gtest-1.7.0\src\gtest-all.cc.obj -c C:\Users\Remco\Documents\GitHub\deps\gtest-1.7.0\src\gtest-all.cc

CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.i"
	C:\PROGRA~2\MINGW-~1\I686-5~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Remco\Documents\GitHub\deps\gtest-1.7.0\src\gtest-all.cc > CMakeFiles\gtest.dir\C_\Users\Remco\Documents\GitHub\deps\gtest-1.7.0\src\gtest-all.cc.i

CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.s"
	C:\PROGRA~2\MINGW-~1\I686-5~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Remco\Documents\GitHub\deps\gtest-1.7.0\src\gtest-all.cc -o CMakeFiles\gtest.dir\C_\Users\Remco\Documents\GitHub\deps\gtest-1.7.0\src\gtest-all.cc.s

CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.obj.requires:

.PHONY : CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.obj.requires

CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.obj.provides: CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.obj.requires
	$(MAKE) -f CMakeFiles\gtest.dir\build.make CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.obj.provides.build
.PHONY : CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.obj.provides

CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.obj.provides.build: CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.obj


# Object files for target gtest
gtest_OBJECTS = \
"CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.obj"

# External object files for target gtest
gtest_EXTERNAL_OBJECTS =

libgtest.a: CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.obj
libgtest.a: CMakeFiles/gtest.dir/build.make
libgtest.a: CMakeFiles/gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Remco\Documents\GitHub\adt\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libgtest.a"
	$(CMAKE_COMMAND) -P CMakeFiles\gtest.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gtest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gtest.dir/build: libgtest.a

.PHONY : CMakeFiles/gtest.dir/build

CMakeFiles/gtest.dir/requires: CMakeFiles/gtest.dir/C_/Users/Remco/Documents/GitHub/deps/gtest-1.7.0/src/gtest-all.cc.obj.requires

.PHONY : CMakeFiles/gtest.dir/requires

CMakeFiles/gtest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\gtest.dir\cmake_clean.cmake
.PHONY : CMakeFiles/gtest.dir/clean

CMakeFiles/gtest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Remco\Documents\GitHub\adt C:\Users\Remco\Documents\GitHub\adt C:\Users\Remco\Documents\GitHub\adt\build C:\Users\Remco\Documents\GitHub\adt\build C:\Users\Remco\Documents\GitHub\adt\build\CMakeFiles\gtest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gtest.dir/depend

