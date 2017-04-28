
/* In buffer search for string from the end */
const char* find_last(const char* content, size_t content_size, const char* search, size_t search_size, bool end_ptr = false)
{
	const char* current = content + content_size - search_size;
	const char* found = nullptr;
	while(current >= content) {
		if((found = strstr(current, search))) {
			return end_ptr ? found + search_size : found;
		}
		current -= 1;
	}
	return nullptr;
}