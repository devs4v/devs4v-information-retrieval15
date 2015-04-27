#ifndef org_apache_lucene_queryparser_ext_Extensions_H
#define org_apache_lucene_queryparser_ext_Extensions_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace ext {
          class Extensions$Pair;
          class ParserExtension;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace ext {

          class Extensions : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_87fd545a,
              mid_add_d7d984b9,
              mid_buildExtensionField_97a5258f,
              mid_buildExtensionField_aacea7e9,
              mid_escapeExtensionField_97a5258f,
              mid_getExtension_a8956118,
              mid_getExtensionFieldDelimiter_54c6a173,
              mid_splitExtensionField_7a9e9194,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Extensions(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Extensions(const Extensions& obj) : ::java::lang::Object(obj) {}

            static jchar DEFAULT_EXTENSION_FIELD_DELIMITER;

            Extensions();
            Extensions(jchar);

            void add(const ::java::lang::String &, const ::org::apache::lucene::queryparser::ext::ParserExtension &) const;
            ::java::lang::String buildExtensionField(const ::java::lang::String &) const;
            ::java::lang::String buildExtensionField(const ::java::lang::String &, const ::java::lang::String &) const;
            ::java::lang::String escapeExtensionField(const ::java::lang::String &) const;
            ::org::apache::lucene::queryparser::ext::ParserExtension getExtension(const ::java::lang::String &) const;
            jchar getExtensionFieldDelimiter() const;
            ::org::apache::lucene::queryparser::ext::Extensions$Pair splitExtensionField(const ::java::lang::String &, const ::java::lang::String &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace ext {
          extern PyTypeObject PY_TYPE(Extensions);

          class t_Extensions {
          public:
            PyObject_HEAD
            Extensions object;
            static PyObject *wrap_Object(const Extensions&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
