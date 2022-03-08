# PREDICTIVE MAINTENANCE OF ELECTRIC CAR BATTERY USING IOT
  # DESCRIPTION
  * Electric vehicle are made up of two main components. BLDC motor as best motor and the battery is used for energy storage device.. The design of the device is necessarily optimized to optimize the use of batteries and is designed to monitor and detect interruptions or damage to the batteries used in electric vehicle. The BMS system parameters used in the design are voltage, current, temperature and battery capacity. In addition, by optimizing the use of the battery, all parameters are managed by the wifi communication.They will be displayed wifi communicate on the Android smart phone and it will check that the vehicle is working and will notify you when the battery is dead or in good condition. 
  # ABSTRACT
   * The battery management system (BMS), what are different parts of it. In this paper, several methods used in battery balancing will be discussed and compared on their advantages & limitations .Among all the conventional methods, how the solar-powered balancing method is most efficient is justified. This method is based on three modes: Load cell -balancing mode, in this mode, the solar panel will balance the battery cells directly. This mode can be used in sunny weather condition and when the vehicle is in running, the discharge rate of the battery is high. The cells with the lowest SOC which is detected by the control unit can be charged by a solar panel. The second mode is Storage balancing mode, this mode is used in rainy or cloudy weather conditions or during the night when the solar panels are not able to generate sufficient power. Then charge stored in the storage cell is passed to the battery module where it charges the cells with lower SOC value. And the third method is Charge balancing mode, Here the battery module is recharged by a plug-in charger. And this method yields an efficiency of the battery module which increases by 2.1 to 3.1%.
   # STATE OF ART
   * In the existing system, we are not aware of     the battery system and its maintenance.It doesn’t have a backup plan when the battery is about to drain.It uses a Bluetooth technology, so there is a specific range limit. Nowadays, people changed their vehicle types from fossil fuel vehicles to electric vehicles. Eco-friendly and save more energy. Electric scooters are made up of two main components. BLDC motor as best motor and the battery is used for energy storage device. Therefore, maintaining the battery life requires the development of monitoring and diagnostic tools. The design of the device is necessarily optimized to optimize the use of batteries and is designed to monitor and detect interruptions or damage to the batteries used in electric scooters. The parameters used in the design are voltage, current, temperature and battery capacity. In addition, by optimizing the use of the battery, all parameters are managed by the CAN (Controller Area Network) protocol. The settings will be displayed on the Android smart phone and it will check that the scooter is working and will notify you when the battery is dead or in good condition. Problems such as overheating and cellular imbalance have occurred. Based on the experimental results, the maximum tension was found to be minimum.

  # REQUIREMENTS
   # HIGH LEVEL REQUIREMENTS
   |HLR ID | DESCRIPTION |
   |-------|----------------|
   |HLR1|This shall balance the load cell|
   |HLR2|This shall balance the storage|
   |HLR3|This shall balance the charge|
   # LOW LEVEL REQUIREMENTS
   |LLR ID| HLR ID| DESCRIPTION|
   |------|-------|------------|
   |LLR1|HLR1|This shall balance the battery cells directly|
   |LLR2|HLR1|This mode shall be used in sunny weather conditions|
   |LLR3|HLR1|The cells with the lowest soc which is detected by the control unit shall be charged by a solar panel|
   |LLR4|HLR2|This mode shall be used in rainy or cloudy weather conditiond | 
   |LLR5|HLR2|THis shall also used during the night when solar panels are not able to generate sufficient power|
   |LLR6|HLR2|This shall pass the charge which is stored in a storage cell to battery,where it charges the cells with lower soc value|
   |LLR7|HLR3|The battery module shall recharged by a plug-in charger| 
# 5W'S & 1H
   ![Colorful Minimalist Linear Steps Circular Diagram (1)](https://user-images.githubusercontent.com/98879001/156941249-5517b536-b0ee-45c1-9a49-a1b093cff821.png)

       
# SWOT ANALYSIS
   ![Beige and Emerald Simple Modern SWOT Research Graph](https://user-images.githubusercontent.com/98879001/156933359-f0e039e5-189e-4420-88d9-70b67d0da6e6.png)
  # BLOCK DIAGRAM 
   # TRANSMITTER
   ![Untitled Workspace (19)](https://user-images.githubusercontent.com/98879001/155832247-b3197a07-b2dc-4b65-aab1-c9215a52508e.png)

   # RECEIVER
   ![Untitled Workspace (20)](https://user-images.githubusercontent.com/98879001/155832256-d4e8c327-cdc2-419c-b348-70bb2bb48897.png)
 # COMPONENTS DESCRIPTION
   # LITHIUM-ION BATTERY
       * A lithium-ion battery is a type of rechargable batteries composed of cells in which lithium ions move from the negative electrode through an electrolyte to the positive electrode during discharge and back when charging.Lithiun-ion batteries use an intercalated lithium compound as the material at the posiotive electrode and typically graphite at the negative electrode.
   # VOLTAGE SENSOR
      * Voltage sensors are wireless tools that can be attached to any number of assests,machinery or equipment.They provide 24/7 monitoring,constantly watching for voltage data that could indicate a problem.Voltage sensors detect magnetic field,electromagnetic fields and measure contact voltage.
   # CURRENT SENSOR
      * A current sensor is a device that detects and converts current to an easily measurable output voltage.which is proportional to the current through the measured  path.
   # RELAY
      * A relay is an electrically operated switch.It consist of a set of operating contact terminals.The switch may have any number of contacts in multiple contacts forms such as make contact,break contact.
   # DISPLAY
     * A display is a computer output surface and projecting mechanism that shows text and often graphic images to the computer user.
   #  DC MOTOR
     * A direct drive motor is a type of electric machine that converts electrical energy into mechanical energy.DC motors take electrical power through direct current ,and convert this energy into mechanical rotation.
   # MICROCONTROLLER
     * Microcontrollers is an integrated circuit that contains a microprocessor along with memory and associated circuits and that controls some or all of the function of an electronic device.
   # LED 
     * Light Emitting diode is a device that produces a light on electrical and electronic equipment.
   # BMS SYSTEM
    * BMS is designed based on device requirements and implementation. The basic theory of the applied technical solution is determined based on device implementation possibility.It is expected that the device design solution approach can compromise between the theory being used.Battery pack was monitored can conditioned by the software and supported by the hardware of BMS.Battery conditions monitored include voltage ,current,and temperature.
# BEHAVIOURAL DIAGRAM 
   ![How it works with your battery (1)](https://user-images.githubusercontent.com/98879001/157048135-d5b4053f-8ad3-44a1-a070-196548a3ebdd.png)


# STRUCTURAL DIAGRAM
  ![Add a CHARGINGsubheading (1)](https://user-images.githubusercontent.com/98879001/157036180-c39201ba-d942-4bde-a34e-e51bed6f1637.png)

  
# FLOW CHART
![Untitled Workspace (22)](https://user-images.githubusercontent.com/98879001/155837491-9fcf5ddf-0668-4c18-bfbb-7d34df9c88ac.png)


   

   
     

