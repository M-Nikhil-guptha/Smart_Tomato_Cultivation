
# <p align="center">IoT enhanced tomato plant cultivation with machine learning</p>


## ABSTRACT

The integration of IoT and machine learning in tomato cultivation marks a significant advancement, addressing critical challenges in soil moisture monitoring, nutrient management, and pest detection, which are pivotal for maximizing crop yield and sustainability. Through IoT-enabled sensors like soil moisture and NPK sensors connected to microcontrollers such as NodeMCU and Arduino Uno, real-time data on soil conditions and nutrient levels are gathered, empowering farmers with actionable insights for timely interventions and efficient resource allocation. Key functionalities of this integrated system include dynamic soil moisture detection and regulation, ensuring optimal hydration levels throughout various plant growth stages. Additionally, the system facilitates precise soil nutrient management through NPK sensors and RS485 modules, offering valuable insights for nutrient optimization strategies. Pest detection is enhanced using a camera module and an ML model, enabling accurate identification of diseases and pests, allowing for proactive pest management measures, and contributing to improved crop health and productivity. This holistic approach represents a significant step towards modernizing agricultural practices, emphasizing sustainability, efficiency, and productivity in tomato cultivation. The scalable solutions offered by this integrated system have the potential to enhance overall crop management and contribute significantly to food security initiatives.


## PROBLEM STATEMENT 

The agricultural sector faces significant challenges such as inefficient water management, suboptimal soil nutrient levels, and pest and disease outbreaks. Traditional irrigation methods often lead to overwatering or underwatering, wasting resources and compromising plant health. Manual soil moisture monitoring lacks real-time insights, while nutrient imbalances in nitrogen, phosphorus, and potassium can hinder crop yields and quality. Pest and disease outbreaks are another major concern, as conventional detection methods are time-consuming and can miss early signs, resulting in substantial crop losses. This project aims to integrate advanced technologies for accurate soil moisture monitoring, precise nutrient management, and early pest and disease detection. By leveraging data-driven insights and automation, farmers can optimize resource usage, improve crop resilience, and promote sustainable agricultural practices.


## PROPOSED SOLUTION
Our project leverages IoT and machine learning technologies to address key challenges in tomato cultivation by providing a comprehensive, automated system for soil moisture monitoring, nutrient management, and pest detection.

### Soil Moisture Monitoring and Automated Irrigation
- **AB054 Soil Moisture Sensor:** Continuously measures soil moisture levels, providing real-time data on soil hydration.
- **NodeMCU and Blynk App Integration:** Transmits moisture data to the Blynk app, enabling remote monitoring and automated irrigation control.
- **Water Pump Control:** Automatically activates or deactivates the water pump based on soil moisture thresholds, ensuring optimal hydration and water conservation.

### Nutrient Management
- **NPK Sensor and RS485 Module:** Collects data on nitrogen, phosphorus, and potassium levels in the soil.
- **Arduino Uno and NodeMCU:** Processes and displays nutrient data, providing users with insights into soil nutrient composition.
- **Customized NPK Ratios:** Tailors nutrient management strategies to different growth phases of tomato plants, optimizing nutrient uptake and plant health.

### Pest and Disease Detection
- **Camera Module and MacroDroid App:** Automates image capture of tomato plants at scheduled intervals, reducing manual intervention.
- **Machine Learning with InceptionV3 CNN:** Analyzes captured images to identify pests and diseases accurately.
- **Twilio Integration:** Sends real-time notifications to users about detected pests and diseases, enabling prompt action and reducing crop losses.



## PROOF OF CONCEPT

https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/d8b12562-4ffa-4a4f-a8ed-eefa103689c3


## SYSTEM ARCHITECTURE

![System-Architecture](https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/f7aae4b4-1867-4c5a-96c2-15ee0f1e32ec)


# Project Overview

We have divided the project into two phases to systematically address different aspects of tomato plant cultivation using IoT technology.

## Phase-01: Soil Moisture Management
- [PHASE-01](./Phase-01)

## Phase-02: Soil Nutrients Monitoring and Pest Detection
- [PHASE-02](./Phase-02)

# PHASE-01

## Overview

Phase-01 focuses on the implementation of an automated soil moisture management system. The objective is to maintain optimal soil moisture levels for tomato plants using IoT technology.

