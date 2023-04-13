//
//  IregularVolumeSources.hh
//  GetIdentifierNumber
//
//  Created by FDQin on 27/01/2023.
//  Email: QinFengdi@outlook.com
//*
//
/// \file IregularVolumeSources.hh
/// \brief Definition of the B1::EventAction class

#ifndef IregularVolumeSources_h
#define IregularVolumeSources_h 1

#include "globals.hh"
#include "G4SystemOfUnits.hh"
#include "Randomize.hh"
#include "G4ThreeVector.hh"
#include "G4LogicalVolume.hh"

/// Event action class
///

class IregularVolumeSources
{
public:
  IregularVolumeSources();

  ~IregularVolumeSources();

  G4ThreeVector GetVertex(G4ThreeVector PLength,
                          G4ThreeVector SourcePosition,
                          G4LogicalVolume* SourceVolume);

private:
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif
