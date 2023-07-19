#ifndef MODEL_HEADER
#define MODEL_HEADER

namespace teach
{

template <class Key, class Value>
class model
{
public:
	//virtual Value get(const Key &) = 0;
	virtual void emit(const Key &, const Value &) = 0;
};

} // namespace teach

#endif // MODEL_HEADER

// vim: syntax=cpp
