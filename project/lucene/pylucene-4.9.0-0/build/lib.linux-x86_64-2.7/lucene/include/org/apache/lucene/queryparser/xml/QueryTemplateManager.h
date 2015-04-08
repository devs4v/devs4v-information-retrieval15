#ifndef org_apache_lucene_queryparser_xml_QueryTemplateManager_H
#define org_apache_lucene_queryparser_xml_QueryTemplateManager_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Properties;
  }
  namespace io {
    class IOException;
    class InputStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {

          class QueryTemplateManager : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_be2e4f90,
              mid_addDefaultQueryTemplate_be2e4f90,
              mid_addQueryTemplate_fc5ef09a,
              mid_getQueryAsXmlString_8b0ed65b,
              mid_getQueryAsXmlString_cf43ccf5,
              mid_getQueryAsXmlString_02821f09,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryTemplateManager(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            QueryTemplateManager(const QueryTemplateManager& obj) : ::java::lang::Object(obj) {}

            QueryTemplateManager();
            QueryTemplateManager(const ::java::io::InputStream &);

            void addDefaultQueryTemplate(const ::java::io::InputStream &) const;
            void addQueryTemplate(const ::java::lang::String &, const ::java::io::InputStream &) const;
            ::java::lang::String getQueryAsXmlString(const ::java::util::Properties &) const;
            ::java::lang::String getQueryAsXmlString(const ::java::util::Properties &, const ::java::lang::String &) const;
            static ::java::lang::String getQueryAsXmlString(const ::java::util::Properties &, const ::java::io::InputStream &);
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
        namespace xml {
          extern PyTypeObject PY_TYPE(QueryTemplateManager);

          class t_QueryTemplateManager {
          public:
            PyObject_HEAD
            QueryTemplateManager object;
            static PyObject *wrap_Object(const QueryTemplateManager&);
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
