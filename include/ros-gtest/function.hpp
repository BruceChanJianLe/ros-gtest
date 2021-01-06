#ifndef __FUNCTION_H_
#define __FUNCTION_H_

#include <ros/ros.h>


namespace functionality
{
    class node
    {
    private:
        /// Global node handle
        ros::NodeHandle global_nh_;
        /// Private node handle
        ros::NodeHandle private_nh_;

    public:
        node();
        ~node();
    };
    
} // namespace functionality


#endif