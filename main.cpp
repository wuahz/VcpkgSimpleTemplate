#include <iostream>
#include <boost/lexical_cast.hpp>  // Boost库
#include <json/json.h>             // Jsoncpp库

int main() {
    // 测试Boost：字符串与数字转换
    float weight = 100.0f;
    std::string wt_str = boost::lexical_cast<std::string>(weight);
    std::cout << "Boost test: " << wt_str << std::endl;

    // 测试Jsoncpp：序列化与反序列化
    Json::Value root;
    root["name"] = "vcpkg test";
    root["version"] = 1.0;
    std::string json_str = root.toStyledString();
    std::cout << "Jsoncpp test:\n" << json_str << std::endl;

    return 0;
}