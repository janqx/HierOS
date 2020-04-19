void print(char* str) {
	static unsigned short* VideoMemory = (unsigned short*)0xb8000;
	for(int i = 0; str[i] != '\0'; i++) {
		VideoMemory[i] = (VideoMemory[i] & 0xff00) | str[i];
	}
}

// kernel entry
void KernelMain() {
	print("Hello HierOS!!!\0");
	while(1);
}