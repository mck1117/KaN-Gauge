
const int BASE_CAN_ID = 512;    // base ID in ECU broadcast

// Data structure
struct sensorData{
  String dataName;
  String units;
  float scaleMultiplier;
  int offset;
  float scaledValue;
  float minimum;
  float maximum;
  int canID;
  int alertHigh;
  int alertLow;
  String nameShort;
  int dataType;
};


sensorData test = {
  "Test Data", // Name
  "%@#",    // Units
  1,  // Multiplier for scaling
  0,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  100, //Maximum Value
  (1),  //Address
  90, //Alert High
  10,  // Alert Low
  "tst"
};

// -- ID 512 --
sensorData warningStatus= {
  "Warning", // Name
  "",    // Units
  1,  // Multiplier for scaling
  0,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  100, //Maximum Value
  (BASE_CAN_ID + 0),  //Address
  0,
  0,
  "wrn"
};

int warningCounter;
int lastError;
int revLimit;
int mainRelay;
int fuelPump;
int checkEngine;
int egoHeater;

// -- ID 513 --

sensorData rpm = {
  "RPM", // Name
  "",    // Units
  1,  // Multiplier for scaling
  0,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  7000, //Maximum Value
  (BASE_CAN_ID + 1),  //Address
  6800,
  -100,
  "rpm",
  1
};

sensorData ignitionTiming = {
  "Ign Timing", // Name
  "o",    // Units
  0.02,  // Multiplier for scaling
  0,  // Data Offset
  0,  // Scaled value
  -35,  // Minimum Value
  35, //Maximum Value
  (BASE_CAN_ID + 1), //Address
  50,
  -50,
  "ign"
};

sensorData injectorDuty = {
  "Injector Duty", // Name
  "%",    // Units
  0.5,  // Multiplier for scaling
  0,  // Data Offset
  0,  // Recieved value
  0,  // Minimum Value
  100, //Maximum Value
  (BASE_CAN_ID + 1),  //Address
  90,
  -100,
  "inj",
  1
};



  sensorData vss_mph = {
    "Speed", // Name
    "mph",    // Units
    0.6213711922,  // Multiplier for scaling
    0,  // Data Offset
    0,  // Recieved value
    0,  // Minimum Value
    120, //Maximum Value
    (BASE_CAN_ID + 1),  //Address
    255,
    -255,
    "spd",
    1
  };

  sensorData vss = {
    "Speed", // Name
    "kph",    // Units
    1,  // Multiplier for scaling
    0,  // Data Offset
    0,  // Recieved value
    0,  // Minimum Value
    255, //Maximum Value
    (BASE_CAN_ID + 1),  //Address
    255,
    -255,
    "spd",
    1
  };

// -- ID 514 --

sensorData accelerator = {
  "Accel", // Name
  "%",    // Units
  0.01,  // Multiplier for scaling
  0,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  100, //Maximum Value
  (BASE_CAN_ID + 2),  //Address
  100,
  -100,
  "acc",
  1
  
};

sensorData throttle1 = {
  "Throttle 1", // Name
  "%",    // Units
  0.01,  // Multiplier for scaling
  0,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  100, //Maximum Value
  (BASE_CAN_ID + 2),  //Address
  100,
  0,
  "tb1",
  1
};

sensorData throttle2 = {
  "Throttle 2", // Name
  "%",    // Units
  0.01,  // Multiplier for scaling
  0,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  100, //Maximum Value
  (BASE_CAN_ID + 2),  //Address
  100,
  -100,
  "tb2",
  1
};

// -- ID 515 --


sensorData manifoldPressure_psi = {
  "MAP", // Name
  "psi",  // Units
  ((0.033333)* 0.1450377377),  // Multiplier for scaling
  0,  // Scaled value
   0,  // Data Offset
  0,  // Minimum Value
  25, //Maximum Value
  (BASE_CAN_ID + 3), // Address
  999,
  -999,
  "man",
  0
};


sensorData manifoldPressure = {
  "MAP", // Name
  "kpa",  // Units
  (0.033333),  // Multiplier for scaling
  0,  // Scaled value
  0,  // Data Offset
  0,  // Minimum Value
  250, //Maximum Value
  (BASE_CAN_ID + 3), // Address
  999,
  -999,
  "man",
  0
};


sensorData coolantTemperature_f = {
  "CLT", // Name
  "F",  // Units
  1.8,  // Multiplier for scaling
  (-40+32),  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  120, //Maximum Value
  (BASE_CAN_ID + 3), // Address
  110,
  50,
  "clt",
  1
};

sensorData intakeTemperature_f = {
  "IAT", // Name
  "F",  // Units
  1.8,  // Multiplier for scaling
  (-40+32),  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  55, //Maximum Value
  (BASE_CAN_ID + 3), // Address 
  100,
  -100,
  "iat",
  1
};

