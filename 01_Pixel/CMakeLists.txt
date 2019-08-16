project(CopyImage)
find_package(OpenCV)
add_executable(CopyImage
    main.cpp
)
target_link_libraries(CopyImage
    ${OpenCV_LIBS}
)
