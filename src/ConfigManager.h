#pragma once
#include <string_view>

//Abstract ConfigManager
namespace config {
	enum class program {
		pr,
		p2p
	};

	enum class type {
		wpas,
		hostapd,
		iwldbg
	};

	class ConfigManager {
	private:
		virtual std::string_view GetDefaultConfigFilePath(config::program program) = 0;
	public:
		virtual void CopyDefaultConfig() = 0;
		virtual void Add() = 0;
		virtual void Remove() = 0;
		virtual void Clear() = 0;
	};

	class WpasConfigManager : public ConfigManager {
	private:
		std::string_view GetDefaultConfigFilePath(config::program program);

	public:
		void CopyDefaultConfig();
		void Add();
		void Remove();
		void Clear();

		static WpasConfigManager& Instance();
	};

	class HostapdConfigManager : public ConfigManager {
	private:
		std::string_view GetDefaultConfigFilePath(config::program program);

	public:
		void CopyDefaultConfig();
		void Add();
		void Remove();
		void Clear();

		static HostapdConfigManager& Instance();
	};

	class IwldbgConfigManager : public ConfigManager {
	private:
		std::string_view GetDefaultConfigFilePath(config::program program);

	public:
		void CopyDefaultConfig();
		void Add();
		void Remove();
		void Clear();

		static IwldbgConfigManager& Instance();
	};

	static ConfigManager* GetManager(config::type type) {
		switch (type)
		{
		case config::type::wpas:
			return &config::WpasConfigManager::Instance();
		case config::type::hostapd:
			return &config::HostapdConfigManager::Instance();
		case config::type::iwldbg:
			return &config::IwldbgConfigManager::Instance();
		default:
			break;
		}
	}
}