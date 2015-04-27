#ifndef org_apache_lucene_index_IndexableField_H
#define org_apache_lucene_index_IndexableField_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class IndexableFieldType;
      }
      namespace analysis {
        class TokenStream;
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Number;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexableField : public ::java::lang::Object {
        public:
          enum {
            mid_binaryValue_4ae19461,
            mid_boost_54c6a176,
            mid_fieldType_58dcbc9c,
            mid_name_14c7b5c5,
            mid_numericValue_ee47e3e1,
            mid_readerValue_b6f16bdd,
            mid_stringValue_14c7b5c5,
            mid_tokenStream_cea65119,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexableField(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexableField(const IndexableField& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          jfloat boost() const;
          ::org::apache::lucene::index::IndexableFieldType fieldType() const;
          ::java::lang::String name() const;
          ::java::lang::Number numericValue() const;
          ::java::io::Reader readerValue() const;
          ::java::lang::String stringValue() const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::TokenStream &) const;
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
        extern PyTypeObject PY_TYPE(IndexableField);

        class t_IndexableField {
        public:
          PyObject_HEAD
          IndexableField object;
          static PyObject *wrap_Object(const IndexableField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
