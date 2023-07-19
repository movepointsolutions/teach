#ifndef ALGORITHM_HEADER
#define ALGORITHM_HEADER

namespace teach
{

template <class Key, class Value>
class algorithm
{
public:
	//virtual Value get(const Key &) = 0;
	void transport(const Key &, const Value &);
};

} // namespace teach

#endif // ALGORITHM_HEADER

// vim: syntax=cpp
