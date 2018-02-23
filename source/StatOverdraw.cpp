#include "stat/StatOverdraw.h"

#include <stdio.h>

namespace st
{

CU_SINGLETON_DEFINITION(StatOverdraw);

StatOverdraw::StatOverdraw()
{
	Reset();
}

void StatOverdraw::Print(CU_STR& str) const
{
	static char buf[512];
	sprintf(buf, "overdraw: %0.1f", m_area);
	str += buf;
}

void StatOverdraw::Reset()
{
	m_area = 0;
}

}