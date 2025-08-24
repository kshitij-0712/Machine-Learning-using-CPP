 cmake_minimum_required(VERSION 3.10)
    project(MachineLearningCPP VERSION 1.0)

    # Add the CSVDatasetLibrary as a subdirectory.
    # This will process the CMakeLists.txt inside csv_dataset_library/
    # and make the 'CSVDatasetLibrary' target available in this project.
    add_subdirectory(csv_dataset_library)

    # Now define your main machine learning application executable
    # add_executable(MLApp src/main_ml_app.cpp)

    # Link your MLApp against the CSVDatasetLibrary.
    # The name 'CSVDatasetLibrary' must match the project/library name
    # defined in csv_dataset_library/CMakeLists.txt.
    target_link_libraries(MLApp PRIVATE CSVDatasetLibrary)

    # You might also add include directories for your main ML app's own headers
    # target_include_directories(MLApp PRIVATE
    #     ${CMAKE_CURRENT_SOURCE_DIR}/src # If your ML app has its own headers
    # )

    # Optional: If MLApp needs a specific data file, copy it to the executable's directory
    # For instance, if src/main_ml_app.cpp reads "training_data.csv"
    # add_custom_command(
    #     TARGET MLApp
    #     POST_BUILD
    #     COMMAND ${CMAKE_COMMAND} -E copy
    #         ${CMAKE_CURRENT_SOURCE_DIR}/data/training_data.csv # Example data path
    #         $<TARGET_FILE_DIR:MLApp>/training_data.csv
    #     COMMENT "Copying training_data.csv for MLApp executable"
    # )

    # Add other targets for your ML project here, e.g., other executables, tests, etc.
    