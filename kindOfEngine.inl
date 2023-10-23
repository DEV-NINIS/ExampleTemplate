#include "kindOfEngines.h"

// Engine200HorsePowerClass

template <typename T> Engine200HorsePower<T>::Engine200HorsePower(T& engineMass) {
	HorsePower = 200;
	EngineMass = engineMass;
	nameEngine = "4 cylinder";
}
template <typename T> T& Engine200HorsePower<T>::get_EngineMass() { return this->EngineMass; }
template <typename T> int& Engine200HorsePower<T>::get_HorsePower() { return this->HorsePower; }
template <typename T> std::string& Engine200HorsePower<T>::get_nameEngine() { return this->nameEngine; }
// Engine500HorsePower class

template <typename T> Engine500HorsePower<T>::Engine500HorsePower(T& engineMass) {
	HorsePower = 500;
	EngineMass = engineMass;
	nameEngine = "V6";
}
template <typename T> T& Engine500HorsePower<T>::get_EngineMass() { return this->EngineMass; }
template <typename T> int& Engine500HorsePower<T>::get_HorsePower() { return this->HorsePower; }
template <typename T> std::string& Engine500HorsePower<T>::get_nameEngine() { return this->nameEngine; }

// Engine800HorsePower class

template <typename T> Engine800HorsePower<T>::Engine800HorsePower(T& engineMass) {
	HorsePower = 800;
	EngineMass = engineMass;
	nameEngine = "V8";
}
template <typename T> T& Engine800HorsePower<T>::get_EngineMass() { return this->EngineMass; }
template <typename T> int& Engine800HorsePower<T>::get_HorsePower() { return this->HorsePower; }
template <typename T> std::string& Engine800HorsePower<T>::get_nameEngine() { return this->nameEngine; }