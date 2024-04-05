# Soil Nutrients Detection

## Introduction
In modern agriculture, precise soil nutrient management is crucial for optimizing crop yields and quality. Soil nutrient deficiencies or imbalances can lead to stunted growth, reduced productivity, and susceptibility to diseases. Therefore, our project focuses on developing an IoT-based system to monitor and manage Nitrogen (N), Phosphorus (P), and Potassium (K) levels in the soil for optimal plant growth and health.

## Problem Statement
Traditional methods of soil nutrient management often rely on manual assessments or fixed schedules, which can result in overuse or underuse of nutrients. This inefficiency leads to nutrient deficiencies or imbalances, impacting plant growth and productivity. Additionally, inadequate nutrient management contributes to environmental pollution and resource wastage, highlighting the need for a more precise and automated approach.

## Proposed Solution
Our proposed solution involves integrating NPK sensors with IoT technology to collect real-time data on soil nutrient levels. By setting threshold values for NPK concentrations and automating nutrient delivery based on these thresholds, we aim to ensure plants receive the right balance of nutrients for optimal growth. This automated system reduces nutrient wastage, promotes sustainable agriculture practices, and enhances crop yield and quality. Additionally, the system utilizes an RS485 module to convert NPK sensor readings into hexadecimal values for efficient data processing.

## System Architecture Overview
The architecture of our Soil Nutrients Detection system includes the following components:
1. **NPK Sensors:** Measure NPK levels in the soil.
2. **NodeMCU Microcontroller:** Controls data acquisition from sensors and nutrient dispensing.
3. **Nutrient Pump:** Dispenses nutrients into the soil based on sensor readings.
4. **RS485 Module:** Converts NPK sensor readings to hexadecimal values for data processing.
5. **Blynk App Interface:** Provides a user-friendly interface for monitoring and adjusting nutrient settings remotely.
6. **Mobile Device:** Accesses the Blynk app for real-time monitoring and control.

## Tools Used/Implemented
- **NPK Sensors:** AB054 Soil Nutrient Sensors
- **Microcontroller:** NodeMCU Board
- **Nutrient Pump:** Water Pump with Relay Module
- **RS485 Module:** Converts sensor readings to hexadecimal format
- **IoT Platform:** Blynk App
- **Programming:** Arduino IDE or Lua for NodeMCU programming

## Diseases Caused by Nutrient Deficiencies
1. **Nitrogen (N) Deficiency Disease:**
   - Definition: Nitrogen deficiency leads to _chlorosis_, where the older leaves turn yellow due to insufficient chlorophyll production. It can result in _stunted growth_ and _reduced fruit development_.
   - Threshold Levels: **Minimum N level should be around 150-200 mg/kg** in the soil to avoid nitrogen deficiency symptoms. Excessive nitrogen levels can lead to imbalanced growth and susceptibility to pests and diseases, so the **maximum threshold is typically around 400-500 mg/kg**.
<img src="https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/7e237fdf-2c20-4638-a9cf-3877948e470f" alt="Image 01" style="width: 30%; height: auto;">
<img src="https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/fd409f98-4cbf-4b2b-905c-89b3ce44d842" alt="Image 02" style="width: 30%; height: auto;">
<img src="https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/1c5b4f0d-63a2-4e84-aacd-6707826c2c1c" alt="Image 03" style="width: 30%; height: auto;">


2. **Phosphorus (P) Deficiency Disease:**
   - Definition: Phosphorus deficiency causes _dark green or purple leaves_, _poor root development_, _delayed fruiting_, and _small, underdeveloped fruits_.
   - Threshold Levels: **Minimum P level should be maintained at around 20-30 mg/kg** to prevent phosphorus deficiency symptoms. Excessive phosphorus levels can inhibit the uptake of other nutrients, so the **maximum threshold is typically around 50-60 mg/kg**.
<div style="display: flex; justify-content: space-around;">
    <img src="https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/77705b78-9d72-4d7a-92a5-64421afdbf2a" alt="Image 05" style="width: 30%; height: auto;">
    <img src="https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/b5d0144d-4f4c-499d-82b5-cfc3b3d4ed50" alt="Image 04" style="width: 30%; height: auto;">
    <img src="https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/35c93346-4260-46ae-adf3-acf8e2570acc" alt="Image 06" style="width: 30%; height: auto;">
</div>



3. **Potassium (K) Deficiency Disease:**
   - Definition: Potassium deficiency leads to _yellowing and browning of leaf margins_ (necrosis), _weak stems and stalks_, _susceptibility to pests and diseases_, and _reduced fruit quality and yield_.
   - Threshold Levels: **Minimum K level should be maintained at around 150-250 mg/kg** to avoid potassium deficiency symptoms. Excessive potassium levels can lead to nutrient imbalances and affect calcium uptake, so the **maximum threshold is typically around 300-400 mg/kg**.
<div style="display: flex; justify-content: space-around;">
    <img src="https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/828a578b-0b88-4624-bb5a-2e373b827bd1" alt="Image 07" style="width: 30%; height: auto;">
    <img src="https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/6a7de487-d0c6-4ec1-8f27-9a7f28452b22" alt="Image 08" style="width: 30%; height: auto;">
    <img src="https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/ccfe95c2-b255-461e-a0c3-4641f81ce794" alt="Image 09" style="width: 30%; height: auto;">
</div>
    

