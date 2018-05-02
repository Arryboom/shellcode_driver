#pragma once
#include <cstdint>
#include <cstddef>
#include <climits>

namespace hash_string
{
	// FNV-1a constants
	static constexpr unsigned long long basis = 14695981039346656037ULL;
	static constexpr unsigned long long prime = 1099511628211ULL;

	// compile-time hash helper function
	constexpr unsigned long long hash_one(char c, const char* remain, unsigned long long value)
	{
		return c == 0 ? value : hash_one(remain[0], remain + 1, (value ^ c) * prime);
	}

	// compile-time hash
	constexpr unsigned long long hash(const char* str)
	{
		return hash_one(str[0], str + 1, basis);
	}

	// run-time hash
	unsigned long long hash_rt(const char* str)
	{
		unsigned long long hash = basis;
		while (*str != 0) {
			hash ^= str[0];
			hash *= prime;
			++str;
		}
		return hash;
	}

	// ensure that the constexpr value is really compile-time constant
	template <unsigned long long NUM>
	struct hash_const
	{
		static const unsigned long long value = NUM;
	};
};
