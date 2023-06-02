#include "talker/landingcv.hpp"

int main(int argc, char **argv) 
{
  using namespace avoidance;
  //create safe landing planner node
  ros::init(argc, argv, "landingcv_node");

  //create node handle
  ros::NodeHandle nh("~");


  SafeLandingPlannerNode NodeSLP(nh);
  //calls the startNode which is defined in the safe_landing_planner_node.cpp
  NodeSLP.startNode();

  NodeSLP.worker_.join();

  return 0;
}
