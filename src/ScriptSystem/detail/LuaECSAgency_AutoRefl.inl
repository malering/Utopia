// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::LuaECSAgency>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::Utopia::LuaECSAgency>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"RegisterEntityJob", &Ubpa::Utopia::LuaECSAgency::RegisterEntityJob},
		Field{"RegisterChunkJob", &Ubpa::Utopia::LuaECSAgency::RegisterChunkJob},
		Field{"RegisterJob", &Ubpa::Utopia::LuaECSAgency::RegisterJob},
	};
};

