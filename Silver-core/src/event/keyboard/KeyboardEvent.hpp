#pragma once

#include "event\Event_base.hpp"
#include "input\KeyCode.hpp"
#include "math\math.hpp"

namespace silver::core::event
{
	class KeyboardEvent : public Event_base
	{
	public:
		enum struct State
		{
			PRESSED,
			RELEASED,
		};

		KeyboardEvent(const KeyCode key, const State state, const vec2ui pos, const bool wasDown);

		State state() const noexcept;
		KeyCode key() const noexcept;
		
		bool pressed() const noexcept;
		bool released() const noexcept;

		unsigned int x() const noexcept;
		unsigned int y() const noexcept;
		vec2ui position() const noexcept;

		bool was_down() const noexcept;

		bool alt() const noexcept;
		bool ctrl() const noexcept;
		bool shift() const noexcept;
		bool win() const noexcept;

	protected:
		const KeyCode key_;
		const State state_;
		const vec2ui pos_;
		const bool wasDown_;
	};
}