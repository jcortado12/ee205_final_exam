///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author Jordan Cortado <jcortado@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////


class Rectangle : public Shape {
public:
    Rectangle( double newLength, double newWidth ) noexcept;

protected:
    double length;
    double width;

public:
    double getLength() const noexcept ;
    double getWidth() const noexcept ;

    bool isLengthValid();
    bool isWidthValid();
};
