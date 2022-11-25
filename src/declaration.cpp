#include "main.h"
#include "pros/motors.h"

// Controller
pros::Controller controller(pros::E_CONTROLLER_MASTER);

// Drivetrain
pros::Motor frontLeft(2, pros::E_MOTOR_GEAR_GREEN, true);
pros::Motor frontRight(3, pros::E_MOTOR_GEAR_GREEN, false);
pros::Motor backLeft(4, pros::E_MOTOR_GEAR_GREEN, true);
pros::Motor backRight(5, pros::E_MOTOR_GEAR_GREEN, false);

// Intake
pros::Motor intake(6, pros::E_MOTOR_GEAR_GREEN, true);

// Flywheel
pros::Motor flywheel(7, pros::E_MOTOR_GEAR_BLUE, false);

// Roller
pros::Motor roller(12, pros::E_MOTOR_GEAR_GREEN, false);