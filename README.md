# IregularVolumeSources
 Geant4 Iregular Volume Radioactive Sources
This work built by Fd Qin, E-mail: Fd.Qin@outlook.com

Using Method:
Take exampleB1 as an example.
Setting Shape1 as the source volume.
Step1: copy the head and source file to the include and src directories;
Step2: add the line "#include IregularVolumeSources" to the PrimaryGeneratorAction.cc source file;
Step3: set the source volume's settings;
Step4: Obtain the vertex of sources by the function of GetVertex;
Step5: fParicleGun->SetParticlePosition(VolumeSourceVertex);

Parameters:
SourceVolume is LogicalVolume of source volumes;
Plegth is Projection length;
SourcePosition is the coordinates of source volumes.
