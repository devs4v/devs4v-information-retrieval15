#ifndef org_apache_lucene_search_highlight_TokenSources_H
#define org_apache_lucene_search_highlight_TokenSources_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class IndexReader;
      }
      namespace document {
        class Document;
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class TokenSources : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_getAnyTokenStream_2593cc2a,
              mid_getAnyTokenStream_326e373c,
              mid_getTokenStream_a3ddc01a,
              mid_getTokenStream_6006da77,
              mid_getTokenStream_f436def7,
              mid_getTokenStream_5d782325,
              mid_getTokenStream_2593cc2a,
              mid_getTokenStreamWithOffsets_1c01cdda,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenSources(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TokenSources(const TokenSources& obj) : ::java::lang::Object(obj) {}

            TokenSources();

            static ::org::apache::lucene::analysis::TokenStream getAnyTokenStream(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getAnyTokenStream(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::document::Document &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::org::apache::lucene::index::Terms &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::org::apache::lucene::index::Terms &, jboolean);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::org::apache::lucene::document::Document &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStreamWithOffsets(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &);
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
      namespace search {
        namespace highlight {
          extern PyTypeObject PY_TYPE(TokenSources);

          class t_TokenSources {
          public:
            PyObject_HEAD
            TokenSources object;
            static PyObject *wrap_Object(const TokenSources&);
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
