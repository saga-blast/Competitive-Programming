inline int read() {
	int x = 0, f = 1; char ch = getchar();
	while (ch < '0' || ch > '9') f = ch == '-' ? -1 : 1, ch = getchar();
	while (ch >= '0' && ch <= '9') x = x * 10 + ch - 48, ch = getchar();
	return x * f;
}