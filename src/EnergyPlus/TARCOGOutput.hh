// EnergyPlus, Copyright (c) 1996-2020, The Board of Trustees of the University of Illinois,
// The Regents of the University of California, through Lawrence Berkeley National Laboratory
// (subject to receipt of any required approvals from the U.S. Dept. of Energy), Oak Ridge
// National Laboratory, managed by UT-Battelle, Alliance for Sustainable Energy, LLC, and other
// contributors. All rights reserved.
//
// NOTICE: This Software was developed under funding from the U.S. Department of Energy and the
// U.S. Government consequently retains certain rights. As such, the U.S. Government has been
// granted for itself and others acting on its behalf a paid-up, nonexclusive, irrevocable,
// worldwide license in the Software to reproduce, distribute copies to the public, prepare
// derivative works, and perform publicly and display publicly, and to permit others to do so.
//
// Redistribution and use in source and binary forms, with or without modification, are permitted
// provided that the following conditions are met:
//
// (1) Redistributions of source code must retain the above copyright notice, this list of
//     conditions and the following disclaimer.
//
// (2) Redistributions in binary form must reproduce the above copyright notice, this list of
//     conditions and the following disclaimer in the documentation and/or other materials
//     provided with the distribution.
//
// (3) Neither the name of the University of California, Lawrence Berkeley National Laboratory,
//     the University of Illinois, U.S. Dept. of Energy nor the names of its contributors may be
//     used to endorse or promote products derived from this software without specific prior
//     written permission.
//
// (4) Use of EnergyPlus(TM) Name. If Licensee (i) distributes the software in stand-alone form
//     without changes from the version obtained under this License, or (ii) Licensee makes a
//     reference solely to the software portion of its product, Licensee must refer to the
//     software as "EnergyPlus version X" software, where "X" is the version number Licensee
//     obtained under this License and may not use a different name for the software. Except as
//     specifically required in this Section (4), Licensee shall not use in a company name, a
//     product name, in advertising, publicity, or other promotional activities any name, trade
//     name, trademark, logo, or other designation of "EnergyPlus", "E+", "e+" or confusingly
//     similar designation, without the U.S. Department of Energy's prior written consent.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
// AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#ifndef TARCOGOutput_hh_INCLUDED
#define TARCOGOutput_hh_INCLUDED

// ObjexxFCL Headers
#include <ObjexxFCL/Array2A.hh>

// EnergyPlus Headers
#include <EnergyPlus/EnergyPlus.hh>

namespace EnergyPlus {

namespace TARCOGOutput {

    // Data
    // variables:
    // bi...Debug files handles:
    // character(len=1000) :: DebugDir
    extern std::string DBGD;
    extern std::string FileMode;
    extern std::string FilePosition;
    extern bool WriteDebugOutput;
    extern int DebugMode;
    extern int winID;
    extern int iguID;

    extern int InArgumentsFile;
    extern int OutArgumentsFile;
    extern int WINCogFile;

    // Intermediate debug files
    extern int IterationCSVFileNumber;
    extern int TarcogIterationsFileNumber;

    extern std::string IterationCSVName;

    // integer, parameter :: IterationHHAT = 102
    // character(len=1000)    :: IterationHHATName = 'IterationHHAT.csv'

    extern std::string WinCogFileName;
    // character(len=1000)    :: SHGCFileName = 'test.w7'
    extern std::string DebugOutputFileName;

    extern std::string const VersionNumber;
    extern std::string const VersionCompileDateCC;

    // Functions

