project(FaceRecoginition)
find_package(OpenCV)
add_executable(FaceRecoginition
    main.cpp
)
target_link_libraries(FaceRecoginition
    ${OpenCV_LIBS}
)
