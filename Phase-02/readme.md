# Phase-02: Nutrient Monitoring and Pest Detection



## INTRODUCTION
Phase 02 of the project focuses on enhancing the capabilities of the system by incorporating nutrient monitoring and pest detection components.

**1. Nutrient Monitoring:** This aspect aims to monitor and manage the nutrient levels in the soil, specifically focusing on the NPK (Nitrogen, Phosphorus, Potassium) nutrients crucial for plant growth. The system will include sensors to detect these nutrient levels in real-time. When the NPK levels fall below a predefined threshold value, the system will automatically activate a pump to supply the necessary nutrients to the soil. This real-time monitoring and automated nutrient supplementation ensure optimal nutrient availability for healthy plant growth and maximum yield.

**2. Pest Detection:** The pest detection component utilizes advanced technology, specifically an InceptionV3-based Convolutional Neural Network (CNN) model. This model is trained to identify common pests and diseases that affect tomato plants. The system integrates a camera module capable of capturing high-resolution images of the plants. These images are then processed by the InceptionV3 model, which can accurately detect and classify pests and diseases based on visual patterns and features.

**3. InceptionV3-based CNN Model:** InceptionV3 is a deep learning architecture known for its excellent performance in image recognition tasks. It can distinguish between various types of pests, such as aphids, whiteflies, and leaf miners, as well as common diseases like blight and wilt.

**4.  Alert System:** Upon detecting pests or diseases, the system triggers an alert mechanism to notify the user immediately. Notifications can be sent via the Blynk mobile app, email, or other communication channels, ensuring timely intervention to prevent further damage to the plants.

## PROBLEM STATEMENT
The challenges in modern agriculture, especially concerning tomato plants, encompass inefficient nutrient management and pest-related crop losses. Conventional methods frequently fall short in terms of precision and timely detection, resulting in diminished crop yields and compromised quality.

**1. Inefficient Nutrient Management:** Traditional approaches to nutrient management in tomato cultivation often rely on generalized fertilization schedules rather than precise, real-time monitoring of nutrient levels. This can lead to over-fertilization, causing nutrient imbalances and environmental pollution, or under-fertilization, resulting in nutrient deficiencies and reduced plant vigor. Inefficient nutrient management practices contribute to suboptimal growth, lower fruit quality, and decreased overall yield.

**2. Pest-Related Crop Losses:** Pests and diseases pose significant threats to tomato plants, affecting both yield and quality. Conventional pest management techniques may involve the indiscriminate use of pesticides, leading to environmental concerns, pesticide resistance, and potential harm to beneficial organisms. Additionally, delayed detection of pests and diseases can result in substantial crop losses before appropriate interventions are implemented.

**3. Lack of Precision and Timely Detection:** One of the fundamental challenges is the lack of precision and timely detection in managing nutrient levels and detecting pests and diseases. Conventional methods often rely on visual inspection or periodic soil testing, which may not capture subtle changes or early signs of nutrient deficiencies or pest infestations. This delay in detection hampers the ability to take proactive measures, leading to reactive and less effective interventions.

**4. Reduced Crop Yields and Quality:** The combined impact of inefficient nutrient management and pest-related losses ultimately translates into reduced crop yields and compromised quality. This not only affects the economic viability of tomato cultivation but also contributes to food insecurity and sustainability challenges in agriculture.
   
## PROPOSED SOLUTION

The solution for addressing the challenges in modern agriculture, specifically for tomato plants, involves integrating advanced technologies for nutrient management and pest control:

**1. Automated Nutrient Delivery:** The system incorporates NPK sensors that continuously monitor the nutrient levels in the soil. This real-time data is analyzed to determine if the NPK levels fall below optimal thresholds. In response, a nutrient pump system is automatically activated to deliver the required nutrients to the soil. This automated approach ensures that tomato plants receive the right amount of nutrients precisely when needed, improving growth, yield, and overall plant health.

**2. Pest and Disease Detection:** The solution utilizes a sophisticated InceptionV3-based Convolutional Neural Network (CNN) model for pest and disease detection. High-resolution images of tomato plants are captured using a camera module, and these images are processed by the CNN model. The model is trained to recognize and classify various pests, such as aphids, whiteflies, and diseases like blight and wilt. Early detection of pests and diseases enables proactive pest control measures, minimizing crop losses and maintaining plant health.

**3. Enhanced Proactive Pest Control:** By integrating the InceptionV3-based CNN model, the system enables proactive pest control measures. Upon detecting pests or diseases, the system triggers alerts to notify farmers or gardeners promptly. These alerts allow for timely intervention, such as targeted pesticide application or cultural practices, to prevent pest infestations from spreading and causing significant damage to tomato crops. Proactive pest control measures help maintain crop productivity and reduce reliance on reactive, less effective pest management methods.


# SOIL NUTRIENTS MANAGEMENT