    void WriteInputArguments(Real64 const tout,
                             Real64 const tind,
                             Real64 const trmin,
                             Real64 const wso,
                             int const iwd,
                             Real64 const wsi,
                             Real64 const dir,
                             Real64 const outir,
                             int const isky,
                             Real64 const tsky,
                             Real64 const esky,
                             Real64 const fclr,
                             Real64 const VacuumPressure,
                             Real64 const VacuumMaxGapThickness,
                             const Array1D<int> &ibc,
                             Real64 const hout,
                             Real64 const hin,
                             int const standard,
                             int const ThermalMod,
                             Real64 const SDScalar,
                             Real64 const height,
                             Real64 const heightt,
                             Real64 const width,
                             Real64 const tilt,
                             Real64 const totsol,
                             int const nlayer,
                             const Array1D<int> &LayerType,
                             const EPVector<Real64> &thick,
                             const EPVector<Real64> &scon,
                             const EPVector<Real64> &asol,
                             const EPVector<Real64> &tir,
                             const EPVector<Real64> &emis,
                             const EPVector<Real64> &Atop,
                             const EPVector<Real64> &Abot,
                             const EPVector<Real64> &Al,
                             const EPVector<Real64> &Ar,
                             const EPVector<Real64> &Ah,
                             const EPVector<Real64> &SlatThick,
                             const EPVector<Real64> &SlatWidth,
                             const EPVector<Real64> &SlatAngle,
                             const EPVector<Real64> &SlatCond,
                             const EPVector<Real64> &SlatSpacing,
                             const EPVector<Real64> &SlatCurve,
                             const Array1D<int> &nslice,
                             const EPVector<Real64> &LaminateA,
                             const EPVector<Real64> &LaminateB,
                             const EPVector<Real64> &sumsol,
                             const EPVector<Real64> &gap,
                             const EPVector<Real64> &vvent,
                             const EPVector<Real64> &tvent,
                             const EPVector<Real64> &presure,
                             const Array1D<int> &nmix,
                             Array2A_int const iprop,
                             Array2A<Real64> const frct,
                             Array2A<Real64> const xgcon,
                             Array2A<Real64> const xgvis,
                             Array2A<Real64> const xgcp,
                             const EPVector<Real64> &xwght);

    void WriteModifiedArguments(int const InArgumentsFile,
                                std::string const &DBGD,
                                Real64 const esky,
                                Real64 const trmout,
                                Real64 const trmin,
                                Real64 const ebsky,
                                Real64 const ebroom,
                                Real64 const Gout,
                                Real64 const Gin,
                                int const nlayer,
                                const Array1D<int> &LayerType,
                                const Array1D<int> &nmix,
                                Array2A<Real64> const frct,
                                const EPVector<Real64> &thick,
                                const EPVector<Real64> &scon,
                                const EPVector<Real64> &gap,
                                Array2A<Real64> const xgcon,
                                Array2A<Real64> const xgvis,
                                Array2A<Real64> const xgcp,
                                const EPVector<Real64> &xwght);

    void WriteOutputArguments(int &OutArgumentsFile,
                              std::string const &DBGD,
                              int const nlayer,
                              Real64 const tamb,
                              const EPVector<Real64> &q,
                              const EPVector<Real64> &qv,
                              const EPVector<Real64> &qcgas,
                              const EPVector<Real64> &qrgas,
                              const EPVector<Real64> &theta,
                              const EPVector<Real64> &vfreevent,
                              const EPVector<Real64> &vvent,
                              const EPVector<Real64> &Keff,
                              const EPVector<Real64> &ShadeGapKeffConv,
                              Real64 const troom,
                              Real64 const ufactor,
                              Real64 const shgc,
                              Real64 const sc,
                              Real64 const hflux,
                              Real64 const shgct,
                              Real64 const hcin,
                              Real64 const hrin,
                              Real64 const hcout,
                              Real64 const hrout,
                              const EPVector<Real64> &Ra,
                              const EPVector<Real64> &Nu,
                              const Array1D<int> &LayerType,
                              const EPVector<Real64> &Ebf,
                              const EPVector<Real64> &Ebb,
                              const EPVector<Real64> &Rf,
                              const EPVector<Real64> &Rb,
                              Real64 const ebsky,
                              Real64 const Gout,
                              Real64 const ebroom,
                              Real64 const Gin,
                              Real64 const ShadeEmisRatioIn,
                              Real64 const ShadeEmisRatioOut,
                              Real64 const ShadeHcRatioIn,
                              Real64 const ShadeHcRatioOut,
                              Real64 const HcUnshadedIn,
                              Real64 const HcUnshadedOut,
                              const EPVector<Real64> &hcgas,
                              const EPVector<Real64> &hrgas,
                              Real64 const AchievedErrorTolerance,
                              int const NumOfIter);

