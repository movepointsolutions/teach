#ifndef ALGORITHM_HEADER
#define ALGORITHM_HEADER

namespace teach
{

template <class Mptr>
class algorithm
{
public:
	typedef typename Mptr::element_type model_type;
	typedef model_type::key_type key_type;
	typedef model_type::value_type value_type;
public:
#ifdef TEACH_DEBUG
	virtual Value get(const Key &) = 0;
#endif // TEACH_DEBUG
	void transport(const key_type &, const value_type &);
};

} // namespace teach

#endif // ALGORITHM_HEADER

// vim: syntax=cpp
