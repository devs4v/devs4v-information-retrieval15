#ifndef org_apache_lucene_search_vectorhighlight_FastVectorHighlighter_H
#define org_apache_lucene_search_vectorhighlight_FastVectorHighlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace vectorhighlight {
          class FieldQuery;
          class FragmentsBuilder;
          class FragListBuilder;
        }
        class Query;
        namespace highlight {
          class Encoder;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
  }
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
        namespace vectorhighlight {

          class FastVectorHighlighter : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_46f2e2c4,
              mid_init$_35aba53c,
              mid_getBestFragment_dab3f1b2,
              mid_getBestFragment_71cd1532,
              mid_getBestFragments_f180a9d4,
              mid_getBestFragments_d3e90fd8,
              mid_getBestFragments_5366ca3a,
              mid_getFieldQuery_b2d7cb3a,
              mid_getFieldQuery_6934781b,
              mid_getPhraseLimit_54c6a179,
              mid_isFieldMatch_54c6a16a,
              mid_isPhraseHighlight_54c6a16a,
              mid_setPhraseLimit_39c7bd3c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FastVectorHighlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FastVectorHighlighter(const FastVectorHighlighter& obj) : ::java::lang::Object(obj) {}

            static jboolean DEFAULT_FIELD_MATCH;
            static jboolean DEFAULT_PHRASE_HIGHLIGHT;

            FastVectorHighlighter();
            FastVectorHighlighter(jboolean, jboolean);
            FastVectorHighlighter(jboolean, jboolean, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &);

            ::java::lang::String getBestFragment(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint) const;
            ::java::lang::String getBestFragment(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint, jint) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint, jint, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::java::util::Set &, jint, jint, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            ::org::apache::lucene::search::vectorhighlight::FieldQuery getFieldQuery(const ::org::apache::lucene::search::Query &) const;
            ::org::apache::lucene::search::vectorhighlight::FieldQuery getFieldQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &) const;
            jint getPhraseLimit() const;
            jboolean isFieldMatch() const;
            jboolean isPhraseHighlight() const;
            void setPhraseLimit(jint) const;
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
        namespace vectorhighlight {
          extern PyTypeObject PY_TYPE(FastVectorHighlighter);

          class t_FastVectorHighlighter {
          public:
            PyObject_HEAD
            FastVectorHighlighter object;
            static PyObject *wrap_Object(const FastVectorHighlighter&);
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
