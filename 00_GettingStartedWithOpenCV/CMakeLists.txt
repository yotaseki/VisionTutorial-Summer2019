project(ShowImage)
find_package(OpenCV)
add_executable(ShowImage
    main.cpp
)
target_link_libraries(ShowImage
    ${OpenCV_LIBS}
)
