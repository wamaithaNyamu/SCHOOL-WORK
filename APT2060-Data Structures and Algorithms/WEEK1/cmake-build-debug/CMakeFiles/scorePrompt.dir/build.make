# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /opt/clion-2019.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.2.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/wamaitha/Documents/SCHOOL WORK/APT2060-Data Structures and Algorithms/WEEK1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/wamaitha/Documents/SCHOOL WORK/APT2060-Data Structures and Algorithms/WEEK1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/scorePrompt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/scorePrompt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/scorePrompt.dir/flags.make

CMakeFiles/scorePrompt.dir/scorePrompt.cpp.o: CMakeFiles/scorePrompt.dir/flags.make
CMakeFiles/scorePrompt.dir/scorePrompt.cpp.o: ../scorePrompt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/wamaitha/Documents/SCHOOL WORK/APT2060-Data Structures and Algorithms/WEEK1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/scorePrompt.dir/scorePrompt.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/scorePrompt.dir/scorePrompt.cpp.o -c "/home/wamaitha/Documents/SCHOOL WORK/APT2060-Data Structures and Algorithms/WEEK1/scorePrompt.cpp"

CMakeFiles/scorePrompt.dir/scorePrompt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scorePrompt.dir/scorePrompt.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/wamaitha/Documents/SCHOOL WORK/APT2060-Data Structures and Algorithms/WEEK1/scorePrompt.cpp" > CMakeFiles/scorePrompt.dir/scorePrompt.cpp.i

CMakeFiles/scorePrompt.dir/scorePrompt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scorePrompt.dir/scorePrompt.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/wamaitha/Documents/SCHOOL WORK/APT2060-Data Structures and Algorithms/WEEK1/scorePrompt.cpp" -o CMakeFiles/scorePrompt.dir/scorePrompt.cpp.s

# Object files for target scorePrompt
scorePrompt_OBJECTS = \
"CMakeFiles/scorePrompt.dir/scorePrompt.cpp.o"

# External object files for target scorePrompt
scorePrompt_EXTERNAL_OBJECTS =

scorePrompt: CMakeFiles/scorePrompt.dir/scorePrompt.cpp.o
scorePrompt: CMakeFiles/scorePrompt.dir/build.make
scorePrompt: CMakeFiles/scorePrompt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/wamaitha/Documents/SCHOOL WORK/APT2060-Data Structures and Algorithms/WEEK1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable scorePrompt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/scorePrompt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/scorePrompt.dir/build: scorePrompt

.PHONY : CMakeFiles/scorePrompt.dir/build

CMakeFiles/scorePrompt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/scorePrompt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/scorePrompt.dir/clean

CMakeFiles/scorePrompt.dir/depend:
	cd "/home/wamaitha/Documents/SCHOOL WORK/APT2060-Data Structures and Algorithms/WEEK1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/wamaitha/Documents/SCHOOL WORK/APT2060-Data Structures and Algorithms/WEEK1" "/home/wamaitha/Documents/SCHOOL WORK/APT2060-Data Structures and Algorithms/WEEK1" "/home/wamaitha/Documents/SCHOOL WORK/APT2060-Data Structures and Algorithms/WEEK1/cmake-build-debug" "/home/wamaitha/Documents/SCHOOL WORK/APT2060-Data Structures and Algorithms/WEEK1/cmake-build-debug" "/home/wamaitha/Documents/SCHOOL WORK/APT2060-Data Structures and Algorithms/WEEK1/cmake-build-debug/CMakeFiles/scorePrompt.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/scorePrompt.dir/depend

