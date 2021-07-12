cmake_minimum_required(VERSION 3.5)
project(trajectry_publisher)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)

add_executable(${PROJECT_NAME} src/trajectry_publisher.cpp)

#add_library(${PROJECT_NAME}_component SHARED src/trajectry_publisher_component.cpp)

ament_target_dependencies(${PROJECT_NAME} rclcpp rclcpp_components)

#rclcpp_components_register_nodes(${PROJECT_NAME}_component "TrajectryPublisher")

install(TARGETS ${PROJECT_NAME} DESTINATION lib)
# Call ament build system
ament_package()

