#pragma once
#include "class01.h"



class PartHelper
{
public:
	static void excuteClass01();
};

void PartHelper::excuteClass01()
{
	Class01 class01;
	class01.testMacroError();
	class01.testInlineFunc();
	class01.testConstPoint();
	class01.testClassConstFunc();
	class01.testClassConstVariable();
	class01.testClassConstAndNon_constFunc();

}
