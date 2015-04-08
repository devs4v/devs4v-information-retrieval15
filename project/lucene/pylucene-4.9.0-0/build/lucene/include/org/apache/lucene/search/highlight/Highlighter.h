#ifndef org_apache_lucene_search_highlight_Highlighter_H
#define org_apache_lucene_search_highlight_Highlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class TextFragment;
          class Encoder;
          class Scorer;
          class Fragmenter;
          class Formatter;
          class InvalidTokenOffsetsException;
        }
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
      namespace search {
        namespace highlight {

          class Highlighter : public ::java::lang::Object {
          public:
            enum {
              mid_init$_9bd3ff73,
              mid_init$_f1844869,
              mid_init$_154db1db,
              mid_getBestFragment_36cba2a5,
              mid_getBestFragment_87f832fb,
              mid_getBestFragments_9d06cc93,
              mid_getBestFragments_eafe1ad1,
              mid_getBestFragments_652768f5,
              mid_getBestTextFragments_d795d3a4,
              mid_getEncoder_e179b145,
              mid_getFragmentScorer_0eb4d65e,
              mid_getMaxDocCharsToAnalyze_54c6a179,
              mid_getTextFragmenter_c9a72455,
              mid_setEncoder_8b781108,
              mid_setFragmentScorer_9bd3ff73,
              mid_setMaxDocCharsToAnalyze_39c7bd3c,
              mid_setTextFragmenter_d6ed4d20,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Highlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Highlighter(const Highlighter& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_MAX_CHARS_TO_ANALYZE;

            Highlighter(const ::org::apache::lucene::search::highlight::Scorer &);
            Highlighter(const ::org::apache::lucene::search::highlight::Formatter &, const ::org::apache::lucene::search::highlight::Scorer &);
            Highlighter(const ::org::apache::lucene::search::highlight::Formatter &, const ::org::apache::lucene::search::highlight::Encoder &, const ::org::apache::lucene::search::highlight::Scorer &);

            ::java::lang::String getBestFragment(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &) const;
            ::java::lang::String getBestFragment(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &, const ::java::lang::String &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, jint) const;
            ::java::lang::String getBestFragments(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, jint, const ::java::lang::String &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &, const ::java::lang::String &, jint) const;
            JArray< ::org::apache::lucene::search::highlight::TextFragment > getBestTextFragments(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, jboolean, jint) const;
            ::org::apache::lucene::search::highlight::Encoder getEncoder() const;
            ::org::apache::lucene::search::highlight::Scorer getFragmentScorer() const;
            jint getMaxDocCharsToAnalyze() const;
            ::org::apache::lucene::search::highlight::Fragmenter getTextFragmenter() const;
            void setEncoder(const ::org::apache::lucene::search::highlight::Encoder &) const;
            void setFragmentScorer(const ::org::apache::lucene::search::highlight::Scorer &) const;
            void setMaxDocCharsToAnalyze(jint) const;
            void setTextFragmenter(const ::org::apache::lucene::search::highlight::Fragmenter &) const;
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
          extern PyTypeObject PY_TYPE(Highlighter);

          class t_Highlighter {
          public:
            PyObject_HEAD
            Highlighter object;
            static PyObject *wrap_Object(const Highlighter&);
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
