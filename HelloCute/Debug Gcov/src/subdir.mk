################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Test.cpp 

OBJS += \
./src/Test.o 

CPP_DEPS += \
./src/Test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"D:\Unsaved\work\projectTemplate\HelloCute\cute" -O0 -g3 -Wall -c -fmessage-length=0 -fprofile-arcs -ftest-coverage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


