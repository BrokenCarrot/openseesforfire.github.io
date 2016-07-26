/* ****************************************************************** **
**    OpenSees - Open System for Earthquake Engineering Simulation    **
**          Pacific Earthquake Engineering Research Center            **
**                                                                    **
**                                                                    **
** (C) Copyright 1999, The Regents of the University of California    **
** All Rights Reserved.                                               **
**                                                                    **
** Commercial use of this program without express permission of the   **
** University of California, Berkeley, is strictly prohibited.  See   **
** file 'COPYRIGHT'  in main directory for information on usage and   **
** redistribution,  and for a DISCLAIMER OF ALL WARRANTIES.           **
**                                                                    **
** ****************************************************************** */


// $Revision: 1.1 $
// $Date: 2010-02-04 00:44:04 $
// $Source: /usr/local/cvs/OpenSees/SRC/material/nD/DruckerPrager3DSteelThermal.h,v $

// Written: K.Petek, U.Washington

//
// DruckerPrager3DSteelThermal isotropic hardening material class
// 

#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 

#include <NDMaterial.h>
#include <Vector.h>
#include <Matrix.h>

#include <DruckerPrager.h>
#include <DruckerPragerSteelThermal.h>

class DruckerPrager3DSteelThermal : public DruckerPragerSteelThermal {

//-------------------Declarations-------------------------------

  public : 

  //null constructor
  DruckerPrager3DSteelThermal( ) ;

  //full constructor
  DruckerPrager3DSteelThermal(int tag, double bulk, double shear,
		  double s_y, double r, double r_bar, double Kinfinity, double Kinit, 
		  double d1, double d2, double H, double t, double massDen, double atm);


  //destructor
  ~DruckerPrager3DSteelThermal( ) ;

  NDMaterial* getCopy( ) ;
  const char* getType( ) const ;
  int getOrder( ) const ;

    int setTrialStrain(const Vector &strain_from_element);

  // Unused trialStrain functions
  int setTrialStrain(const Vector &v, const Vector &r);
    
  //send back the strain
  const Vector& getStrain( ) ;

  //send back the stress 
  const Vector& getStress( ) ;

  //send back the tangent 
  const Matrix& getTangent( ) ;
  const Matrix& getInitialTangent( ) ;

  const Vector& getTempAndElong( );


  private :


} ; //end of DruckerPrager3DSteelThermal declarations
