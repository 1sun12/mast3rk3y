bool arm_detonator(int);

void arm_missle(void) {
	bool armed = arm_detonator(3);
	if (armed) puts("missle armed");
	else puts("missle disarmed");
}
