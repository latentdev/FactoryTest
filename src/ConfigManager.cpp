#include <string_view>
#include "ConfigManager.h"

namespace config {

	class WpasConfigManager : public ConfigManager {
	public:
		static WpasConfigManager& Instance() {
			static WpasConfigManager instance;
			return instance;
		}

		void CopyDefaultConfig() override {

		}

		void Add() override {

		}

		void Remove() override {

		}

		void Clear() override {

		}

	private:
		WpasConfigManager() = default;
		std::string_view GetDefaultConfigFilePath(config::program program) override {

		}
	};


}