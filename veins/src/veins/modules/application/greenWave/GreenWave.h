/*
 * GreenWave.h
 *
 *  Created on: 2021Äê1ÔÂ14ÈÕ
 *      Author: Administrator
 */
#pragma once

#include "veins/modules/application/ieee80211p/DemoBaseApplLayer.h"
#include "veins/modules/world/traci/trafficLight/TraCITrafficLightInterface.h"
#include "veins/modules/world/traci/trafficLight/TraCITrafficLightProgram.h"
#include "veins/modules/mobility/traci/TraCICommandInterface.h"

namespace veins {

class VEINS_API GreenWave : public DemoBaseApplLayer {
public:
    void initialize(int stage) override;
protected:
    void handleSelfMsg(cMessage *msg) override;
};

}
