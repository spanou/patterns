################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../singleton/QSingletonTemplate.cpp \
../singleton/singleton.cpp 

OBJS += \
./singleton/QSingletonTemplate.o \
./singleton/singleton.o 

CPP_DEPS += \
./singleton/QSingletonTemplate.d \
./singleton/singleton.d 


# Each subdirectory must supply rules for building sources it contributes
singleton/%.o: ../singleton/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


