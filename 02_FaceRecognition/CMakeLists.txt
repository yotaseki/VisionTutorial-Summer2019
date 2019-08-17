project(FaceRecognition)
find_package(OpenCV)
add_executable(FaceRecognition
    main.cpp
)
target_link_libraries(FaceRecognition
    ${OpenCV_LIBS}
)
