float checkAgeScore(int age, float score)
{

	if (age > 25 || age < 16)
		throw age;               //���䲻���ʣ��׳�
	if (score < 0 || score>5)
		throw score;           //���������ʣ��׳�
	return 20 * score;
}