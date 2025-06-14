#ifndef DEFINES_H
#define DEFINES_H

/////////////////////////////////////////////////////////////////////////
//
//		File: defines.h
//
//		Author: Mat Buckland
//
//		Desc: defines for the TSP
//
/////////////////////////////////////////////////////////////////////////


#define WINDOW_WIDTH		800
#define WINDOW_HEIGHT		800

#define NUM_CITIES			1000
#define AREA_RADIUS			350
#define CITY_SIZE			  2
				
#define	MUTATION_RATE		0.2
#define	CROSSOVER_RATE	0.7
#define	POP_SIZE			  500
#define ELITE_SIZE        13

//used as cT in CgaTSP::AlternativeTournamentSelection
#define CTOURNAMENT     0.75

//number of genomes to randomly choose and compare in
//standard tournament selection
#define NUM_TO_COMPARE  5


//used to rectify precision errors
#define EPSILON				0.000001

//used in Boltzmann selection
#define BOLTZMANN_MIN_TEMP    1
#define BOLTZMANN_DT          0.05

#endif