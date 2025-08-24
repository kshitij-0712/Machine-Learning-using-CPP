# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Define the name of your project
project(CSVdatasetLibrary VERSION 1.0)

# Add the include directory so it's visible to other projects
target_include_directories(CSVdatasetLibrary PUBLIC include)

# Create the static library from the source files
add_library(CSVdatasetLibrary STATIC src/dataset.cpp)

# (Optional) Create a simple example executable
# add_executable(my_dataset_app example/readingCSV.cpp)
# Link the example executable to your library
# target_link_libraries(my_dataset_app PRIVATE DatasetLibrary)