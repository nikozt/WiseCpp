
__int64 GetNumber(const char* pBegin, const int pos)
{
	const __int64 *p = (const __int64*) (pBegin + pos);
	return *p;
}
