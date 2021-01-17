/*
 * GreenWave.cc
 *
 *  Created on: 2021Äê1ÔÂ14ÈÕ
 *      Author: Administrator
 */

#include "veins/modules/application/greenWave/GreenWave.h"
#include <iterator>
using namespace veins;

Define_Module(veins::GreenWave);

void GreenWave::initialize(int stage)
{
    DemoBaseApplLayer::initialize(stage);
    if (stage == 0)
    {


    }
}



void GreenWave::handleSelfMsg(cMessage *msg)
{
    DemoBaseApplLayer::handleSelfMsg(msg);

    EV << "GreenWave::handleSelfMsg() runs." << endl;

    // get the positions of traffic lights (multiple ID)


    // determine the ID of traffic light just close to me


    // get the state of the traffic light that I am going to meet next


    // determine the switching time of r g y


    // organize my speed according to the state and the distance towards the traffic light -> key step


}
