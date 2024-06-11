#pragma once
#include <string_view>

//Abstract ConfigManager
namespace config {
	enum class program {
		pr,
		p2p
	};

	class ConfigManager {
	private:
		virtual std::string_view GetDefaultConfigFilePath(config::program program);
	public:
		//AbstractConfigManager();
		virtual ~ConfigManager() = default;
		virtual void CopyDefaultConfig() = 0;
		virtual void Add() = 0;
		virtual void Remove() = 0;
		virtual void Clear() = 0;

		static ConfigManager* Instance(std::string_view type);
	};
}