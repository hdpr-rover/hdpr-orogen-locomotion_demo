/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "Task.hpp"

using namespace locomotion_demo;

Task::Task(std::string const& name)
    : TaskBase(name)
{
}

Task::Task(std::string const& name, RTT::ExecutionEngine* engine)
    : TaskBase(name, engine)
{
}

Task::~Task()
{
}



/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See Task.hpp for more detailed
// documentation about them.

bool Task::configureHook()
{
    if (! TaskBase::configureHook())
        return false;
	index=0;
    return true;
}
bool Task::startHook()
{
    if (! TaskBase::startHook())
        return false;
    return true;
}
void Task::updateHook()
{
    TaskBase::updateHook();

	index++;

	switch (index){
		case 1: 
			motion_command.translation=1;
			motion_command.rotation=0;
			break;
		case 15:
			motion_command.translation=0;
			motion_command.rotation=0;
			break;
		case 16:
			motion_command.translation=0;
			motion_command.rotation=1;
			break;
		case 21:
			motion_command.translation=0;
			motion_command.rotation=0;
			break;
		case 24:
			motion_command.translation=0;
			motion_command.rotation=-1;
			break;
		case 27:
			motion_command.translation=0;
			motion_command.rotation=0;
			break;	
		case 28:
			motion_command.translation=1;
			motion_command.rotation=0;
			break;
		case 30:
			motion_command.translation=0;
			motion_command.rotation=0;
			break;
		case 32:
			motion_command.translation=0.2;
			motion_command.rotation=-0.04;
			break;
		case 60:
			motion_command.translation=0;
			motion_command.rotation=0;
			break;
		case 62:
			motion_command.translation=0.2;
			motion_command.rotation=0.04;
			break;
		case 90:
			motion_command.translation=0;
			motion_command.rotation=0;
			break;
		case 91:
			motion_command.translation=1;
			motion_command.rotation=0;
			break;
		case 92:
			motion_command.translation=0;
			motion_command.rotation=0;
			break;
		case 94:
			motion_command.translation=0;
			motion_command.rotation=1;
			break;
		case 111:
			motion_command.translation=0;
			motion_command.rotation=0;
			break;
		case 113:
			motion_command.translation=1;
			motion_command.rotation=0;
			break;
		case 114:
			motion_command.translation=0;
			motion_command.rotation=0;
			index=0;
			break;
	}
	_motion_command.write(motion_command);

}
void Task::errorHook()
{
    TaskBase::errorHook();
}
void Task::stopHook()
{
    TaskBase::stopHook();
}
void Task::cleanupHook()
{
    TaskBase::cleanupHook();
}
