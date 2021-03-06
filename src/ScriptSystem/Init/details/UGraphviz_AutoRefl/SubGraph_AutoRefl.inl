// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::UGraphviz::Subgraph>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::UGraphviz::Subgraph>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{Name::constructor, WrapConstructor<Ubpa::UGraphviz::Subgraph(Ubpa::UGraphviz::Registry*, std::string)>()},
		Field{Name::destructor, WrapDestructor<Ubpa::UGraphviz::Subgraph>()},
		Field{"GetID", &Ubpa::UGraphviz::Subgraph::GetID},
		Field{"GetSubgraph", &Ubpa::UGraphviz::Subgraph::GetSubgraph},
		Field{"GetRegistry", &Ubpa::UGraphviz::Subgraph::GetRegistry},
		Field{"GenSubgraph", &Ubpa::UGraphviz::Subgraph::GenSubgraph},
		Field{"RegisterGraphAttr", &Ubpa::UGraphviz::Subgraph::RegisterGraphAttr},
		Field{"RegisterGraphNodeAttr", &Ubpa::UGraphviz::Subgraph::RegisterGraphNodeAttr},
		Field{"RegisterGraphEdgeAttr", &Ubpa::UGraphviz::Subgraph::RegisterGraphEdgeAttr},
		Field{"DeregisterGraphAttr", &Ubpa::UGraphviz::Subgraph::DeregisterGraphAttr},
		Field{"DeregisterGraphNodeAttr", &Ubpa::UGraphviz::Subgraph::DeregisterGraphNodeAttr},
		Field{"DeregisterGraphEdgeAttr", &Ubpa::UGraphviz::Subgraph::DeregisterGraphEdgeAttr},
		Field{"HaveNode", &Ubpa::UGraphviz::Subgraph::HaveNode},
		Field{"HaveEdge", &Ubpa::UGraphviz::Subgraph::HaveEdge},
		Field{"AddNode", &Ubpa::UGraphviz::Subgraph::AddNode},
		Field{"AddEdge", &Ubpa::UGraphviz::Subgraph::AddEdge},
		Field{"EraseNode", &Ubpa::UGraphviz::Subgraph::EraseNode},
		Field{"EraseEdge", &Ubpa::UGraphviz::Subgraph::EraseEdge},
	};
};