    void WriteOutputEN673(int &OutArgumentsFile,
                          std::string const &DBGD,
                          int const nlayer,
                          Real64 const ufactor,
                          Real64 const hout,
                          Real64 const hin,
                          const EPVector<Real64> &Ra,
                          const EPVector<Real64> &Nu,
                          const EPVector<Real64> &hg,
                          const EPVector<Real64> &hr,
                          const EPVector<Real64> &hs,
                          int &nperr);

    void WriteTARCOGInputFile(std::string const &VerNum,
                              Real64 const tout,
                              Real64 const tind,
                              Real64 const trmin,
                              Real64 const wso,
                              int const iwd,
                              Real64 const wsi,
                              Real64 const dir,
                              Real64 const outir,
                              int const isky,
                              Real64 const tsky,
                              Real64 const esky,
                              Real64 const fclr,
                              Real64 const VacuumPressure,
                              Real64 const VacuumMaxGapThickness,
                              int const CalcDeflection,
                              Real64 const Pa,
                              Real64 const Pini,
                              Real64 const Tini,
                              const Array1D<int> &ibc,
                              Real64 const hout,
                              Real64 const hin,
                              int const standard,
                              int const ThermalMod,
                              Real64 const SDScalar,
                              Real64 const height,
                              Real64 const heightt,
                              Real64 const width,
                              Real64 const tilt,
                              Real64 const totsol,
                              int const nlayer,
                              const Array1D<int> &LayerType,
                              const EPVector<Real64> &thick,
                              const EPVector<Real64> &scon,
                              const EPVector<Real64> &YoungsMod,
                              const EPVector<Real64> &PoissonsRat,
                              const EPVector<Real64> &asol,
                              const EPVector<Real64> &tir,
                              const EPVector<Real64> &emis,
                              const EPVector<Real64> &Atop,
                              const EPVector<Real64> &Abot,
                              const EPVector<Real64> &Al,
                              const EPVector<Real64> &Ar,
                              const EPVector<Real64> &Ah,
                              const Array1D<int> &SupportPillar,     // Shows whether or not gap have support pillar
                              const EPVector<Real64> &PillarSpacing, // Pillar spacing for each gap (used in case there is support pillar)
                              const EPVector<Real64> &PillarRadius,  // Pillar radius for each gap (used in case there is support pillar)
                              const EPVector<Real64> &SlatThick,
                              const EPVector<Real64> &SlatWidth,
                              const EPVector<Real64> &SlatAngle,
                              const EPVector<Real64> &SlatCond,
                              const EPVector<Real64> &SlatSpacing,
                              const EPVector<Real64> &SlatCurve,
                              const Array1D<int> &nslice,
                              const EPVector<Real64> &gap,
                              const EPVector<Real64> &GapDef,
                              const EPVector<Real64> &vvent,
                              const EPVector<Real64> &tvent,
                              const EPVector<Real64> &presure,
                              const Array1D<int> &nmix,
                              Array2A_int const iprop,
                              Array2A<Real64> const frct,
                              Array2A<Real64> const xgcon,
                              Array2A<Real64> const xgvis,
                              Array2A<Real64> const xgcp,
                              const EPVector<Real64> &xwght,
                              const EPVector<Real64> &gama);

    void FinishDebugOutputFiles(int const nperr);

    void PrepDebugFilesAndVariables(
        std::string const &Debug_dir, std::string const &Debug_file, int const Debug_mode, int const win_ID, int const igu_ID, int &nperr);

} // namespace TARCOGOutput

} // namespace EnergyPlus

#endif
