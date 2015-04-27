#ifndef org_apache_lucene_analysis_payloads_DelimitedPayloadTokenFilterFactory_H
#define org_apache_lucene_analysis_payloads_DelimitedPayloadTokenFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class ResourceLoader;
          class ResourceLoaderAware;
        }
        class TokenStream;
        namespace payloads {
          class DelimitedPayloadTokenFilter;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace payloads {

          class DelimitedPayloadTokenFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_ca2c8453,
              mid_inform_d6a4bc97,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DelimitedPayloadTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DelimitedPayloadTokenFilterFactory(const DelimitedPayloadTokenFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *DELIMITER_ATTR;
            static ::java::lang::String *ENCODER_ATTR;

            DelimitedPayloadTokenFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::payloads::DelimitedPayloadTokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
            void inform(const ::org::apache::lucene::analysis::util::ResourceLoader &) const;
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
      namespace analysis {
        namespace payloads {
          extern PyTypeObject PY_TYPE(DelimitedPayloadTokenFilterFactory);

          class t_DelimitedPayloadTokenFilterFactory {
          public:
            PyObject_HEAD
            DelimitedPayloadTokenFilterFactory object;
            static PyObject *wrap_Object(const DelimitedPayloadTokenFilterFactory&);
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
