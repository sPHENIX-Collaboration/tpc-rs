/***************************************************************************
 *
 * $Id: StAntiProton.cc,v 1.1 1999/05/14 18:47:18 ullrich Exp $
 *
 * Author: Thomas Ullrich, May 99 (based on Geant4 code, see below) 
 ***************************************************************************
 *
 * The design of the StParticleDefinition class and all concrete
 * classes derived from it is largely based on the design of the 
 * G4ParticleDefinition class from Geant4 (RD44).
 * Although the code is in large parts different (modified or rewritten)
 * and adapted to the STAR framework the basic idea stays the same.
 *
 ***************************************************************************
 *
 * $Log: StAntiProton.cc,v $
 * Revision 1.1  1999/05/14 18:47:18  ullrich
 * Initial Revision
 *
 **************************************************************************/
#include "StAntiProton.hh" 
#include "SystemOfUnits.h"

StAntiProton::StAntiProton(const string  &  aName,  
			   double           mass,     
			   double           width,
			   double           charge,   
			   int              iSpin,
			   int              iParity,
			   int              iConjugation,
			   int              iIsospin,   
			   int              iIsospinZ, 
			   int              gParity,
			   const string  &  pType,
			   int              lepton,
			   int              baryon,
			   int              encoding,
			   bool             stable,
			   double           lifetime)
    : StBaryon(aName, mass, width, charge, iSpin, iParity,
	       iConjugation, iIsospin, iIsospinZ, gParity,
	       pType, lepton, baryon, encoding, stable,
	       lifetime) {/* noop */}

// ......................................................................
// ...                 static member definitions                      ...
// ......................................................................
//     
//    Arguments for constructor are as follows
//               name             mass          width         charge
//             2*spin           parity  C-conjugation
//          2*Isospin       2*Isospin3       G-parity
//               type    lepton number  baryon number   PDG encoding
//             stable         lifetime   
//
StAntiProton StAntiProton::mAntiProton(
        "anti_proton",   0.9382723*GeV,       0.0*MeV,  -1.0*eplus, 
		    1,              +1,             0,         
		    1,              -1,             0,             
	     "baryon",               0,            -1,       -2212,
		 true,            -1.0
);
