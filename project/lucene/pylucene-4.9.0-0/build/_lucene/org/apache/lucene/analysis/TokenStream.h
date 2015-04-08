#ifndef org_apache_lucene_analysis_TokenStream_H
#define org_apache_lucene_analysis_TokenStream_H

#include "org/apache/lucene/util/AttributeSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class TokenStream : public ::org::apache::lucene::util::AttributeSource {
        public:
          enum {
            mid_close_54c6a166,
            mid_end_54c6a166,
            mid_incrementToken_54c6a16a,
            mid_reset_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TokenStream(jobject obj) : ::org::apache::lucene::util::AttributeSource(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TokenStream(const TokenStream& obj) : ::org::apache::lucene::util::AttributeSource(obj) {}

          static ::org::apache::lucene::util::AttributeFactory *DEFAULT_TOKEN_ATTRIBUTE_FACTORY;

          void close() const;
          void end() const;
          jboolean incrementToken() const;
          void reset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyTypeObject PY_TYPE(TokenStream);

        class t_TokenStream {
        public:
          PyObject_HEAD
          TokenStream object;
          static PyObject *wrap_Object(const TokenStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
