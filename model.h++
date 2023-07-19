#ifndef MODEL_HEADER
#define MODEL_HEADER

namespace teach
{

template <class Key, class Value>
class model
{
public:
	typedef Key key_type;
	typedef Value value_type;
public:
#ifdef TEACH_DEBUG
	virtual Value get(const Key &) = 0;
#endif // TEACH_DEBUG
	virtual void emit(const Key &, const Value &) = 0;
};

} // namespace teach

#endif // MODEL_HEADER

// vim: syntax=cpp
