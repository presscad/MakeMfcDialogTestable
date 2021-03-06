#include "stdafx.h"
#include <catch.hpp>
#include "logic.h"

SCENARIO("生成→追加", "[logic]")
{
	Logic sut;
	REQUIRE(sut.GetList().empty());

	WHEN("項目を追加する")
	{
		sut.Add(L"abc");

		THEN("リストに追加項目が増える")
		{
			REQUIRE(sut.GetList().size() == 1);
			CHECK(sut.GetList()[0] == L"abc");
		}
	}
}
