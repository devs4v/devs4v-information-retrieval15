#ifndef org_apache_lucene_index_FieldInfos_H
#define org_apache_lucene_index_FieldInfos_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FieldInfo;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Iterable;
    class Class;
  }
  namespace util {
    class Iterator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FieldInfos : public ::java::lang::Object {
        public:
          enum {
            mid_init$_32778cd0,
            mid_fieldInfo_d44c031f,
            mid_fieldInfo_582c55ef,
            mid_hasDocValues_54c6a16a,
            mid_hasFreq_54c6a16a,
            mid_hasNorms_54c6a16a,
            mid_hasOffsets_54c6a16a,
            mid_hasPayloads_54c6a16a,
            mid_hasProx_54c6a16a,
            mid_hasVectors_54c6a16a,
            mid_iterator_40858c90,
            mid_size_54c6a179,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInfos(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldInfos(const FieldInfos& obj) : ::java::lang::Object(obj) {}

          FieldInfos(const JArray< ::org::apache::lucene::index::FieldInfo > &);

          ::org::apache::lucene::index::FieldInfo fieldInfo(jint) const;
          ::org::apache::lucene::index::FieldInfo fieldInfo(const ::java::lang::String &) const;
          jboolean hasDocValues() const;
          jboolean hasFreq() const;
          jboolean hasNorms() const;
          jboolean hasOffsets() const;
          jboolean hasPayloads() const;
          jboolean hasProx() const;
          jboolean hasVectors() const;
          ::java::util::Iterator iterator() const;
          jint size() const;
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
        extern PyTypeObject PY_TYPE(FieldInfos);

        class t_FieldInfos {
        public:
          PyObject_HEAD
          FieldInfos object;
          static PyObject *wrap_Object(const FieldInfos&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
