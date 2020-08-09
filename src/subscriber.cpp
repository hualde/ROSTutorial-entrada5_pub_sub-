 #include <ros/ros.h>
 #include <std_msgs/String.h>

 void callback_subscriber(const std_msgs::String& msg){

     ROS_INFO("Subscrito al mensaje: %s", msg.data.c_str());
 }

 int main(int argc,char **argv){

     ros::init(argc,argv,"nodo_subscriber");
     ros::NodeHandle nh;

     ros::Subscriber sub = nh.subscribe("mi_topic",1000,callback_subscriber);

     ros::spin();

 }

 