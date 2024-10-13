cmake_minimum_required(VERSION 3.27)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled1 main.cpp
        CAddress.cpp
        CPlane.cpp
        CPlane.h
        CFlightInfo.cpp
        CFlightInfo.h
        CCrewMember.cpp
        CCrewMember.h
        CFlightCompany.cpp
        CFlightCompany.h
        CAddress.h
        Flight.cpp
        Flight.h
        Host.cpp
        Host.h
        Host.h
        Pilot.cpp
        Pilot.h)
