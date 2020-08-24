#pragma once

for(unsigned int i = 0; i < entities.Count(); i++)
{
	entities[i].data++;
}

for(unsigned int i = 0; i < entities.Count(); i++)
{
	std::cout << entities[i].data << std::endl;
}

std::cin.get();