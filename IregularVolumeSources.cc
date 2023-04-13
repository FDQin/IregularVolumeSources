//
//  IregularVolumeSources.cc
//  GetIdentifierNumber
//
//  Created by FDQin on 27/01/2023.
//  Email: QinFengdi@outlook.com
//*******************************************************************
//
//
/// \file IregularVolumeSources.cc
/// \brief Implementation of the IregularVolumeSources class

#include "IregularVolumeSources.hh"
#include "G4SystemOfUnits.hh"
#include "G4ThreeVector.hh"
#include "G4LogicalVolume.hh"
#include "geomdefs.hh"
#include "G4VSolid.hh"

IregularVolumeSources::IregularVolumeSources()
{
}

IregularVolumeSources::~IregularVolumeSources()
{
}

G4ThreeVector IregularVolumeSources::GetVertex(G4ThreeVector PLength,
                                               G4ThreeVector SourcePosition,
                                               G4LogicalVolume *SourceVolume)

{
    G4double PlengthX = PLength(0), X0 = SourcePosition(0);
    G4double PlengthY = PLength(1), Y0 = SourcePosition(1);
    G4double PlengthZ = PLength(2), Z0 = SourcePosition(2);

    EInside XXX(kOutside);

    while (XXX == 0)
    {
      G4double Vx = 2 * PlengthX * (G4UniformRand() - 0.5);
      G4double Vy = 2 * PlengthY * (G4UniformRand() - 0.5);
      G4double Vz = 2 * PlengthZ * (G4UniformRand() - 0.5);
      G4ThreeVector Vertex = G4ThreeVector(Vx, Vy, Vz);
      XXX = SourceVolume->GetSolid()->Inside(G4ThreeVector(Vx, Vy, Vz));
      if (XXX == 2)
      {
        return G4ThreeVector(Vx+X0, Vy+Y0, Vz+Z0);
      }
    }
}