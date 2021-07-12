#include <rclcpp/rclcpp.hpp>

class TrajectryPublisher : public rclcpp::Node {
public:
  TrajectryPublisher(rclcpp::NodeOptions options);
  ~TrajectryPublisher();
private:

};

TrajectryPublisher::TrajectryPublisher(rclcpp::NodeOptions options) : Node("trajectry_publisher", options)
{
}

/*** ImagePublisherクラスをコンポーネントとして登録 ***/
#include <rclcpp_components/register_node_macro.hpp>
RCLCPP_COMPONENTS_REGISTER_NODE(TrajectryPublisher)
