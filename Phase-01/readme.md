# PHASE-01

## TABLE OF CONTENTS


- [Reserach Papers](https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/tree/master/Phase-01/Research%20Papers) 
- [Weekly Reports](https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/tree/master/Phase-01/Weekly%20Report)
- [Code](https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/tree/master/Phase-01/soil_with_water_pump_NodeMCU)

## INTRODUCTION
Phase 01 of our project focuses on implementing a robust Soil Moisture Monitoring and Irrigation System using IoT technology. In modern agriculture, efficient water management is crucial for optimizing crop growth and resource utilization. However, traditional irrigation methods often lack precision, leading to water wastage and suboptimal plant hydration. To address this challenge, our project integrates advanced IoT components to create a smart irrigation system that adapts to the specific moisture needs of tomato plants.

## PROBLEM STATEMENT
Conventional irrigation methods rely on fixed schedules or manual soil moisture assessment, resulting in overwatering or underwatering scenarios. This inefficiency wastes water and compromises plant health and crop yield. Moreover, sustainable irrigation practices are essential in regions with limited water resources to ensure long-term agricultural viability.

## PROPOSED SOLUTION
Phase 01 of our project proposes a solution that leverages IoT technology to monitor soil moisture levels in real time and automate the irrigation process. We utilize the AB054 Soil Moisture Sensor, a high-precision sensor capable of accurately measuring moisture content in the soil. By interfacing this sensor with the NodeMCU board and a water pump controlled by a relay module, we create an intelligent irrigation system that waters the tomato plants only when necessary, based on the actual moisture readings.

## SYSTEM ARCHITECTURE OVERVIEW
The architecture of our Phase-01 implementation consists of key components such as the Soil Moisture Sensor, NodeMCU microcontroller, Water Pump, Relay Module, and a 9-volt HW Battery for power supply. The NodeMCU board acts as the central controller, receiving soil moisture data from the sensor and triggering the water pump through the relay module as per predefined moisture threshold levels. This automated system reduces water wastage, ensures optimal plant hydration, and promotes sustainable agricultural practices.


##  Tools Used/Implemented

### Hardware:
- AB054 Soil Moisture Sensor
- NodeMCU Board
- 9-Volt HW Battery
- Water Pump
- Relay Module
- Tubing and Water Reservoir

### Software:
- Arduino Integrated Development Environment (IDE)
- Arduino Library for AB054 Sensor
- NodeMCU Programming (Lua or Arduino language)
- Integration with Moisture Reading Logic
- BLYNK Webapp
