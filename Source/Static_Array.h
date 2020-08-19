#pragma once

namespace DataStructures
{
	template <typename Type, unsigned long long Size>
	class StaticArray
	{
	private:
		Type array[Size];
		unsigned long long index = 0;

	public:
		Type& Update()
		{
			return array[index];
		}

		void Iterate()
		{
			index++;

			if(index > Size - 1)
			{
				index = 0;
			}
		}
	};
}