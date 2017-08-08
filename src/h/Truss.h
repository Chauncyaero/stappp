/***************************************************************/
/*  FEM++ ：A C++ finite element method code for teaching      */
/*     Computational Dynamics Laboratory                       */
/*     School of Aerospace Engineering, Tsinghua University    */
/*                                                             */
/*     http://www.comdyn.cn/                                   */
/***************************************************************/

#pragma once

#include "FEM.h"

using namespace std;

// 杆单元类
class Bar : public Element
{
public:
	Bar();

	friend FileReader;

	virtual void LocalStiffness(double* Matrix);

	virtual void Assembly(double* Matrix);

	virtual void ComputeColumnHeight(unsigned int* ColumnHeight);

	virtual unsigned int LocalMatrixSpace();
};

// 杆的材料
// 增加了截面积变量
class BarMaterial : public Material
{
public:
	double Area;
};