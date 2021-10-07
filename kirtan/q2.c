int main() {

	int days, y, m, d;	
	
	printf("Input no. of days: ");
	
	scanf("%d", &days);
	if(days >= 0){
	y = days/365;
	
	days = days-(365*y);
		
	m = days/30;
	
	d = days-(m*30);
	
	printf(" %d Year(s) \n %d Month(s) \n %d Day(s)", y, m, d);
	return 0;
	}
	else{
        printf("days are positive integers. DUHH!!!");
    }
    return 0;
}