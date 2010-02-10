#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc.exe
CCC=g++.exe
CXX=g++.exe
FC=
AS=as.exe

# Macros
CND_PLATFORM=MinGW-Windows
CND_CONF=Debug
CND_DISTDIR=dist

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=build/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Repere.o \
	${OBJECTDIR}/Image.o \
	${OBJECTDIR}/Objet.o \
	${OBJECTDIR}/Sphere.o \
	${OBJECTDIR}/Rayon.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/Intersection.o \
	${OBJECTDIR}/Scene.o \
	${OBJECTDIR}/Observateur.o \
	${OBJECTDIR}/Matrice4D.o \
	${OBJECTDIR}/Point4D.o \
	${OBJECTDIR}/Couleur.o \
	${OBJECTDIR}/Vecteur4D.o

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	${MAKE}  -f nbproject/Makefile-Debug.mk dist/Debug/MinGW-Windows/propreraywindows.exe

dist/Debug/MinGW-Windows/propreraywindows.exe: ${OBJECTFILES}
	${MKDIR} -p dist/Debug/MinGW-Windows
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/propreraywindows ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/Repere.o: nbproject/Makefile-${CND_CONF}.mk Repere.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Repere.o Repere.cpp

${OBJECTDIR}/Image.o: nbproject/Makefile-${CND_CONF}.mk Image.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Image.o Image.cpp

${OBJECTDIR}/Objet.o: nbproject/Makefile-${CND_CONF}.mk Objet.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Objet.o Objet.cpp

${OBJECTDIR}/Sphere.o: nbproject/Makefile-${CND_CONF}.mk Sphere.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Sphere.o Sphere.cpp

${OBJECTDIR}/Rayon.o: nbproject/Makefile-${CND_CONF}.mk Rayon.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rayon.o Rayon.cpp

${OBJECTDIR}/main.o: nbproject/Makefile-${CND_CONF}.mk main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/Intersection.o: nbproject/Makefile-${CND_CONF}.mk Intersection.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Intersection.o Intersection.cpp

${OBJECTDIR}/Scene.o: nbproject/Makefile-${CND_CONF}.mk Scene.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Scene.o Scene.cpp

${OBJECTDIR}/Observateur.o: nbproject/Makefile-${CND_CONF}.mk Observateur.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Observateur.o Observateur.cpp

${OBJECTDIR}/Matrice4D.o: nbproject/Makefile-${CND_CONF}.mk Matrice4D.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Matrice4D.o Matrice4D.cpp

${OBJECTDIR}/Point4D.o: nbproject/Makefile-${CND_CONF}.mk Point4D.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Point4D.o Point4D.cpp

${OBJECTDIR}/Couleur.o: nbproject/Makefile-${CND_CONF}.mk Couleur.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Couleur.o Couleur.cpp

${OBJECTDIR}/Vecteur4D.o: nbproject/Makefile-${CND_CONF}.mk Vecteur4D.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Vecteur4D.o Vecteur4D.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/Debug
	${RM} dist/Debug/MinGW-Windows/propreraywindows.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
