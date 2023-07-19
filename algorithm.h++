#ifndef ALGORITHM_HEADER
#define ALGORITHM_HEADER

namespace teach
{

template <class Model>
class algorithm
{
public:
	typedef typename Model::key_type key_type;
	typedef typename Model::value_type value_type;
public:
#ifdef TEACH_DEBUG
	virtual Value get(const Key &) = 0;
#endif // TEACH_DEBUG
	void transport(const key_type &, const value_type &);
};

} // namespace teach

#endif // ALGORITHM_HEADER

// vim: syntax=cpp
