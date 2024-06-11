#include <string_view>
#include "ConfigManager.h"

int main()
{
	auto wpasConfigManager = config::GetManager(config::type::wpas);
	auto hostapdConfigManager = config::GetManager(config::type::hostapd);
	auto iwldbgConfigManager = config::GetManager(config::type::iwldbg);

	wpasConfigManager->Add();
	hostapdConfigManager->Add();
	iwldbgConfigManager->Add();
}