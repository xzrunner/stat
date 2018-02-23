#pragma once

#include <cu/cu_macro.h>
#include <cu/cu_stl.h>

namespace st
{

class StatOverdraw
{
public:
	void Print(CU_STR& str) const;
	void Reset();

	void AddArea(float area) { m_area += area; }

private:
	float m_area;

	CU_SINGLETON_DECLARATION(StatOverdraw);

}; // StatOverdraw

}