// Interfaces the setup for all of the sensors onboard.

// TC77 - Internal Temperature --
// protocol: SPI
// datasheeet: https://ww1.microchip.com/downloads/aemDocuments/documents/APID/ProductDocuments/DataSheets/20092B.pdf

// returns non-zero on failure
int setup_tc77() {
  return 1
}

// returns the internal temperature of the board 
// in a single floating point value measured in Celsius
float get_internal_temp_tc77() {

}


// NPP-301B-100A - Internal Pressure
// protocol: Analog
// datasheet: https://www.bosch-sensortec.com/media/boschsensortec/downloads/datasheets/bst-bmi323-ds000.pdf

// returns non-zero on failure
int setup_npp_301() {
  // I don't believe there is any requirement for setup
  return 0
}

// returns the internal pressure of the tag 
// in a single floating point value measured in Celsius
float get_internal_pres_npp_301() {
  // we bunged this one up. we connected it wrong. we'll get em next time
  return -1.0
}


// BMI323 - IMU
// protocol: I2C
// SDD set to 0
// datasheet: https://mm.digikey.com/Volume0/opasdata/d220001/medias/docus/2957/BST-BMI323-FL000-00.pdf
// did we get a 6dof when we needed a 9dof IMU?
// damn

// returns non-zero on failure
int setup_bmi323() {
  return 1
}

// requires an array with 6 values
// implementation of the order of values in data_array is still TODO
void get_imu_bmi323(int* data_array) {

}


// BNO055 - IMU
// protocol: I2C
// datasheet: https://www.bosch-sensortec.com/media/boschsensortec/downloads/datasheets/bst-bno055-ds000.pdf

// returns non-zero on failure
int setup_bno055() {
  return 1
}

// requires an array with 9 values
// implementation of the order of values in data_array is still TODO
void setup_bno055(float* data_array) {

}


// DS18B20 - Thermocouple
// protocol: 1-wire
// datasheet: https://mm.digikey.com/Volume0/opasdata/d220001/medias/docus/3786/DFR0198_Web.pdf
// https://wiki.dfrobot.com/Waterproof_DS18B20_Digital_Temperature_Sensor__SKU_DFR0198_

// returns non-zero on failure
int setup_ds18b20() {
  // don't believe this requires any setup
  return 0
}

// returns the external thermocouple temperature in celsius
float get_thermotemp() {

}