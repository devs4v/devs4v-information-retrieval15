#ifndef org_apache_lucene_search_postingshighlight_PostingsHighlighter_H
#define org_apache_lucene_search_postingshighlight_PostingsHighlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class Query;
        class TopDocs;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
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
        namespace postingshighlight {

          class PostingsHighlighter : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_39c7bd3c,
              mid_highlight_cfb8b283,
              mid_highlight_c287afc1,
              mid_highlightFields_52512a83,
              mid_highlightFields_d3afe138,
              mid_highlightFields_20e79c3d,
              mid_getFormatter_a176835f,
              mid_getScorer_b8762390,
              mid_highlightFieldsAsObjects_d3afe138,
              mid_getMultiValuedSeparator_5fdc3f5d,
              mid_getBreakIterator_4cb4d821,
              mid_loadFieldValues_350d45ad,
              mid_getIndexAnalyzer_29a2299f,
              mid_getEmptyHighlight_863ca84c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PostingsHighlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PostingsHighlighter(const PostingsHighlighter& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_MAX_LENGTH;

            PostingsHighlighter();
            PostingsHighlighter(jint);

            JArray< ::java::lang::String > highlight(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::TopDocs &) const;
            JArray< ::java::lang::String > highlight(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::TopDocs &, jint) const;
            ::java::util::Map highlightFields(const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::TopDocs &) const;
            ::java::util::Map highlightFields(const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::IndexSearcher &, const JArray< jint > &, const JArray< jint > &) const;
            ::java::util::Map highlightFields(const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::TopDocs &, const JArray< jint > &) const;
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
        namespace postingshighlight {
          extern PyTypeObject PY_TYPE(PostingsHighlighter);

          class t_PostingsHighlighter {
          public:
            PyObject_HEAD
            PostingsHighlighter object;
            static PyObject *wrap_Object(const PostingsHighlighter&);
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
