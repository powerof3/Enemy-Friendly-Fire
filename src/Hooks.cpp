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

		static inline size_t size = 0x0D6;
	};

	void Install()
	{
		stl::write_vfunc<RE::Character, CheckValidTarget>();
	}
}
