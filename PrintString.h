#pragma once
//
//    FILE: PrintString.h
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.1
// PURPOSE: Class that captures prints into a String 
//    DATE: 2017-12-09
//     URL: https://github.com/RobTillaart/PrintString
//
// 0.1.0    2017-12-09 initial version
// 0.1.1    2020-04-26 added size
//

#include "Print.h"
#include "String.h"

#define PRINTSTRING_VERSION "0.1.1"

class PrintString: public Print
{
public:
  PrintString() {};
  
  size_t write(uint8_t c)
  {
    buffer.concat(char(c));
    return 1;
  }
  
  size_t size()
  {
    return buffer.length();
  }
  
  void clear()
  {
    buffer = "";
  }
 
  String getString() { return buffer; }

private:
  String buffer;
};

// -- END OF FILE --
