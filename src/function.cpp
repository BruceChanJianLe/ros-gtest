#include <ros-gtest/function.hpp>


namespace functionality
{
    node::node()
    :   global_nh_(ros::NodeHandle()),
        private_nh_(ros::NodeHandle("~"))
    {
    }
    
    node::~node()
    {
    }
    
} // namespace functionality