#ifndef retrieveData_h
#define retrieveData_h


#include <iostream>
#include <VEML6030_h>

using namespace std;

class retrieveData {
public:
  void initSensor();
  void requestData();
  int lux;
private:
  void filterData();
};
