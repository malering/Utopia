// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<typename T>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::LuaArray<T>>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::Utopia::LuaArray<T>>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"PushBack", &Ubpa::Utopia::LuaArray<T>::PushBack},
		Field{"Data", &Ubpa::Utopia::LuaArray<T>::Data},
		Field{"Size", &Ubpa::Utopia::LuaArray<T>::Size},
	};
};