## System Components

- *Moisture Sensor*: AB054
- *Microcontroller*: NodeMCU (ESP8266)
- *Relay Module*
- *Water Pump*
- *Power Supply*: 9V HW Battery

## Functionality

The AB054 soil moisture sensor continuously monitors soil moisture levels. The sensor is interfaced with the NodeMCU board, which processes the moisture data. When the moisture level falls below a predefined threshold, the NodeMCU triggers the water pump via the relay module to irrigate the soil. The status of the water pump is monitored and controlled through the Blynk app, providing real-time updates to the user.

## Software Implementation

- *Programming Environment*: Arduino IDE
- *Core Logic*: The NodeMCU is programmed to read moisture levels at regular intervals and control the water pump based on the moisture readings. The data is sent to the Blynk app for remote monitoring.

## Results

The primary goal of Phase-01 is to establish a reliable and automated soil moisture management system, ensuring efficient water usage and optimal growth conditions for tomato plants.

![Soil Moisture Sensor Testing](https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/05432ff1-35a3-4dfe-bb50-2a20ca5e0e6a)
Fig: Testing of the soil moisture sensor with a water source.

<img src="https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/aa0049d7-c42e-4b52-acff-7541cd7e9d37" alt="Soil-moisture in blynk app" width="400">
<br>
Fig: Moisture of soil and status of pump displayed in Blynk app..

# PHASE-02

Phase-02 is divided into two key parts: Soil Nutrients Monitoring and Pest Detection.

## 1. Soil Nutrients Monitoring

### Overview

This phase focuses on monitoring soil nutrient levels, specifically Nitrogen (N), Phosphorus (P), and Potassium (K), to ensure optimal growth and health of tomato plants.0

### System Components

- *NPK Sensor*
- *Microcontroller*: Arduino Uno
- *Communication Module*: RS485
- *LCD Display*
- *NodeMCU (ESP8266) for Data Transmission*

### Functionality

The NPK sensor measures the levels of Nitrogen, Phosphorus, and Potassium in the soil. The data is transmitted to the Arduino Uno via the RS485 module, where it is displayed on an LCD screen. Additionally, the data is sent to the NodeMCU, which relays it to the Blynk app for real-time monitoring and analysis.

### Results

To achieve precise soil nutrient management, facilitating the timely application of fertilizers and improving plant health and yield.

<img src="https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/7ecd5f51-50be-401e-a616-ba2fd9e58eec" alt="Soil-moisture Setup" width="400">

Fig:  Soil nutrients monitoring setup  

<img src="https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/fa532afb-e95a-4eb5-80d0-01910e9ccc27" alt="Soil-nutrients in blynk app" width="400">

Fig:  Nutrient level in soil and Ratios of NPK at different growth phases in Blynk app.


## 2. Pest Detection

### Overview

The pest detection system in our project is designed to identify common pests and diseases affecting tomato plants using advanced machine learning techniques.

### System Components

- **Camera Module**
- **Machine Learning Model**: Inception V3-based Convolutional Neural Network (CNN)
- **Notification System**: Twilio API for SMS alerts

### Functionality

1. **Image Capture**: The camera module captures images of the tomato plants at scheduled intervals, automated using the MacroDroid app.
2. **Image Processing**: The captured images are stored in Google Drive and monitored by the Watchdog library. Upon detecting new images, the machine learning code is triggered to process the images.
3. **Pest and Disease Detection**: The Inception V3-based CNN model analyzes the images to detect various pests and diseases.
4. **Notification**: When a pest or disease is detected, the system sends an SMS notification to the user via the Twilio API, enabling prompt pest management interventions.

### Detected Pests and Diseases

1. Bacterial Spot
2. Early Blight
3. Late Blight
4. Leaf Mold
5. Septoria Leaf Spot
6. Spider Mites
7. Target Spot
8. Tomato Yellow Leaf Curl Virus
9. Tomato Mosaic Virus

### Results

The pest detection system provides a robust mechanism for early and accurate identification of pests and diseases, allowing for timely intervention, minimizing damage, and ensuring the healthy growth of tomato plants. By integrating these functionalities, our smart model aims to enhance the efficiency and effectiveness of tomato cultivation, leveraging IoT and machine learning technologies.


Feel free to reach out for any further clarifications or enhancements!












