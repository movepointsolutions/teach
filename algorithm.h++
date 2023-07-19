#ifndef ALGORITHM_HEADER
#define ALGORITHM_HEADER

namespace teach
{

template <class Mptr>
class algorithm
{
	Mptr mptr;
public:
	typedef typename Mptr::element_type model_type;
	typedef typename model_type::key_type key_type;
	typedef typename model_type::value_type value_type;
public:
	algorithm(Mptr &&_mptr) : mptr(std::move(_mptr)) {}
#ifdef TEACH_DEBUG
	virtual Value get(const Key &) = 0;
#endif // TEACH_DEBUG
	const Mptr &model() { return mptr; }
	void transport(const key_type &k, const value_type &v)
	{ mptr->emit(k, v); }
};

} // namespace teach

#endif // ALGORITHM_HEADER

// vim: syntax=cpp
