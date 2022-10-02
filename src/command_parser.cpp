//
// Created by qin on 27/09/22.
//

#include <ros/ros.h>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
    ros::init(argc, argv, "rgbd_receiver");
    ros::NodeHandle nh;
    std::string string_from_launch_file;
    // get command from launch file using "args"
    string_from_launch_file = argv[1];
    std::cout << "method1: " << string_from_launch_file << std::endl;
    ros::param::get("/command_parser/method2", string_from_launch_file);
    std::cout << "method2: " << string_from_launch_file << std::endl;
    ros::spin();
    return 0;
}