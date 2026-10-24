#pragma once

class Movie {
private:	
	char* title{};
	int year{};
	int duration{};
	double rating{};

public:
	Movie(const char* newTitle, int newYear, int newDuration, double newRating) : title(nullptr), year(newYear), duration(0), rating(0){
		setTitle(newTitle);
		setDuration(newDuration);
		setRating(newRating);
	}

	Movie(const char* newTitle, int newYear) : Movie(newTitle, newYear, 90, 0) {}

	~Movie() {
		delete[] title;
	}

	void setTitle(const char* newTitle);
	bool setDuration(int newDuration);
	bool setRating(double newRating);
	bool isLong() const;
	void print() const;
};

inline bool Movie::isLong() const {
	return duration > 120;
}