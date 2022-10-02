//
// Created by qin on 27/09/22.
//

#include <ros/ros.h>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
    ros::init(argc, argv, "rgbd_receiver");
    ros::NodeHandle nh;
    std::string folder_path;
    ros::param::get("/command_parser/dataset_dir", folder_path);
    std::cout << "folder_path: " << folder_path << std::endl;
    ros::spin();
    return 0;
}