#include <rclcpp/rclcpp.hpp>

class TrajectryPublisher : public rclcpp::Node {
public:
  TrajectryPublisher();
  ~TrajectryPublisher();
private:

};

TrajectryPublisher::TrajectryPublisher() : Node("trajectry_publisher")
{
}

TrajectryPublisher::~TrajectryPublisher()
{
    
}
int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<TrajectryPublisher>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}