#pragma once

#include "input\KeyCode.hpp"
#include "input\MouseCode.hpp"

#include <string>
#include <map>

namespace silver::core
{
	class Translator
	{
	public:
		static std::string translate(const KeyCode code) noexcept;
		static std::string translate(const MouseCode code) noexcept;

	protected:
		static std::map<const KeyCode, std::string> keyCodeDatabase_;
		static std::map<const MouseCode, std::string> MouseCodeDatabase_;
	};
};