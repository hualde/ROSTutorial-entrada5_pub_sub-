#include <ros/ros.h>
#include <std_msgs/String.h>

int main(int argc, char **argv)
{
   ros::init(argc, argv, "nodo_publisher"); 
   ros::NodeHandle nh;

   ros::Publisher pub = nh.advertise<std_msgs::String>("mi_topic",10);

   ros::Rate rate(1);

   while(ros::ok()){
       std_msgs::String msg;
       msg.data = "Mensaje publicado";
       pub.publish(msg);
       rate.sleep();
   }
}