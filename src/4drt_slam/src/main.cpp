#include <rclcpp/rclcpp.hpp>

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  RCLCPP_INFO(rclcpp::get_logger("4drt_slam"), "Hello from 4DRT-SLAM node.");
  rclcpp::shutdown();
  return 0;
}
