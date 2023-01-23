int numDecodings(char* s) {
	int len = strlen(s);
	int* map = (int*)calloc(len + 1, sizeof(int));
	map[len] = 1;
	int i = len - 1;
	while (i >= 0)
	{
		if (s[i] == '0') map[i] = 0;
		else if (i == len - 1) map[i] = 1;
		else if (s[i] == '1' || (s[i] == '2'&&s[i + 1] <= '6')) map[i] = map[i + 1] + map[i + 2];
		else  map[i] = map[i + 1];
		i--;
	}
	return map[0];
}
