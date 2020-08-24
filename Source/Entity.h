#pragma once

namespace Entity
{
	struct Entity
	{
		unsigned int data = 0;
	};
}

DataStructures::DynamicArray<Entity::Entity> entities(10);