################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Aspirante.cpp \
../src/Cuestionario.cpp \
../src/Importancia.cpp \
../src/LecturaArchivos.cpp \
../src/arreglo.cpp \
../src/arregloMain.cpp \
../src/hash.cpp \
../src/heap.cpp 

OBJS += \
./src/Aspirante.o \
./src/Cuestionario.o \
./src/Importancia.o \
./src/LecturaArchivos.o \
./src/arreglo.o \
./src/arregloMain.o \
./src/hash.o \
./src/heap.o 

CPP_DEPS += \
./src/Aspirante.d \
./src/Cuestionario.d \
./src/Importancia.d \
./src/LecturaArchivos.d \
./src/arreglo.d \
./src/arregloMain.d \
./src/hash.d \
./src/heap.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


