# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = "D:\Programacao\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Programacao\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\UFPB\P5\Analise e Projetos de Algoritmos\Exercicios\Ordenacao\AlgOrd"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\UFPB\P5\Analise e Projetos de Algoritmos\Exercicios\Ordenacao\AlgOrd\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/AlgOrd.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AlgOrd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AlgOrd.dir/flags.make

CMakeFiles/AlgOrd.dir/main.cpp.obj: CMakeFiles/AlgOrd.dir/flags.make
CMakeFiles/AlgOrd.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\UFPB\P5\Analise e Projetos de Algoritmos\Exercicios\Ordenacao\AlgOrd\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AlgOrd.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\AlgOrd.dir\main.cpp.obj -c "D:\UFPB\P5\Analise e Projetos de Algoritmos\Exercicios\Ordenacao\AlgOrd\main.cpp"

CMakeFiles/AlgOrd.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgOrd.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\UFPB\P5\Analise e Projetos de Algoritmos\Exercicios\Ordenacao\AlgOrd\main.cpp" > CMakeFiles\AlgOrd.dir\main.cpp.i

CMakeFiles/AlgOrd.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgOrd.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\UFPB\P5\Analise e Projetos de Algoritmos\Exercicios\Ordenacao\AlgOrd\main.cpp" -o CMakeFiles\AlgOrd.dir\main.cpp.s

CMakeFiles/AlgOrd.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/AlgOrd.dir/main.cpp.obj.requires

CMakeFiles/AlgOrd.dir/main.cpp.obj.provides: CMakeFiles/AlgOrd.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\AlgOrd.dir\build.make CMakeFiles/AlgOrd.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/AlgOrd.dir/main.cpp.obj.provides

CMakeFiles/AlgOrd.dir/main.cpp.obj.provides.build: CMakeFiles/AlgOrd.dir/main.cpp.obj


# Object files for target AlgOrd
AlgOrd_OBJECTS = \
"CMakeFiles/AlgOrd.dir/main.cpp.obj"

# External object files for target AlgOrd
AlgOrd_EXTERNAL_OBJECTS =

AlgOrd.exe: CMakeFiles/AlgOrd.dir/main.cpp.obj
AlgOrd.exe: CMakeFiles/AlgOrd.dir/build.make
AlgOrd.exe: CMakeFiles/AlgOrd.dir/linklibs.rsp
AlgOrd.exe: CMakeFiles/AlgOrd.dir/objects1.rsp
AlgOrd.exe: CMakeFiles/AlgOrd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\UFPB\P5\Analise e Projetos de Algoritmos\Exercicios\Ordenacao\AlgOrd\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AlgOrd.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\AlgOrd.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AlgOrd.dir/build: AlgOrd.exe

.PHONY : CMakeFiles/AlgOrd.dir/build

CMakeFiles/AlgOrd.dir/requires: CMakeFiles/AlgOrd.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/AlgOrd.dir/requires

CMakeFiles/AlgOrd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\AlgOrd.dir\cmake_clean.cmake
.PHONY : CMakeFiles/AlgOrd.dir/clean

CMakeFiles/AlgOrd.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\UFPB\P5\Analise e Projetos de Algoritmos\Exercicios\Ordenacao\AlgOrd" "D:\UFPB\P5\Analise e Projetos de Algoritmos\Exercicios\Ordenacao\AlgOrd" "D:\UFPB\P5\Analise e Projetos de Algoritmos\Exercicios\Ordenacao\AlgOrd\cmake-build-debug" "D:\UFPB\P5\Analise e Projetos de Algoritmos\Exercicios\Ordenacao\AlgOrd\cmake-build-debug" "D:\UFPB\P5\Analise e Projetos de Algoritmos\Exercicios\Ordenacao\AlgOrd\cmake-build-debug\CMakeFiles\AlgOrd.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/AlgOrd.dir/depend

