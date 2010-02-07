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
CC=gcc
CCC=g++
CXX=g++
FC=
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_CONF=Release
CND_DISTDIR=dist

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=build/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay/Vecteur4D.o \
	${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay/Couleur.o \
	${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay/Rayon.o \
	${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay/Point4D.o \
	${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay/Matrice4D.o \
	${OBJECTDIR}/main.o

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
	${MAKE}  -f nbproject/Makefile-Release.mk dist/Release/GNU-Linux-x86/propreray

dist/Release/GNU-Linux-x86/propreray: ${OBJECTFILES}
	${MKDIR} -p dist/Release/GNU-Linux-x86
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/propreray ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay/Vecteur4D.o: nbproject/Makefile-${CND_CONF}.mk /home/paul/Bureau/Projets/PropreRay/Vecteur4D.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay/Vecteur4D.o /home/paul/Bureau/Projets/PropreRay/Vecteur4D.cpp

${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay/Couleur.o: nbproject/Makefile-${CND_CONF}.mk /home/paul/Bureau/Projets/PropreRay/Couleur.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay/Couleur.o /home/paul/Bureau/Projets/PropreRay/Couleur.cpp

${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay/Rayon.o: nbproject/Makefile-${CND_CONF}.mk /home/paul/Bureau/Projets/PropreRay/Rayon.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay/Rayon.o /home/paul/Bureau/Projets/PropreRay/Rayon.cpp

${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay/Point4D.o: nbproject/Makefile-${CND_CONF}.mk /home/paul/Bureau/Projets/PropreRay/Point4D.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay/Point4D.o /home/paul/Bureau/Projets/PropreRay/Point4D.cpp

${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay/Matrice4D.o: nbproject/Makefile-${CND_CONF}.mk /home/paul/Bureau/Projets/PropreRay/Matrice4D.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/paul/Bureau/Projets/PropreRay/Matrice4D.o /home/paul/Bureau/Projets/PropreRay/Matrice4D.cpp

${OBJECTDIR}/main.o: nbproject/Makefile-${CND_CONF}.mk main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/Release
	${RM} dist/Release/GNU-Linux-x86/propreray

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
