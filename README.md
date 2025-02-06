# Unit Conversion Program

## Description
This program allows users to convert between various units of measurement. It provides conversions for:
- Kilometers to Miles
- Inches to Feet
- Centimeters to Inches
- Pounds to Kilograms
- Inches to Meters

## Features
- **Multiple Conversion Types**: Convert between kilometers, inches, centimeters, pounds, and more.
- **Accurate Conversion**: Uses standard conversion factors to ensure accurate results.
- **User Input**: Users can select the conversion type and input the value to convert.

## How to Use
1. **Choose a Conversion Type**:
   - Enter `1` for Kilometers to Miles.
   - Enter `2` for Inches to Feet.
   - Enter `3` for Centimeters to Inches.
   - Enter `4` for Pounds to Kilograms.
   - Enter `5` for Inches to Meters.

2. **Enter the Value**: After selecting a conversion type, input the value you want to convert.

3. **View the Result**: The program will display the converted value.

## Example

Enter the conversion type:

1. Kms to Miles
2. Inches to Feet
3. Cms to Inches
4. Pound to Kgs
5. Inches to Meters
Enter the value to convert: 10

Result: 6.21


## Code Overview
The program performs unit conversions by calling specific functions for each type of conversion:
- **kmsToMiles**: Converts kilometers to miles.
- **inchesToFeet**: Converts inches to feet.
- **cmsToInches**: Converts centimeters to inches.
- **poundToKgs**: Converts pounds to kilograms.
- **inchesToMeters**: Converts inches to meters.

It also uses a `switch` statement to select the appropriate conversion function based on user input.

## Requirements
- C Compiler (GCC or any other standard compiler)

## Author
Created by **Diyansi Chaudhary**
