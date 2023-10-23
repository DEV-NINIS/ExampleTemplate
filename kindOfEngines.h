#pragma once
#include <iostream>
#include <string>

template <typename T>
class Engine200HorsePower
{
public:
	Engine200HorsePower(T& engineMass);
	~Engine200HorsePower() {};
	T& get_EngineMass();
	int& get_HorsePower();
	std::string& get_nameEngine();
private:
	T EngineMass;
	int HorsePower;
	std::string nameEngine;
};

template <typename T>
class Engine500HorsePower
{
public:
	Engine500HorsePower(T& engineMass);
	~Engine500HorsePower() {};
	T& get_EngineMass();
	int& get_HorsePower();
	std::string& get_nameEngine();
private:
	 T EngineMass;
	 int HorsePower;
	 std::string nameEngine;
};

template <typename T>
class Engine800HorsePower
{
public:
	Engine800HorsePower(T& engineMass);
	~Engine800HorsePower() {};
	T& get_EngineMass();
	int& get_HorsePower();
	std::string& get_nameEngine();
private:
	T EngineMass;
	int HorsePower;
	std::string nameEngine;
};