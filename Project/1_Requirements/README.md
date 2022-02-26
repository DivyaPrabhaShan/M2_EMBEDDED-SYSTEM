# PREDICTIVE MAINTENANCE OF ELECTRIC CAR BATTERY USING IOT
  # DESCRIPTION
     Electric vehicle are made up of two main components. BLDC motor as best motor and the battery is used for energy storage device.. The design of the device is necessarily optimized to optimize the use of batteries and is designed to monitor and detect interruptions or damage to the batteries used in electric vehicle. The BMS system parameters used in the design are voltage, current, temperature and battery capacity. In addition, by optimizing the use of the battery, all parameters are managed by the wifi communication.They will be displayed wifi communicate on the Android smart phone and it will check that the vehicle is working and will notify you when the battery is dead or in good condition. 

  # REQUIREMENTS
   # HIGH LEVEL REQUIREMENTS
     |HLR ID | DESCRIPTION |
     |----|----------------|
     |HLR1|It shall balance the load cell|
     |HLR2|It shall balance the storage|
     |HLR3|It shall balance the charge|
   # LOW LEVEL REQUIREMENTS
     |LLR ID| HLR ID| DESCRIPTION|
     |------|-------|------------|
     |LLR1|HLR1|It shall balance the battery cells directly|
     |LLR2|HLR1|This mode shall be used in sunny weather conditions|
     |LLR3|HLR1|The cells with the lowest soc which is detected by the control unit shall be charged by a solar panel|
     |LLR4|HLR2|This mode shall be used in rainy or cloudy weather conditiond | 
     |LLR5|HLR2|THis shall also used during the night when solar panels are not able to generate sufficient power|
     |LLR6|HLR2|It shall pass the charge which is stored in a storage cell to battery,where it charges the cells with lower soc value|
     |LLR7|HLR3|The battery module shall recharged by a plug-in charger| 
       
