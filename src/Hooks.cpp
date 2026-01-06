#include "Hooks.h"

namespace EnemyFriendlyFire
{
	struct CheckValidTarget
	{
		static bool thunk(RE::Actor*, RE::TESObjectREFR&)
		{
			return true;
		}
		[[maybe_unused]] static inline REL::Relocation<decltype(thunk)> func;
#ifndef SKYRIMVR
		static inline constexpr std::size_t size = 0x0D6;
#else
		static inline constexpr std::size_t size = 0x0D8;
#endif
	};

	void Install()
	{
		stl::write_vfunc<RE::Character, CheckValidTarget>();
	}
}