sensorData coolantTemperature = {
  "CLT", // Name
  "C",  // Units
  1,  // Multiplier for scaling
  -40,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  120, //Maximum Value
  (BASE_CAN_ID + 3), // Address
  110,
  50,
  "clt",
  1
};

sensorData intakeTemperature = {
  "IAT", // Name
  "C",  // Units
  1,  // Multiplier for scaling
  -40,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  55, //Maximum Value
  (BASE_CAN_ID + 3), // Address 
  100,
  -100,
  "iat",
  1
};


sensorData auxTemp1 = {
  "Aux 1", // Name
  "C",  // Units
  1,  // Multiplier for scaling
  -40,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  200, //Maximum Value
  (BASE_CAN_ID + 3), // Address 
  100,
  10,
  "at1",
  1
};

sensorData auxTemp1_f = {
  "Aux 1", // Name
  "C",  // Units
  1.8,  // Multiplier for scaling
  (-40+32),  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  200, //Maximum Value
  (BASE_CAN_ID + 3), // Address 
  100,
  10,
  "at1",
  1
};

sensorData auxTemp2 = {
  "Aux 2", // Name
  "C",  // Units
  1,  // Multiplier for scaling
  -40,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  200, //Maximum Value
  (BASE_CAN_ID + 3), // Address 
  100,
  10,
  "at2",
  1
};

sensorData auxTemp2_f = {
  "Aux 2", // Name
  "C",  // Units
  1.8,  // Multiplier for scaling
  -40+32,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  200, //Maximum Value
  (BASE_CAN_ID + 3), // Address 
  100,
  10,
  "at2",
  1
};

sensorData mcuTemp = {
  "MCU", // Name
  "C",  // Units
  1,  // Multiplier for scaling
  -40,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  200, //Maximum Value
  (BASE_CAN_ID + 3), // Address 
  80,
  1000,
  "mcu",
  1
};

sensorData fuel = {
  "Fuel", // Name
  "%",  // Units
  0.5,  // Multiplier for scaling
  0,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  100, //Maximum Value
  (BASE_CAN_ID + 3), // Address 
  200,
  20,
  "ful",
  1
};

// -- ID 516 --
sensorData afr = {
  "AFR", // Name
  "",  // Units
  0.001,  // Multiplier for scaling
   0,  // Data Offset
  0,  // Scaled value
  10, // Mimumum Value
  20,  // Maximum Value
  (BASE_CAN_ID + 4), // Address
  20,
  10,
  "afr",
  0 
};


sensorData lambda = {
  "Lambda", // Name
  "",  // Units
  ((0.001)*(1/14.7)),  // Multiplier for scaling
   0,  // Data Offset
  0,  // Scaled value
  0.8, // Mimumum Value
  1.2,  // Maximum Value
  (BASE_CAN_ID + 4), // Address
  20,
  10,
  "lam",
  0 
};

sensorData oilPressure_psi = {
  "Oil", // Name
  "psi",  // Units
  (0.033333) * 0.1450377377,  // Multiplier for scaling
   0,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  100, //Maximum Value
  (BASE_CAN_ID + 4), // Address
  999,
  -999,
  "oil",
  0 
};


sensorData oilPressure = {
  "Oil", // Name
  "kpa",  // Units
  (0.033333),  // Multiplier for scaling
   0,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  100, //Maximum Value
  (BASE_CAN_ID + 4), // Address
  999,
  -999,
  "oil",
  0 
};


sensorData vvtPosition = {
  "VVT", // Name
  "deg",  // Units
  0.02,  // Multiplier for scaling
   0,  // Data Offset
  0,  // Scaled value
  -50,  // Minimum Value
  50, //Maximum Value
  (BASE_CAN_ID + 4), // Address
   100,
   -100,
   "vvt",
   0
};

sensorData batteryVoltage = {
  "Battery", // Name
  "V",  // Units
  0.001,  // Multiplier for scaling
   0,  // Data Offset
  0,  // Scaled value
  8,  // Minimum Value
  16, //Maximum Value
  (BASE_CAN_ID + 4), // Address 
  15,
  11,
  "bat",
  0
};

// -- ID 517 --

sensorData airMass = {
  "airMass", // Name
  "mg",  // Units
  1,  // Multiplier for scaling
  0,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  1000, //Maximum Value
  (BASE_CAN_ID + 5), // Address
  9999,
  -9999,
  "air",
};

sensorData estimatedAirflow = {
  "Est Air", // Name
  "kg/h",  // Units
  0.01,  // Multiplier for scaling
  0,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  100, //Maximum Value
  (BASE_CAN_ID + 5), // Address 
    999,
  -999,
  "air" 
};

sensorData injectorPulse = {
  "Injector", // Name
  "ms",  // Units
  0.003,  // Multiplier for scaling
  0,  // Data Offset
  0,  // Scaled value
  0,  // Minimum Value
  100, //Maximum Value
  (BASE_CAN_ID + 5), // Address 
    999,
  -999,
  "inj" 
};
