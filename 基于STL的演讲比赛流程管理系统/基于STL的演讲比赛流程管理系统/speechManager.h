#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <deque>
#include <functional>
#include <algorithm>
#include <numeric>
#include <fstream>
#include <ctime>
using namespace std;
#include "speaker.h"
class SpeechManager
{
public:
	SpeechManager();
	~SpeechManager();
	void startSpeech();
	void speechDraw();
	void show_Menu();
	void clearRecord();
	void exitSystem();
	void initSpeech();
	void createSpeaker();
	void speechContest();
	void showScore();
	void saveRecord();
	void loadRecord();
	void showRecord();
	vector<int> v1;
	vector<int> v2;
	vector<int> vVictory;
	map<int, Speaker> m_Speaker;
	map<int, vector<string>> m_Record;
	int m_Index = 1;
	bool fileIsEmpty;
};
