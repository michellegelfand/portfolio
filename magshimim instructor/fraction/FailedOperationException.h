#pragma once

#include <exception>

class FailedOperationException :public std::exception
{
	public:
		virtual const char* what() const noexcept;
};

