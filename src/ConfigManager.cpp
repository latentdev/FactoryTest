#include <string_view>
#include <iostream>
#include "ConfigManager.h"

namespace config {
	//WpasConfigManager
	WpasConfigManager& WpasConfigManager::Instance() {
		static WpasConfigManager instance;
		return instance;
	}

	void WpasConfigManager::CopyDefaultConfig() {

	}

	void WpasConfigManager::Add() {
		std::cout << "Wpas Add" << std::endl;
	}

	void WpasConfigManager::Remove() {

	}

	void WpasConfigManager::Clear() {

	}

	std::string_view WpasConfigManager::GetDefaultConfigFilePath(config::program program) {
		return "";
	}

	//HostapdConfigManager
	HostapdConfigManager& HostapdConfigManager::Instance() {
		static HostapdConfigManager instance;
		return instance;
	}

	void HostapdConfigManager::CopyDefaultConfig() {

	}

	void HostapdConfigManager::Add() {
		std::cout << "Hostapd Add" << std::endl;
	}

	void HostapdConfigManager::Remove() {

	}

	void HostapdConfigManager::Clear() {

	}

	std::string_view HostapdConfigManager::GetDefaultConfigFilePath(config::program program) {
		return "";
	}

	//IwldbgConfigManager
	IwldbgConfigManager& IwldbgConfigManager::Instance() {
		static IwldbgConfigManager instance;
		return instance;
	}

	void IwldbgConfigManager::CopyDefaultConfig() {

	}

	void IwldbgConfigManager::Add() {
		std::cout << "Iwldbg Add" << std::endl;
	}

	void IwldbgConfigManager::Remove() {

	}

	void IwldbgConfigManager::Clear() {

	}

	std::string_view IwldbgConfigManager::GetDefaultConfigFilePath(config::program program) {
		return "";
	}
}