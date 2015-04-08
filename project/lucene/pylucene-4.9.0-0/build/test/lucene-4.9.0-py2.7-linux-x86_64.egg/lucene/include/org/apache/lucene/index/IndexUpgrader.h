#ifndef org_apache_lucene_index_IndexUpgrader_H
#define org_apache_lucene_index_IndexUpgrader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
        class InfoStream;
      }
      namespace index {
        class IndexWriterConfig;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexUpgrader : public ::java::lang::Object {
        public:
          enum {
            mid_init$_3b411aab,
            mid_init$_884b85de,
            mid_init$_2b2ed566,
            mid_main_4dd4540c,
            mid_upgrade_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexUpgrader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexUpgrader(const IndexUpgrader& obj) : ::java::lang::Object(obj) {}

          IndexUpgrader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::util::Version &);
          IndexUpgrader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig &, jboolean);
          IndexUpgrader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::util::InfoStream &, jboolean);

          static void main(const JArray< ::java::lang::String > &);
          void upgrade() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyTypeObject PY_TYPE(IndexUpgrader);

        class t_IndexUpgrader {
        public:
          PyObject_HEAD
          IndexUpgrader object;
          static PyObject *wrap_Object(const IndexUpgrader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
