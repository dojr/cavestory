################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cavestory.cpp \
../src/game.cpp \
../src/graphics.cpp \
../src/input.cpp 

OBJS += \
./src/cavestory.o \
./src/game.o \
./src/graphics.o \
./src/input.o 

CPP_DEPS += \
./src/cavestory.d \
./src/game.d \
./src/graphics.d \
./src/input.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


