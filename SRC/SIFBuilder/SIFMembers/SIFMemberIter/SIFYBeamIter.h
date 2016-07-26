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
** Developed by:                                                      **
**   Frank McKenna (fmckenna@ce.berkeley.edu)                         **
**   Gregory L. Fenves (fenves@ce.berkeley.edu)                       **
**   Filip C. Filippou (filippou@ce.berkeley.edu)                     **
**                                                                    **
** ****************************************************************** */
                                                                        
// $Revision: 1.1.1.1 $
// $Date: 2000-09-15 08:23:19 $
// $Source: /usr/local/cvs/OpenSees/SRC/domain/pattern/Simple_MeshIter.h,v $
                                                                        
                                                                        
// File: ~/domain/loadcase/Simple_MeshIter.h
//
// Written: fmk 
// Created: Fri Sep 20 15:27:47: 1996
// Revision: A
//
// Description: This file contains the class definition for Simple_MeshIter.
// Simple_MeshIter is an abstract base class. An Simple_MeshIter is an 
// iter for returning the Simple_Meshs of an object of class  LoadCasse. 
// Simple_MeshIters must be written for each subclass of LoadCase.
//Added by Liming Jiang, Liming.Jiang@ed.ac.uk


#ifndef SIFYBeamIter_h
#define SIFYBeamIter_h

class SIFYBeam;
class TaggedObjectStorage;
class TaggedObjectIter;

class SIFYBeamIter
{
  public:
    SIFYBeamIter(TaggedObjectStorage *theStorage);
    virtual ~SIFYBeamIter();

    virtual SIFYBeam *operator()(void);
    virtual void reset(void);

  protected:
    
  private:
    TaggedObjectIter &myIter;
    
};

#endif