The Soil Nutrients Detection system leverages advanced sensors and microcontrollers to provide real-time monitoring and management of essential soil nutrients, ensuring optimal growth conditions for tomato plants.

## System Components

- **NPK Sensor**: Measures levels of Nitrogen (N), Phosphorus (P), and Potassium (K) in the soil.
- **Microcontrollers**: Arduino Uno and NodeMCU (ESP8266)
- **Communication Module**: RS485 for data conversion
- **User Interface**: Blynk App


## Functionality

### Nutrient Monitoring
- **Data Collection**: The NPK sensor collects data on soil nutrient levels.
- **Data Transmission**: The RS485 module converts sensor data to hexadecimal format and sends it to the Arduino Uno.
- **Data Processing**: The Arduino Uno transmits nutrient data to the NodeMCU and an LCD screen for real-time display.
- **Remote Monitoring**: The NodeMCU sends data to the Blynk app, allowing users to monitor soil nutrient levels remotely.

### Nutrient Management
- **Customized Ratios**: The system recommends NPK ratios tailored to different growth phases of tomato plants.
  - **Vegetative Growth (0-6 weeks)**: 20 Nitrogen, 10 Phosphorus, 10 Potassium
  - **Fruit Development (6-8 weeks)**: 10 Nitrogen, 20 Phosphorus, 20 Potassium
  - **Ripening (8-10 weeks)**: 5 Nitrogen, 10 Phosphorus, 15 Potassium
- **Real-time Alerts**: Users receive notifications about nutrient levels and required adjustments via the Blynk app.

## Results

The integration of the NPK sensor with the Arduino Uno and NodeMCU provides accurate, real-time monitoring of soil nutrient levels. The Blynk app interface enhances user interaction, making it easier to manage nutrient supplementation strategies for optimal plant growth.

<img src="https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/7ecd5f51-50be-401e-a616-ba2fd9e58eec" alt="Soil-moisture Setup" width="400">

Fig:  Soil nutrients monitoring setup  

<img src="https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/fa532afb-e95a-4eb5-80d0-01910e9ccc27" alt="Soil-nutrients in blynk app" width="400">

Fig:  Nutrient level in soil and Ratios of NPK at different growth phases in Blynk app.

# PEST AND DISEASE DETECTION

By integrating NPK sensors and a nutrient pump system for automated nutrient delivery, along with an InceptionV3-based CNN model for pest and disease detection, the solution enhances precision, efficiency, and proactive measures in nutrient management and pest control for tomato cultivation.

## System Components

- **Camera Module**
- **Microcontroller**: NodeMCU (ESP8266)
- **Machine Learning Model**: Inception V3-based Convolutional Neural Network (CNN)
- **Notification System**: Twilio API for SMS alerts
- **Automation App**: MacroDroid
- **Cloud Storage**: Google Drive
- **File Monitoring**: Watchdog Library

## Functionality

### Image Capture
- **Automated Capture**: The MacroDroid app schedules regular image captures of tomato plants using the camera module.
- **Data Storage**: Captured images are automatically stored in a dedicated folder on Google Drive for easy access and synchronization.

### Image Processing
- **File Monitoring**: The Watchdog library continuously monitors the Google Drive folder for new images.
- **Processing Trigger**: When a new image is detected, the machine learning code is triggered to process the image data.
- **Pest and Disease Detection**: The Inception V3-based CNN model, trained to recognize common pests and diseases, analyzes the images to identify any issues.

### Notification
- **Real-time Alerts**: Upon detection of pests or diseases, the system generates a notification message.
- **SMS Alerts**: The Twilio API sends an SMS notification to the user, providing details about the detected issue for immediate action.

## Detected Pests and Diseases

1. Bacterial Spot
2. Early Blight
3. Late Blight
4. Leaf Mold
5. Septoria Leaf Spot
6. Spider Mites
7. Target Spot
8. Tomato Yellow Leaf Curl Virus
9. Tomato Mosaic Virus

## Results

### Accuracy and Efficiency
- The trained CNN model achieved an accuracy rate of 90% for training data and over 87% during validation, ensuring reliable detection.
- High accuracy in pest and disease identification minimizes false positives and negatives, providing dependable information for decision-making.

### Proactive Management
- **Timely Interventions**: Early detection allows farmers to take prompt action, such as applying treatments or pest control measures, reducing potential crop losses.
- **Resource Optimization**: Automated image capture and processing streamline the workflow, reducing manual labor and allowing farmers to focus on strategic tasks.

  <img src="https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/c9857089-1d54-448d-8c4a-64fcdea87049" alt="Image" width="600">

Fig:  The Image is processed and the result is sent to the user(s)

<img src="https://github.com/Deepak-B-G/Smart_Tomato_Cultivation/assets/97933847/1569fe52-04be-4790-9482-cb653bef6dd6" alt="Pest-Detection Twilio output" width="400">

Fig: The outcome of the predicted disease is sent to the user via SMS.
