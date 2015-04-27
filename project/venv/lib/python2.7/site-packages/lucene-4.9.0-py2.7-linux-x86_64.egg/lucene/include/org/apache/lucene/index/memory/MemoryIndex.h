#ifndef org_apache_lucene_index_memory_MemoryIndex_H
#define org_apache_lucene_index_memory_MemoryIndex_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class Query;
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
    class Class;
    class String;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        namespace memory {

          class MemoryIndex : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_bb0c767f,
              mid_addField_7d0c5392,
              mid_addField_2f58d53f,
              mid_addField_94a4a674,
              mid_addField_29c81a73,
              mid_addField_6b38bf6f,
              mid_createSearcher_cab79e71,
              mid_keywordTokenStream_f7dc1120,
              mid_reset_54c6a166,
              mid_search_6e301103,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MemoryIndex(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            MemoryIndex(const MemoryIndex& obj) : ::java::lang::Object(obj) {}

            MemoryIndex();
            MemoryIndex(jboolean);

            void addField(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &) const;
            void addField(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &, jfloat) const;
            void addField(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &) const;
            void addField(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &, jfloat, jint) const;
            void addField(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &, jfloat, jint, jint) const;
            ::org::apache::lucene::search::IndexSearcher createSearcher() const;
            ::org::apache::lucene::analysis::TokenStream keywordTokenStream(const ::java::util::Collection &) const;
            void reset() const;
            jfloat search(const ::org::apache::lucene::search::Query &) const;
            ::java::lang::String toString() const;
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
      namespace index {
        namespace memory {
          extern PyTypeObject PY_TYPE(MemoryIndex);

          class t_MemoryIndex {
          public:
            PyObject_HEAD
            MemoryIndex object;
            static PyObject *wrap_Object(const MemoryIndex&);
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
