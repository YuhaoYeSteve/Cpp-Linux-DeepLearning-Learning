# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake/build

# Include any dependencies generated for this target.
include CMakeFiles/main_cmake_gdb.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main_cmake_gdb.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main_cmake_gdb.dir/flags.make

CMakeFiles/main_cmake_gdb.dir/main.cpp.o: CMakeFiles/main_cmake_gdb.dir/flags.make
CMakeFiles/main_cmake_gdb.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main_cmake_gdb.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main_cmake_gdb.dir/main.cpp.o -c /home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake/main.cpp

CMakeFiles/main_cmake_gdb.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main_cmake_gdb.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake/main.cpp > CMakeFiles/main_cmake_gdb.dir/main.cpp.i

CMakeFiles/main_cmake_gdb.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main_cmake_gdb.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake/main.cpp -o CMakeFiles/main_cmake_gdb.dir/main.cpp.s

CMakeFiles/main_cmake_gdb.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/main_cmake_gdb.dir/main.cpp.o.requires

CMakeFiles/main_cmake_gdb.dir/main.cpp.o.provides: CMakeFiles/main_cmake_gdb.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/main_cmake_gdb.dir/build.make CMakeFiles/main_cmake_gdb.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/main_cmake_gdb.dir/main.cpp.o.provides

CMakeFiles/main_cmake_gdb.dir/main.cpp.o.provides.build: CMakeFiles/main_cmake_gdb.dir/main.cpp.o


CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.o: CMakeFiles/main_cmake_gdb.dir/flags.make
CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.o: ../src/sum.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.o -c /home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake/src/sum.cpp

CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake/src/sum.cpp > CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.i

CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake/src/sum.cpp -o CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.s

CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.o.requires:

.PHONY : CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.o.requires

CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.o.provides: CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.o.requires
	$(MAKE) -f CMakeFiles/main_cmake_gdb.dir/build.make CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.o.provides.build
.PHONY : CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.o.provides

CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.o.provides.build: CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.o


# Object files for target main_cmake_gdb
main_cmake_gdb_OBJECTS = \
"CMakeFiles/main_cmake_gdb.dir/main.cpp.o" \
"CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.o"

# External object files for target main_cmake_gdb
main_cmake_gdb_EXTERNAL_OBJECTS =

main_cmake_gdb: CMakeFiles/main_cmake_gdb.dir/main.cpp.o
main_cmake_gdb: CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.o
main_cmake_gdb: CMakeFiles/main_cmake_gdb.dir/build.make
main_cmake_gdb: CMakeFiles/main_cmake_gdb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable main_cmake_gdb"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main_cmake_gdb.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main_cmake_gdb.dir/build: main_cmake_gdb

.PHONY : CMakeFiles/main_cmake_gdb.dir/build

CMakeFiles/main_cmake_gdb.dir/requires: CMakeFiles/main_cmake_gdb.dir/main.cpp.o.requires
CMakeFiles/main_cmake_gdb.dir/requires: CMakeFiles/main_cmake_gdb.dir/src/sum.cpp.o.requires

.PHONY : CMakeFiles/main_cmake_gdb.dir/requires

CMakeFiles/main_cmake_gdb.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main_cmake_gdb.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main_cmake_gdb.dir/clean

CMakeFiles/main_cmake_gdb.dir/depend:
	cd /home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake /home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake /home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake/build /home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake/build /home/ps/C++/Cpp-Linux-DeepLearning-Learning/Compile/CMake/build/CMakeFiles/main_cmake_gdb.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main_cmake_gdb.dir/depend

