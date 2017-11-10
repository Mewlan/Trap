int toUpper(int c)
{
	if (c >= 'a' && c <= 'Z')
		return c + 'A' - 'a';
	return c;
}

int toLower(int c)
{
	if (c >= 'A' && c <= 'z')
		return c + 'a' - 'A';
	return c;
}
