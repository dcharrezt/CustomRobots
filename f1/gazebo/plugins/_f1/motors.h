#include <boost/bind.hpp>
#include <functional>
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/common/common.hh>
#include <ignition/math/Vector3.hh>
#include <ignition/math/Angle.hh>
#include <stdio.h>

// JDErobot general ice component includes
#include <jderobot/motors.h>

// ICE utils includes
// #include <Ice/Ice.h>
// #include <IceUtil/IceUtil.h>
// #include <easyiceconfig/EasyIce.h>

using namespace ignition;

namespace gazebo 
{
    class Motors : public ModelPlugin
    {
        public:

            Motors();
            void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf);
            virtual void Init();

            std::string nameMotors;
            float vel, w;
            pthread_mutex_t mutex;
            pthread_mutex_t mutexMotor;

            struct motor_t {
                float v;
                float w;
                float l;
                double wheelMax;
                double wheelMin;
                double targetRightSteerPos,targetLeftSteerPos;
            };
            motor_t robotMotors;

        private:
            void PID();
            void OnUpdate();
            transport::NodePtr node;
            transport::SubscriberPtr velSub;
            physics::JointPtr steerLeftJoint, steerRightJoint, frontLeftJoint, frontRightJoint;
            physics::ModelPtr model;
            event::ConnectionPtr updateConnection;
            double motorspeed;
            double motorsteer;
            int count;
            common::Time prevUpdateTime;
    };
}
