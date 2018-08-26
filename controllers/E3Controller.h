#pragma once
#include "../models/AlternativeManager.h"
#include "../models/CriteriaManager.h"
#include "../views/Views.h"
#include "../views/Option.h"
#include "compute.h"

class E3Controller
{
public:
	E3Controller();
	~E3Controller();

	void mainLoop();

	void inputProcessing();
	void addAlternative();

	void viewDataProcessing();
	void addCriteria();
	void loadPQW();

	void computeProcessing();
	
private:
	AlternativeManager* mAM;
	CriteriaManager* mCM;
	View* mView;
	Compute* mCompute;
};
