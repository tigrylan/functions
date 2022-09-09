////// the algorithm checks whether there are three elements in the array whose sum is equal to "k"

bool checkWin(vector<int>& play, const int& key)
{
	sort(play.begin(), play.end());
	// get sum 15
	bool result = false;
	if (play.size() < 3)
	{
		return result;
	}
	for (int i = 0; i < play.size() - 2; ++i)
	{
		int j = i + 1;
		int k = play.size() - 1;

		while (j < k)
		{
			int sum = play[i] + play[j] + play[k];
			if (sum == key)
			{
				return true;
			}
			if (sum < key)
			{
				j++;
				continue;
			}
			if (sum > key)
			{
				k--;
				continue;
			}
		}

	}
	return result;
}

/////the function checks the number entered by the user, the range of the value is specified in the parameters
int getNumber(const int& beg, const int& end) {
	int n;
	while (true) // Бесконечный цикл, который внутри прерывается по условию
	{
		cin >> n;   // Ввод значения пользователем
		if (!cin.fail()) { // Если ввели число, а значит поток не в состоянии ошибки, то завершаем цикл
			if (beg <= n && n <= end)break;
		}
		cout << "		syntax error!" << endl;
		cin.clear(); // Сбрасываем состояние ошибки
		cin.ignore((numeric_limits<std::streamsize>::max)(), '\n');
	}
	return n;
};
