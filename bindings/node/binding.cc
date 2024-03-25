#include <napi.h>

typedef struct TSLanguage TSLanguage;

extern "C" TSLanguage *tree_sitter_xml();
extern "C" TSLanguage *tree_sitter_dtd();

// "tree-sitter", "language" hashed with BLAKE2
const napi_type_tag LANGUAGE_TYPE_TAG = {
  0x8AF2E5212AD58ABF, 0xD5006CAD83ABBA16
};

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    auto xml = Napi::Object::New(env);
    xml["name"] = Napi::String::New(env, "xml");
    auto xml_language = Napi::External<TSLanguage>::New(env, tree_sitter_xml());
    xml_language.TypeTag(&LANGUAGE_TYPE_TAG);
    xml["language"] = xml_language;

    auto dtd = Napi::Object::New(env);
    dtd["name"] = Napi::String::New(env, "dtd");
    auto dtd_language = Napi::External<TSLanguage>::New(env, tree_sitter_dtd());
    dtd_language.TypeTag(&LANGUAGE_TYPE_TAG);
    dtd["language"] = dtd_language;

    exports["xml"] = xml;
    exports["dtd"] = dtd;
    return exports;
}

NODE_API_MODULE(tree_sitter_xml_binding, Init)
